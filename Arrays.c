#include <stdio.h>

int main () {
		
	int x [] = { 1, 2, 3, 4 } ;
	int size = sizeof (x) / sizeof ( x [0] ) ;
	printarray ( x , size ) ;

}

int printarray ( int x [], int size ) {

	int i;

	for ( i = 0 ; i < 4 ; i = i + 1 ) {
	printf ("\n%i\n", x [i] ) ;


	}


	return 0;
}
