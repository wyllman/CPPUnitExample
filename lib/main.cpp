/**
 * @file main.cpp
 * @author  Wyllman <wyllman@gmail.com>
 * @version 0.0.1
 *
 * @section LICENSE
 *
 * @section DESCRIPTION
 *
 * Programa de ejemplo en c++ para el uso de la metodología TDD,
 * usando las librerías CppUnit.
 *
 * Archivo principal de ejecución, encargado de ejecutar las
 * pruebas (según la configuración del archivo globalConf.h)
 *
 */
#include "globalConf.h"

#if TEST_CHECKING
   #include <cppunit/TestSuite.h>
   #include <cppunit/Test.h>
   #include <cppunit/ui/text/TestRunner.h>
   #include "test/tdd/Segunda_spec.h"
   #include "test/tdd/tddprueba_spec.h"
#else

#endif

#include <iostream>

using namespace std;

int main(int argc, char *argv[]) {
    cout << "Hola" << endl;

#if TEST_CHECKING
    CppUnit::TextUi::TestRunner runner;

    runner.addTest(new tddprueba_spec ());
    runner.addTest(Segunda_spec::suite());
    runner.run();
#else
   cout << "Sin modo testeo." << endl;
#endif

    return 0;
}
