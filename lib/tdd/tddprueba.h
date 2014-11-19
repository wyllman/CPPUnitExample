/**
 * @file tddprueba.h
 * @author  Wyllman <wyllman@gmail.com>
 * @version 0.0.1
 * @date   Noviembre, 2014
 * @brief
 *
 * @section DESCRIPTION
 * @details
 *
 */
#ifndef TDDPRUEBA_H
#define TDDPRUEBA_H

#if TESTCHECKING
   #include "../test/tdd/tddprueba_spec.h"
#endif

class TDDPrueba {
   public:
      TDDPrueba();
      inline int getUltimo () { return ultimoRes; }

   private:
      int ultimoRes;
      int sumar(int, int);

#if TESTCHECKING
      friend class tddprueba_spec;
#endif
};

#endif // TDDPRUEBA_H
