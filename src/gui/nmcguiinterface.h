/*
 * Copyright (C) by Daniel Molkentin <danimo@owncloud.com>
 *
 * This program is free software; you can redistribute it and/or modify
 * it under the terms of the GNU General Public License as published by
 * the Free Software Foundation; either version 2 of the License, or
 * (at your option) any later version.
 *
 * This program is distributed in the hope that it will be useful, but
 * WITHOUT ANY WARRANTY; without even the implied warranty of MERCHANTABILITY
 * or FITNESS FOR A PARTICULAR PURPOSE. See the GNU General Public License
 * for more details.
 */

#ifndef MIRALL_NMCGUIINTERFACE_H
#define MIRALL_NMCGUIINTERFACE_H

namespace OCC {

/**
 * @brief The NMCGuiInterface class
 * @ingroup gui
 */
class NMCGuiInterface
{

public:
    explicit NMCGuiInterface() = default;
    ~NMCGuiInterface() = default;

protected:
    virtual void setDefaultSettings() = 0;
    virtual void setLayout() = 0;
    virtual void setLogic() = 0;

private:

};


} // namespace OCC
#endif // MIRALL_NMCGUIINTERFACE_H
