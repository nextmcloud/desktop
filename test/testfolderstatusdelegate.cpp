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
        QCOMPARE(ret, "A local folder and a directory in the cloud will be synced and updated automatically");
    }

    void testaddFolderText_AB_Headline()
    {
        QString ret = FolderStatusDelegate::addFolderText(FolderStatusDelegate::addButtonText::AB_Headline);
        QCOMPARE(ret, "Add folder synchronization");
    }

    void testaddFolderText_Other()
    {
        QString ret = FolderStatusDelegate::addFolderText((FolderStatusDelegate::addButtonText)3);
        QCOMPARE(ret, "Add folder synchronization");
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
};

QTEST_MAIN(TestFolderStatusDelegate)
#include "testfolderstatusdelegate.moc"
