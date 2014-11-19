/**
 * @file main.cpp
 * @author  Wyllman <wyllman@gmail.com>
 * @version 0.0.1
 * @date   Noviembre, 2014
 * @brief Ejemplo TDD para c++
 *
 * @section DESCRIPTION
 * @details
 * Programa de ejemplo en c++ para el uso de la metodología TDD,
 * usando las librerías CppUnit.
 *
 * Archivo principal de ejecución, encargado de ejecutar las
 * pruebas (según la configuración del archivo globalConf.h)
 *
 * Las librerías CppUnit descargadas de:
 * @see http://sourceforge.net/projects/cppunit/
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

/**
 * @brief main
 * @param argc
 * @param argv
 * @return
 */
int main(int argc, char *argv[]) {
    cout << "Iniciando el ejemplo de TDD..." << endl;

#if TEST_CHECKING
    cout << "Modo testeo activado." << endl;
    cout << "Iniciando test..." << endl;

    CppUnit::TextUi::TestRunner runner; /*** Crear el objeto de CppUnit que ejecutará las pruebas */
    runner.addTest(new tddprueba_spec ());
    runner.addTest(Segunda_spec::suite());
    runner.run();
#else
   cout << "Sin modo testeo." << endl;
#endif

   cout << "Finalizando el ejemplo de TDD..." << endl;
    return 0;
}
