#ifndef SEGUNDA_SPEC_H
#define SEGUNDA_SPEC_H

#include <cppunit/TestFixture.h>
#include <cppunit/TestAssert.h>
#include <cppunit/TestCaller.h>
#include <cppunit/TestSuite.h>
#include "../lib/tdd/segunda.h"


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
