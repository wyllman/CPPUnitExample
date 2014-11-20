/**
 * @file    segunda_spec.cpp
 * @author  Wyllman <wyllman@gmail.com>
 * @version 0.0.1
 * @date    Noviembre, 2014
 * @brief   Código fuente del conjunto de tests para la clase Segunda
 *
 * @section DESCRIPTION
 * @details
 *
 */
#include "test/tdd/segunda_spec.h"

/**
 * @brief Segunda_spec::Segunda_spec
 */
Segunda_spec::Segunda_spec() {}

/**
 * @brief Segunda_spec::suite
 * @return Conjunto de pruebas de tipo CppUnit::Test
 */
CppUnit::Test* Segunda_spec::suite() {
   CppUnit::TestSuite *suiteOfTests = new CppUnit::TestSuite( "TDD-Example" );


   suiteOfTests->addTest( new CppUnit::TestCaller<Segunda_spec>(
                                  "Test Sum",
                                  &Segunda_spec::testSum ) );
   suiteOfTests->addTest( new CppUnit::TestCaller<Segunda_spec>(
                                  "Test Subtraction",
                                  &Segunda_spec::testSub ) );
   return suiteOfTests;
 }
