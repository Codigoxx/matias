#include <stdio.h>

int main () {
	printf ( " Result: %i \n ", fibonacci (8) );
	// %i = devuelve un numero entero
	// \n = Salto de linea

}

int fibonacci ( int n ) {

	// en los if se definen los casos base 

	if ( n = 1 ) {
		return 0 ;
	}

	if ( n = 2 ) {
			return 1 ;
	}

// Define que va a pasar si el numero es negativo

	if  ( n <= 0 ) {
		return -1 ;
		printf( " Numero no valido\n" ) ;
	}
	
	int i ;
	int x = 0 ;
	int y = 1 ;
	int result = 0 ;

	for ( i = 3 ; i <= n ; i = i + 1 ) {

		// i = 1, la operacion se va a ejecutar hasta que i sea menor o 		igual a n, se va a hacer i + 1 

		result = x + y ;

		x = y ;

		y = result ;

	}
	return result;
	
}
