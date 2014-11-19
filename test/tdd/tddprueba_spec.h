/**
 * @file tddprueba_spec.h
 * @author  Wyllman <wyllman@gmail.com>
 * @version 0.0.1
 * @date   Noviembre, 2014
 * @brief
 *
 * @section DESCRIPTION
 * @details
 *
 */
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
