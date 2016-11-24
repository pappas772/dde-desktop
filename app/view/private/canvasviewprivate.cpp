/**
 * Copyright (C) 2016 Deepin Technology Co., Ltd.
 *
 * This program is free software; you can redistribute it and/or modify
 * it under the terms of the GNU General Public License as published by
 * the Free Software Foundation; either version 3 of the License, or
 * (at your option) any later version.
 **/

#include "canvasviewprivate.h"

CanvasViewPrivate::CanvasViewPrivate()
{
    cellMargins = QMargins(5,5,5,5);
    selectRect = QRect(-1, -1, 1, 1);
}
