# include <stdio.h>											//Cabecera que contine la entrada y salida estandar

void swap(int *a, int *b)									//Declaracion de la funcion swap que recive dos apuntadores a int
{
	int tmp = *a;											//Declaracion de una variable de apoyo para intercabiar los valores de a y b
	*a = *b;												//Igualamos el valor de a al de b
	*b = tmp;												//Igualamos el valor de b al que tenia a al principio
}

int main()													//Declaracion de la funcion main
{
	int a = 0;												//Declaracion del entero a
	int b = 3;												//Declaracion del entero b
	int *ap_a = &a;											//Declaracion del apuntador al entero a
	int *ap_b = &b;											//Declaracion del apuntador al entero b
	printf("El valor de 'a' antes es de %d\n", a);			//Se imprime el valor de a
	printf("El valor de 'b' antes es de %d\n", b);			//Se imprime el valor de b
	swap(ap_a, ap_b);										//Se manda llamar la funcion swap
	printf("El valor de 'a' despues es de %d\n", a);		//Se imprime el valor de a despues de mandar llamar la funcion swap
	printf("El valor de 'b' despues es de %d\n", b);		//Se imprime el valor de b despues de mandar llamar la funcion swap
}