{#mainpage}

TravisCi: [![Build Status](https://travis-ci.org/wyllman/CPPUnitExample.svg?branch=master)](https://travis-ci.org/wyllman/CPPUnitExample)

CPPUnitExample
==============

#### Ejemplo del uso de la metodología TDD usando C++ y las librerías CppUnit.

Descripción de funcionalidades y clases
---------------
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
Archivo de configuración del proyecto para [Qt Creator](https://qt-project.org/) "CPPUnitTesting.pro" <br>
Archivo de configuración para la generación automática de documentación usando [DoxyGen](http://www.doxygen.org/) <br>
Archivo adicional de configuración de atributos globales del proyecto  [lib/globalConf.h](http://wyllman.github.io/CPPUnitExample/doc/html/global_conf_8h.html)<br>
Documentación generada por DoxyGen(html) en la carpeta: [doc/html/index.html](http://wyllman.github.io/CPPUnitExample/doc/html/index.html)<br>
Integración con Travis Ci usando el archivo [.travis.yml](https://github.com/wyllman/CPPUnitExample/blob/master/.travis.yml)
