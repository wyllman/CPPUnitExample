#ifndef TDDPRUEBA_H
#define TDDPRUEBA_H

#if TESTCHECKING
   #include "../test/tddprueba_spec.h"
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
