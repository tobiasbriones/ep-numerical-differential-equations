/*
 * Copyright (c) 2020 Tobias Briones.
 *
 * This source code is licensed under the MIT license found in the
 * LICENSE file in the root directory of this source tree.
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
