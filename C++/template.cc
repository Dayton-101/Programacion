#include <iostream>

using namespace std;

template < typename T >

T nebulosa(T numero1 , T numero2){return((numero1)+(numero2));}

int(main()){

     int(primervalor){0};
     
     double(segundovalor){0.0};
     
     (primervalor)=(nebulosa<int>((10),(20)));
     
     (cout)<<("10 + 20 : ")<<(primervalor)<<('\n');
     
     (segundovalor)=(nebulosa<double>((20.34),(30.23)));
     
     (cout)<<("20.34 + 30.23 : ")<<(segundovalor)<<('\n');
     
     return(0);

}
