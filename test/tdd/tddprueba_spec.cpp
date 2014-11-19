/**
 * @file    tddprueba_spec.cpp
 * @author  Wyllman <wyllman@gmail.com>
 * @version 0.0.1
 * @date    Noviembre, 2014
 * @brief   Código fuente del test para la clase TDDPrueba
 *
 * @section DESCRIPTION
 * @details
 *
 * ...
 */
#include "tddprueba_spec.h"
# include <cppunit/extensions/TypeInfoHelper.h>

/**
 * @brief tddpruebaSpec::tddpruebaSpec ...
 */
tddpruebaSpec::tddpruebaSpec() {}

/**
 * @brief tddpruebaSpec::runTest ...
 */
void tddpruebaSpec::runTest () {
   TDDPrueba prueba;
   int resultado = prueba.sumar(2, 2);

   CPPUNIT_ASSERT(resultado == 4);
   CPPUNIT_ASSERT(prueba.ultimoRes == 4);
   CPPUNIT_ASSERT_NO_THROW( prueba.getUltimo() );
}
