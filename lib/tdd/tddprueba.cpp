/**
 * @file    tddprueba.cpp
 * @author  Wyllman <wyllman@gmail.com>
 * @version 0.0.1
 * @date    Noviembre, 2014
 * @brief   Clase básica para poder realizar pruebas.
 *
 * @section DESCRIPTION
 * @details
 *
 */
#include "lib/tdd/tddprueba.h"

/**
 * @brief TDDPrueba::TDDPrueba Constructor por defecto.
 */
TDDPrueba::TDDPrueba() {}

/**
 * @brief TDDPrueba::sumar Sumar dos números enteros.
 * @param[in] int1
 * @param[in] int2
 * @return int1 + int2
 */
int TDDPrueba::sumar(int int1, int int2) {
   ultimoRes = int1 + int2;
   return (ultimoRes);
}
