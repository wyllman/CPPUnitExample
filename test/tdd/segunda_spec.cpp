/**
 * @file segunda_spec.cpp
 * @author  Wyllman <wyllman@gmail.com>
 * @version 0.0.1
 * @date   Noviembre, 2014
 * @brief
 *
 * @section DESCRIPTION
 * @details
 *
 */
#include "test/tdd/segunda_spec.h"

Segunda_spec::Segunda_spec() {
}

CppUnit::Test* Segunda_spec::suite() {
   CppUnit::TestSuite *suiteOfTests = new CppUnit::TestSuite( "CalculatorTestSuite" );


   suiteOfTests->addTest( new CppUnit::TestCaller<Segunda_spec>(
                                  "Test Sum",
                                  &Segunda_spec::testSum ) );
   suiteOfTests->addTest( new CppUnit::TestCaller<Segunda_spec>(
                                  "Test Subtraction",
                                  &Segunda_spec::testSub ) );
   return suiteOfTests;
 }
