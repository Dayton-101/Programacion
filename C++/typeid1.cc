#include <iostream>

#include <typeinfo>

using namespace std;

typedef type_info (typeinfo);

int(main()){

     int(i){20},(x){0};
     
     float(k){0.0};
     
     const type_info&(tipo1){typeid(i)};
     
     const typeinfo&(tipo2){typeid(k)};
     
     const typeinfo&(tipo3){typeid(x)};
     
     if( (tipo1) == (tipo2) ){(std::cout)<<("( i ) y ( k ) son del mismo tipo de dato")<<('\n');}
     
     if( (tipo1) == (tipo3) ){(std::cout)<<("( i ) y ( x ) son del mismo tipo de dato")<<('\n');}
     
     if( (tipo1) != (tipo2) ){(std::cout)<<("( i ) y ( k ) son de distinto tipo")<<('\n');}
     
     return(0);

}
