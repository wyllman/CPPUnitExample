/**
 * @file globalConf.h
 * @author  Wyllman <wyllman@gmail.com>
 * @version 0.0.1
 * @date   Noviembre, 2014
 * @brief Archivo de configuración global del programa
 *
 * @section DESCRIPTION
 * @details
 * Archivo de configuración global del programa.
 * Este archivo contiene:
 *   - Directivas de preprocesamiento para el compilador.
 *     En este caso, comprobar si se va a compilar o no el
 *     código para pasar los test. (TEST_CHECKING)
 *
 *
 */
#ifndef GLOBALCONF_H
#define GLOBALCONF_H

/**
 * Se define la macro TEST_CHECKING para controlar el
 * uso de cppunit (TDD) a nivel de compilación.
 *
 * Poner a false para desactivar las pruebas unitarias.
 */
#define TEST_CHECKING true

#endif // GLOBALCONF_H
