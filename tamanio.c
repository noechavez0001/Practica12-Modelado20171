# include <stdio.h>																	//Cabecera que contiene la entrada y salida estandar
int main()																			//Declaracion de la funcion main
{
		printf ("El tipo Short tiene tamaño %lu \n", sizeof(short));				//imprime el tamaño de un Short
        printf ("El tipo Int tiene tamaño %lu \n", sizeof(int));					//imprime el tamaño de un Int
        printf ("El tipo Unsigned Int tiene tamaño %lu \n", sizeof(unsigned int));	//imprime el tamaño de un Unsigned Int
        printf ("El tipo Apuntador a Int tiene tamaño %lu \n", sizeof(int*));		//imprime el tamaño de un Apuntador a int
        printf ("El tipo Char tiene tamaño %lu \n", sizeof(char));					//imprime el tamaño de un Char
        printf ("El tipo Float tiene tamaño %lu \n", sizeof(float));				//imprime el tamaño de un Float
        printf ("El tipo Double tiene tamaño %lu \n", sizeof(double));				//imprime el tamaño de un Double
}
