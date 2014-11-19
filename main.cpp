//#include <QCoreApplication>
#include "globalConf.h"

#if TEST_CHECKING
   #include <cppunit/TestSuite.h>
   #include <cppunit/Test.h>
   #include <cppunit/ui/text/TestRunner.h>
   #include "test/Segunda_spec.h"
   #include "test/tddprueba_spec.h"
#else

#endif

#include <iostream>

using namespace std;

int main(int argc, char *argv[]) {
    //QCoreApplication a(argc, argv); <-QT default adding
    
    cout << "Hola" << endl;

#if TEST_CHECKING
    CppUnit::TextUi::TestRunner runner;

    runner.addTest(new tddprueba_spec ());
    runner.addTest(Segunda_spec::suite());
    runner.run();
#else
   cout << "Sin modo testeo." << endl;
#endif


    return 0; //a.exec(); <-QT default adding
}
