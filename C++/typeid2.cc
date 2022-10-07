#include <iostream>

#include <typeinfo>

using namespace std;

typedef type_info (typeinfo);

int(main()){

     int(numero){10};

     float(numerodecimal){20.5};

     char(caracter){('c')};


     double(numerodouble){203.434};

     const typeinfo&(tipo1){typeid(numero)};

     const typeinfo&(tipo2){typeid(numerodecimal)};

     const typeinfo&(tipo3){typeid(caracter)};

     const typeinfo&(tipo4){typeid(numerodouble)};

     (std::cout)<<("tipo 1 es de tipo : ")<<(tipo1.name())<<('\n');

     (std::cout)<<("tipo 2 es de tipo : ")<<(tipo2.name())<<('\n');

     (std::cout)<<("tipo 3 es de tipo : ")<<(tipo3.name())<<('\n');

     (std::cout)<<("tipo 4 es de tipo : ")<<(tipo4.name())<<('\n');

}
