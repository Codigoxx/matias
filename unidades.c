#include <stdio.h>

int main () {

	numeros (56);
	return 0 ;
}

int numeros (int x) {

	int centenas = x / 100 ;

		if ( x >= 100) {

		printf ( " %i \n ", centenas ) ;
	}

	int decenas = (x - centenas* 100) / 10 ;

		if ( x >= 10) {
		 
		printf ( " %i \n ", decenas ) ;
	}

	int unidades = x - centenas * 100 - decenas * 10 ;

		if ( x >= 1) {

		printf ( " %i \n ", unidades ) ;
}
	
	return 0;
}




