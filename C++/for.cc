////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

#include <iostream>

#include <vector>

using namespace std ;

int(main()){

     char(*(punteroiteracioncaracteres))=(&(iteracioncaracteres[0]));

     for( int(i){0};(i)<(34);(i++)){(std::cout)<<(i);}

     for(int(i){0};(i)<(34);(i++)){(std::cout)<<(iteracioncaracteres[i]);}

     for(int(i){0};(i)<(34);(i++)){(std::cout)<<(*(punteroiteracioncaracteres));(++(punteroiteracioncaracteres));}

     delete[](punteroiteracioncaracteres);

     for(int(i){0};(i)<(100);(i--)){std::cout)<<(i);}

     return(0);

}

#include <iostream>

using namespace std ;

int factorial(int(n)){

     if((n)<(0)){return(0);}
     
     else((n)>(1)){return((n)*(factorial((n)-(1)))}

}

int(main()){return(0);}

////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////


// Programacion imperativa ( C )

// Programacion Orientada a objetos ( C++ )

// metaprogramacion ( C++ )

// programacion concurrente ( OpenMP ( C++ )

// programacion paralela ( MPI ( C++ )

// programacion reactiva ( C++ )

// Cuda ( C++ )

// programacion funcional ( Rust )

