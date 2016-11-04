#include <stdio.h>                                  //Cabecera que contiene la entrada y salida estandar

void BubbleSort (int a[], int length)               //Declaracion de la funcion BubbleSort
{
	int i, j, temp;                                 //Declaracion de variables de apoyo en el ordenamiento
	
	for (i = 0; i < length; i++)                    //Iteraciones sobre el numero de elementos
	{
		for (j = 0; j < length - 1; j++)            //Iteraciones para hacer los intercambios
		{
			if (a[j + 1] < a[j])                    //Si el valor del indice j es mayor que el del j+1 se intercambian
			{
				temp = a[j];                        //Se iguala la variable temporal al valor del indice j para el intercambio
				a[j] = a[j + 1];                    //Se iguala el indice j al j+1
				a[j + 1] = temp;                    //Se iguala el j+1 a la guardada en la variable temporal
			}
		}
	}
}

int main()
{
	int ar[10] = {6,74,2,35,61,5,7,2,23,54};        //Declaracion del arreglo de prueba
	int num = 10;                                   //Numero de elementos del arreglo
	for (int k = 0; k < num; k++) {                 //Iteracion sobre el arreglo
		printf("%5d", ar[k]);                       //Se imprimen los elementos del arreglo
	}
	printf("\n");                                   //Se imprime un salto de linea para diferenciar
	BubbleSort(ar, num);                            //Se llama el metodo BubbleSort
	for (int k = 0; k < num; k++) {                 //Iteracion sobre el arreglo
		printf("%5d", ar[k]);                       //Se imprimen los elementos del arreglo
	}
	printf("\n");                                   //Se imprime salto de linea
}