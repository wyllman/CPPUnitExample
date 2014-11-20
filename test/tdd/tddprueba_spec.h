/**
 * @file    tddprueba_spec.h
 * @author  Wyllman <wyllman@gmail.com>
 * @version 0.0.1
 * @date    Noviembre, 2014
 * @brief   Expectativas para la clase TDDPrueba
 *
 * @section DESCRIPTION
 * @details
 *
 * Contiene la clase tddpruebaSpec que hereda de
 * CppUnit::TestCase. En este caso se usa como un
 * caso de prueba, poniendo los asertos en la función
 * sobreescrita "void runTest ()" propia de la clase
 * TestCase.
 *
 */
#ifndef TDDPRUEBA_SPEC_H
#define TDDPRUEBA_SPEC_H

#include <cppunit/TestCase.h>
#include "../../lib/tdd/tddprueba.h"

/**
 * @class tddprueba_spec
 * @brief The tddprueba_spec class
 */
class tddpruebaSpec: public CppUnit::TestCase {
   public:
      tddpruebaSpec();

   private:
      void runTest ();
};

#endif // TDDPRUEBA_SPEC_H
