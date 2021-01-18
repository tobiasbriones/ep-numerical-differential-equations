/*
 * Copyright (c) 2020 Tobias Briones. All rights reserved.
 *
 * SPDX-License-Identifier: MIT
 *
 * This file is part of Example Project: Numerical Differential Equations.
 *
 * This source code is licensed under the MIT License found in the
 * LICENSE file in the root directory of this source tree or at
 * https://opensource.org/licenses/MIT.
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
