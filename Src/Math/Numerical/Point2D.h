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

#pragma once

#include <string>

using std::string;
using std::to_string;

class Point2D
{

private:
    const double x;
    const double y;

public:
    Point2D(double, double);

    double getX() const;

    double getY() const;

    string toString() const;
};
