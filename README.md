# Example Project: Numerical Differential Equations

[![Project](https://raw.githubusercontent.com/tobiasbriones/images/main/example-projects/example.math.numerical.polynomial.cpp.secant-method/ep-numerical-differential-equations-badge.svg)](https://tobiasbriones.github.io/example-project/ep/numerical-differential-equations)
&nbsp;
[![GitHub Repository](https://img.shields.io/static/v1?label=GITHUB&message=REPOSITORY&labelColor=555&color=0277bd&style=for-the-badge&logo=GITHUB)](https://github.com/tobiasbriones/ep-numerical-differential-equations)

[![GitHub Project License](https://img.shields.io/github/license/tobiasbriones/ep-numerical-differential-equations.svg?style=flat-square)](https://github.com/tobiasbriones/ep-numerical-differential-equations/blob/main/LICENSE)

Example project for computing solutions for differential equations and systems of differential equations by using
numerical analysis.

This console app is based on
the [EP: Secant Method](https://github.com/tobiasbriones/ep-secant-method)
so that I was able to reuse the logic to gather user inputs and some other tools like Polynomials.
Thus, the idea was to take that part of the app as a template for creating more console apps asking
for numerical inputs. For instance, more numerical methods can be added to this app by extending
the [NumericalMethodApp](./Src/Math/Numerical/NumericalMethodApp.h) class.

## Example

Let y' = y, y(0) = 1 (a quite trivial IVP). Approximate y(4) by using the Euler method. Use four
iterations.

*Solution:*

Notice that, f(x, y) = y and our boundary is a = 0 (the initial condition) and b = 4 (the point to
approximate). The iteration number is n = 4. When entering the data into the program, it gives the
answer as shown in the Screenshot 1. So that means that:

| n | x_n | y_n | f(x_n, y_n) | h | Δy | y_n+1 |
|:---:|:-----:|:-----:|:-------------:|:---:|:----:|:-------:|
| 0 | 0   | 1   | 1           | 1 | 1  | 2     |
| 1 | 1   | 2   | 2           | 1 | 2  | 4     |
| 2 | 2   | 4   | 4           | 1 | 4  | 8     |
| 3 | 3   | 8   | 8           | 1 | 8  | 16    |
| 4 | 4   | 16  | 16          | 1 | 16 | 32    |

The obvious exact solution to this problem is y(x) = e^x. So, y(4) = e^4 ~= 54.6 whilst our
approximation yielded the value of 16.

If we put more iterations, we'll get a better answer but recall that the Euler method is useless for
real usages and only for learning purposes. In the same fashion, other NDE methods may be
implemented in this app to see them working. The solution with more iterations is depicted in the
Screenshot 2.

## Screenshots

[![Screenshot 1](https://raw.githubusercontent.com/tobiasbriones/images/main/example-projects/example.math.numerical.polynomial.cpp.secant-method/nde-screenshot-1.png)](https://github.com/tobiasbriones/images/tree/main/example-projects)

---

[![Screenshot 2](https://raw.githubusercontent.com/TobiasBriones/images/main/example-projects/example.math.numerical.polynomial.cpp.secant-method/nde-screenshot-2.png)](https://github.com/tobiasbriones/images/tree/main/example-projects)

## Contact

This project: [GitHub Repository](https://github.com/tobiasbriones/ep-numerical-differential-equations)

Tobias Briones: [GitHub](https://github.com/tobiasbriones)

Example Project: [App](https://tobiasbriones.github.io/example-project)

## About

**Example Project: Numerical Differential Equations**

Example project for computing solutions for differential equations and systems of differential equations by using
numerical analysis.

Copyright © 2020 Tobias Briones. All rights reserved.

### License

This project is licensed under the [MIT License](./LICENSE).
