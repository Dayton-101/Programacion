

fn main(){

    // tuplas

    let tupla1 = ( 1u8 , 2u8 , 3u8 );

    let tupla2 = ( -1i8 , -2i8 , -3i8 );

    let tupla3 = ( 13.23f32 , 0.314159f64 , 1234.34f32 );

    let tuplacombinada = ( 1u8 , -3i8 , 13.23f32 ); // las tuplas pueden contener valores de distinto tipo

    let tuplacombinada2 = ( 10u16 , -12i16 , "Tupla" , 134.32f64 );
    
    println!("tupla1{:?}", tupla1);

    println!("tupla2{:?}", tupla2);

    println!("{:?}", tupla3); // es necesario implementar la expresion {:?} para imprimir una tupla

    println!("{:?}", tuplacombinada);

    let tuplasdetuplas = ( ( 1u8, 2u16, 2u32 ) , ( 4u64, -1i8 ) , -2i16 ); // las tuplas pueden ser miembros , de otras tuplas
    
    let elementotupla = ("añadir ( , ) para crear un elemento tupla {:?}", (5u32,)); // para crear un elemento tipo de tupla es necesario implementar una (,) al final de la tupla (5u32)

    println!("visualizar elementos de la tupla = {}", tuplacombinada2.2 );

    println!("visualizar elementos de la tupla = {}", tuplacombinada2.0 ); // imprimiendo en patalaa el elemento ( 0 ) de la tupla ( tuplacombinada2 )

    let desestructuraciontupla = ( 12u16 , "Cadena" , 3.1415f64 ); // desestructurando tupla para crear enlaces

    let (a , b , c , d ) = desestructuraciontupla; // desestructuracion

    println!("{:?} , {:?} , {:?}", a , b , c); // enlace , ( a = 12 ) , ( b = cadena ) , ( b = 3.1415 ) 

}

fn parametrostupla(pair: (i32 , bool) -> (bool , i32)){} // las tuplas pueden ser usadas como parametros de una funcion


