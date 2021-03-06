// Copyright 2015 - 2021, GIBIS-Unifesp and the wiRedPanda contributors
// SPDX-License-Identifier: GPL-3.0-or-later

#include "and.h"

And::And(QGraphicsItem *parent)
    : GraphicElement(ElementType::AND, ElementGroup::GATE, 2, 8, 1, 1, parent)
{
    pixmapSkinName = {":/basic/and.png"};

    setOutputsOnTop(true);
    setPixmap(pixmapSkinName[0]);
    updatePorts();
    setCanChangeSkin(true);
    setPortName("AND");
    setToolTip("AND");
}

void And::setSkin(bool defaultSkin, const QString &filename)
{
    pixmapSkinName[0] = defaultSkin ? ":/basic/and.png" : filename;
    setPixmap(pixmapSkinName[0]);
}
