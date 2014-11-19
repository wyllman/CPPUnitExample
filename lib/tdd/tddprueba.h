/**
 * @file    tddprueba.h
 * @author  Wyllman <wyllman@gmail.com>
 * @version 0.0.1
 * @date    Noviembre, 2014
 * @brief   Clase básica para poder realizar pruebas.
 *
 * @section DESCRIPTION
 * @details
 *
 * Clase básica para poder realizar varios test sobre
 * la misma.
 *
 * Contiene un atributo interno "int ultimoRes" que va
 * a contener el resultado de la última llamada a la
 * función suma. Accesible de forma publica con getUltimo()
 *
 * Contiene una función privada "int sumar(int, int)" que
 * retorna el valor de la suma de los dos parámetros
 * que se le pasen.
 *
 * En caso de existir la directiva TESTCHECKING a true se
 * le da acceso a la clase "tddprueba_spec" para acceder
 * a los atributos y métodos privados de esta clase.<br>
 * "friend class tddprueba_spec;"
 *
 *
 */
#ifndef TDDPRUEBA_H
#define TDDPRUEBA_H

#if TESTCHECKING
   #include "../test/tdd/tddprueba_spec.h"
#endif

/**
 * @class TDDPrueba
 * @brief Clase de prueba para pasar los test
 */
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
