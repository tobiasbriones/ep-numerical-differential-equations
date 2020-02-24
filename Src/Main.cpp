/*
 * Copyright (c) 2020 Tobias Briones.
 *
 * This source code is licensed under the MIT license found in the
 * LICENSE file in the root directory of this source tree.
 */

#include "Math/Numerical/EulerMethodApp.h"
#include "Main.h"

int main()
{
    EulerMethodApp app;

    app.run();
    //runAllTests();

    /*Polynomial p;
    p.addMonomial(1, 1, 1);
    p.addMonomial(1, 2, 14);
    p.addMonomial(3, 4, -14);
    p.addMonomial(0, 0, 1555);
    p.addMonomial(5, 2, 1);
    cout << to_string(p.eval(2.25, -8));*/
	return 0;
}
