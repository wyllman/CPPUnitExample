CPPUnitExample  {#mainpage}
==============

TravisCi: [![Build Status](https://travis-ci.org/wyllman/CPPUnitExample.svg?branch=master)](https://travis-ci.org/wyllman/CPPUnitExample)

#### Ejemplo del uso de la metodología TDD usando C++ y las librerías CppUnit.

Descripción de funcionalidades y clases
---------------
- Uso de CPPUnit:
  - [tddpruebaSpec](http://wyllman.github.io/CPPUnitExample/doc/html/tddprueba__spec_8h.html): Define un caso de uso o prueba. Se sobreescribe la función (heredada de CppUnit::TestCase) "void runTest()".

  - [Segunda_spec](http://wyllman.github.io/CPPUnitExample/doc/html/segunda__spec_8h.html): Define un conjunto de casos de uso o pruebas. Se utiliza una función estática que crea y retorna un objeto de tipo CppUnit::Test. Este objeto contiene el conjunto de pruebas. Ofrece mayor control y versatilidad que el caso anterior.

- Clases:
  - [TDDPrueba](http://wyllman.github.io/CPPUnitExample/doc/html/class_t_d_d_prueba.html): ...

  - [Segunda](http://wyllman.github.io/CPPUnitExample/doc/html/class_segunda.html): ...

Librerías CppUnit
---------------

Puedes encontrar las librerías CppUnit en: <br>
http://sourceforge.net/projects/cppunit/

y su documentación en: <br>
http://cppunit.sourceforge.net/doc/cvs/cppunit_cookbook.html

comando instalación en entornos linux:<br>

    sudo apt-get install libcppunit-dev

Compilación usando QT (Sin el uso de Qt Creator)
------------------------------------------------

Instalación del compilador en entornos linux:<br>

    sudo apt-get install libqt4-dev

Compilación del proyecto .pro: <br>

    qmake -project
    qmake CPPUnitTesting.pro
    make

Contenidos adicionales
----------------------
Archivo de configuración [CPPUnitTesting.pro](https://github.com/wyllman/CPPUnitExample/blob/master/CPPUnitTesting.pro)del proyecto para [Qt Creator](https://qt-project.org/) "CPPUnitTesting.pro" <br>
Archivo de configuración [Doxyfile](https://github.com/wyllman/CPPUnitExample/blob/master/Doxyfile)para la generación automática de documentación usando [DoxyGen](http://www.doxygen.org/) <br>
Archivo adicional de configuración [lib/globalConf.h](http://wyllman.github.io/CPPUnitExample/doc/html/global_conf_8h.html) de atributos globales del proyecto <br>
Documentación generada por DoxyGen(html) en la carpeta: [doc/html/index.html](http://wyllman.github.io/CPPUnitExample/doc/html/index.html)<br>
Integración con Travis Ci usando el archivo [.travis.yml](https://github.com/wyllman/CPPUnitExample/blob/master/.travis.yml)
