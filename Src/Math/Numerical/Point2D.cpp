/*
 * Copyright (c) 2020 Tobias Briones.
 *
 * This source code is licensed under the MIT license found in the
 * LICENSE file in the root directory of this source tree.
 */

#include "Point2D.h"

Point2D::Point2D(double x, double y) :
    x(x),
    y(y)
{
}

double Point2D::getX() const
{
    return x;
}

double Point2D::getY() const
{
    return y;
}

string Point2D::toString() const
{
    return "(" + to_string(x) + ", " + to_string(y) + ")";
}
