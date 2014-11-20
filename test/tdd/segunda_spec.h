/**
 * @file    segunda_spec.h
 * @author  Wyllman <wyllman@gmail.com>
 * @version 0.0.1
 * @date    Noviembre, 2014
 * @brief   Expectativas para la clase Segunda
 *
 * @section DESCRIPTION
 * @details
 *
 * Contiene la clase Segunda_spec que hereda de
 * CppUnit::TestFixture. Se usa como clase para
 * generar un conjunto de casos de uso. La función
 * "static CppUnit::Test* suite();" se encarga de
 * generar el objeto Test con todas las pruebas
 * definidas.
 *
 * Las funciones "void setUp();" y "void tearDown();"
 * son llamadas antes y después (respectivamente) de
 * cada ejecución de una prueba (por ejemplo, en este
 * caso la función "void testSum();" será usada como
 * una prueba).
 *
 */
#ifndef SEGUNDA_SPEC_H
#define SEGUNDA_SPEC_H

#include <cppunit/TestFixture.h>
#include <cppunit/TestAssert.h>
#include <cppunit/TestCaller.h>
#include <cppunit/TestSuite.h>
#include "../../lib/tdd/segunda.h"

/**
 * @class Segunda_spec
 * @brief The Segunda_spec class
 */
class Segunda_spec: public CppUnit::TestFixture {
   public:
      Segunda_spec();

      static CppUnit::Test* suite();

      void setUp() {}
      void tearDown() {}

   protected:
      void testSum() {
         CPPUNIT_ASSERT(true);
      }
      void testSub() {
         CPPUNIT_ASSERT(true);
      }
};

#endif // SEGUNDA_SPEC_H
