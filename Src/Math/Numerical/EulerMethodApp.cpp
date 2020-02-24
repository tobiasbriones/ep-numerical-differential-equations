/*
 * Copyright (c) 2020 Tobias Briones.
 *
 * This source code is licensed under the MIT license found in the
 * LICENSE file in the root directory of this source tree.
 */

#pragma once
#include "EulerMethodApp.h"

EulerMethodApp::EulerMethodApp()
{
	pPolynomial = NULL;

    reset();
}

EulerMethodApp::~EulerMethodApp()
{
    delete pPolynomial;
    pPolynomial = NULL;
}

// --------------------------------------------- NUMERICAL METHOD APP --------------------------------------------- //
string EulerMethodApp::getName() const
{
    return "EULER";
}

bool EulerMethodApp::gatherInput()
{
	try
	{
		n = getInt("Enter the number of monomials to enter for the polynomial: ");
		pPolynomial = new Polynomial();

		for (int i = 1; i <= n; i++)
		{
			cout << "Enteting monomial #" << i << endl;
			double coefficient = getDouble("Enter the coefficient: ");
			double xdeg = getInt("Enter the degree of x: ");
			double ydeg = getInt("Enter the degree of y: ");

			pPolynomial->addMonomial(xdeg, ydeg, coefficient);
		}
		cout << pPolynomial->toString() << endl;

		a = getDouble("Enter a: ");
		b = getDouble("Enter b: ");
		n = getInt("Enter n: ");
		initialValue = getDouble("Enter y(a): ");
	}
	catch (const runtime_error & e)
	{
		printf("\n");
		printf(e.what());
		printf("\n");
		return false;
	}
	return true;
}

bool EulerMethodApp::execute()
{
	result = compute(*pPolynomial, n, a, b, initialValue);
	return true;
}

void EulerMethodApp::showResults() const
{
	printf("\n");
	printf("                               RESULTS                                ");
	printf("\n");
	printf("   ________________________________________________________________   ");
	printf("\n");
	printf("\n");
	
	for (size_t i = 0; i < result.size(); i++)
	{
		printf("%d %s\n", i, result.at(i).toString().c_str());
	}
	printf("\n");
}

void EulerMethodApp::reset()
{
    n = 0;
    a = 0;
    b = 0;

    delete pPolynomial;
    pPolynomial = NULL;
}

// --------------------------------------------- STATIC METHODS --------------------------------------------- //
double EulerMethodApp::roundPrecision(double value, double error)
{
	return round(value / error) * error;
}

vector<Point2D> EulerMethodApp::compute(Polynomial& p, int n, double a, double b, double initialValue)
{
	vector<Point2D> result;
	double h = (b - a) / n;
	double currentX = a;
	double currentY = initialValue;

	/*cout << "Computing for P(x,y)= " << p.toString() << endl;
	cout << "n = " << n << endl;
	cout << "h = " << h << endl;
	cout << "Current x = " << currentX << ", Current y = " << currentY << endl;*/


	result.push_back(Point2D(currentX, currentY));
	for (int i = 1; i <= n; i++)
	{
		currentY = currentY + h * p.eval(currentX, currentY);
		currentX += h;

		result.push_back(Point2D(currentX, currentY));
		//cout << "Current x = " << currentX << ", Current y = " << currentY << endl;
	}
	return result;
}
