#ifndef TDDPRUEBA_SPEC_H
#define TDDPRUEBA_SPEC_H

#include <cppunit/TestCase.h>
#include "../../lib/tdd/tddprueba.h"

class tddprueba_spec: public CppUnit::TestCase {
   public:
      tddprueba_spec();

   private:
      void runTest ();
};

#endif // TDDPRUEBA_SPEC_H
