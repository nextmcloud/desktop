/*
 *    This software is in the public domain, furnished "as is", without technical
 *    support, and with no warranty, express or implied, as to its usefulness for
 *    any purpose.
 *
 */

#include <QtTest>
#include <QPainter>
#include "folderstatusmodel.h"
#define private public
#include "folderstatusdelegate.h"
#include "folderstatusdelegate.cpp"
#undef private

using namespace OCC;

class TestFolderStatusDelegate: public QObject
{
    Q_OBJECT

private slots:
    void testaddFolderText_AB_Textline()
    {
        QString ret = FolderStatusDelegate::addFolderText(FolderStatusDelegate::addButtonText::AB_Textline);
        QCOMPARE(ret, "Synchronize any other local folder with your MagentaCLOUD.");
    }

    void testaddFolderText_AB_Headline()
    {
        QString ret = FolderStatusDelegate::addFolderText(FolderStatusDelegate::addButtonText::AB_Headline);
        QCOMPARE(ret, "Add Live-Backup");
    }

    void testaddFolderText_Other()
    {
        QString ret = FolderStatusDelegate::addFolderText((FolderStatusDelegate::addButtonText)3);
        QCOMPARE(ret, "Add Live-Backup");
    }

    void testaddButtonRect()
    {
        QRect within(10, 20, 80, 60);
        Qt::LayoutDirection direction = Qt::LayoutDirection::LeftToRight;

        QRect ret = FolderStatusDelegate::addButtonRect(within, direction);
        QCOMPARE(ret, within);
    }

    void testSizeHint()
    {
        FolderStatusDelegate folderStDel;

        QStyleOptionViewItem option;
        option.font = {"Times", 10, QFont::Bold};

        QObject *parent = new QObject;
        QAbstractItemModel *model = new FolderStatusModel(parent);
        QModelIndex index = model->index(1,1);
        QVERIFY(index.isValid());

        QSize expectedSize = {520,64};

        QSize retSize = folderStDel.sizeHint(option, index);
        QCOMPARE(retSize, expectedSize);

        delete model;
        delete parent;
    }

    void testpaint()
    {
        FolderStatusDelegate folderStDel;
        QImage img(100, 100, QImage::Format_ARGB32); /*To Activate Painting */
        img.fill(Qt::transparent);
        QPainter painter(&img);

        QStyleOptionViewItem option;
        option.rect = QRect(10, 20, 80, 60);
        option.font = {"Times", 10, QFont::Bold};

        QObject *parent = new QObject;
        QAbstractItemModel *model = new FolderStatusModel(parent);
        QModelIndex index = model->index(0,1);
        QVERIFY(index.isValid());

        QFont pre = painter.font();

        folderStDel.paint(&painter, option, index);

        /*  font should be restore */
        QCOMPARE(painter.font(), pre);

        delete model;
        delete parent;
    }

    void testrootFolderHeightWithoutErrors()
    {
        FolderStatusDelegate folderStDel;
        QFont font = {"Times", 10, QFont::Bold};
        QFontMetrics fontMatrics(font);

        const int aliasMargin = fontMatrics.height() / 2;
        const int margin = fontMatrics.height() / 4;
        const int topMargin = 15;
        int expectedHeight = aliasMargin + topMargin; // margin to top
        expectedHeight += fontMatrics.height(); // alias
        expectedHeight += margin; // between alias and local path
        expectedHeight += fontMatrics.height(); // local path
        expectedHeight += margin; // between local and remote path
        expectedHeight += fontMatrics.height(); // remote path
        expectedHeight += margin; // bottom margin


        int retHeight = folderStDel.rootFolderHeightWithoutErrors(fontMatrics, fontMatrics);

        QCOMPARE(retHeight, expectedHeight);
    }
};

QTEST_MAIN(TestFolderStatusDelegate)
#include "testfolderstatusdelegate.moc"
