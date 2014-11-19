/**
 * @file tddprueba.cpp
 * @author  Wyllman <wyllman@gmail.com>
 * @version 0.0.1
 * @date   Noviembre, 2014
 * @brief
 *
 * @section DESCRIPTION
 * @details
 *
 */
#include "lib/tdd/tddprueba.h"

TDDPrueba::TDDPrueba() {}

int TDDPrueba::sumar(int int1, int int2) {
   ultimoRes = int1 + int2;
   return (ultimoRes);
}
