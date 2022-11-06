#include <stdio.h>
int soma (int n1, int n2) {
    return ( n1 + n2 ) ;
}
void main ( ) {
    int n1,n2;
    printf ("Entre com dois números: ") ;
    scanf ( "%d" , &n1 ) ;
    scanf ( "%d" , &n2 ) ;
    printf ("A soma de %d e %d é : %d\n", n1, n2, soma(n1,n2)) ;
}