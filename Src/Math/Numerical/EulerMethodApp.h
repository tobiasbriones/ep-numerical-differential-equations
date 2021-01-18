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

#include <cmath>
#include "NumericalMethodApp.h"
#include "Point2D.h"
#include "../Function/Polynomial/Polynomial.h"

class EulerMethodApp : public NumericalMethodApp
{

private:
    int n;
    double a;
    double b;
    Polynomial* pPolynomial;
    double initialValue;
    vector <Point2D> result;

    static double roundPrecision(double value, double error);

protected:
    string getName() const;

    bool gatherInput();

    bool execute();

    void showResults() const;

    void reset();

public:
    EulerMethodApp();

    ~EulerMethodApp();

    static vector <Point2D> compute(Polynomial&, int, double, double, double);
};
