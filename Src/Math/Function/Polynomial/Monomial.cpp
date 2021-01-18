/*
 * Copyright (c) 2020 Tobias Briones.
 *
 * This source code is licensed under the MIT license found in the
 * LICENSE file in the root directory of this source tree.
 */

#include "Monomial.h"

Monomial::Monomial(int degreeX, int degreeY, double coefficient) :
    degreeX(degreeX),
    degreeY(degreeY)
{
    if (degreeX < 0 || degreeY < 0)
    {
        string msg = "A monomial has non-negative degree, invalid degree";
        throw runtime_error(msg);
    }
    setCoefficient(coefficient);
}

void Monomial::setCoefficient(double coefficient)
{
    this->coefficient = coefficient;
}

double Monomial::getCoefficient() const
{
    return coefficient;
}

double Monomial::eval(double x, double y) const
{
    return coefficient * pow(x, degreeX) * pow(y, degreeY);
}

string Monomial::toString(bool positive) const
{
    string sign = (coefficient < 0) ? " - " : " + ";
    string c;

    if (coefficient == 0)
    {
        return "";
    }

    // If positive is false and the sign is positive, skip it
    if (!positive && sign == " + ")
    {
        sign = "";
    }

    // Coefficient is -1 or 1
    if ((coefficient == -1 || coefficient == 1) && (degreeX > 0 || degreeY > 0))
    {
        c = "";
    }
    else
    {
        // Coefficient is integer
        if (coefficient == floor(coefficient))
        {
            c = to_string(abs(coefficient));
            c = c.substr(0, c.find("."));
        }
            // Coefficient is decimal
        else
        {
            c = to_string(fabs(coefficient));
            int end = c.length() - 1;

            if (c[end] == '0')
            {
                do
                {
                    end--;
                }
                while (c[end] == '0');
                c = c.substr(0, end + 1);
            }
        }
    }
    if (degreeX == 0 && degreeY == 0)
    {
        return sign + c;
    }
    if (degreeX == 1 || degreeY == 1)
    {
        if (degreeX == 1)
        {
            if (degreeY == 1)
            {
                return sign + c + "x * y";
            }
            else
            {
                return sign + c + "x" + " * y^" + to_string(degreeY);
            }
        }
        else
        {
            if (degreeX == 1)
            {
                return sign + c + "x * y";
            }
            else
            {
                return sign + c + " x^" + to_string(degreeX) + " * y";
            }
        }
    }
    return sign + c + "x^" + to_string(degreeX) + " * y^" + to_string(degreeY);
}
