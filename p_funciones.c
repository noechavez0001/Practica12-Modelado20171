#include <stdio.h>

/* Declaración de funciones */
int misterio1(int (*fun) (int), int);			//Declaracion de la funcion misterio1 que recibe un apuntador a una funcion y un entero
void misterio2(void (*fun) (int), int);			//Declaracion de la funcion misterio2 que recibe un apuntador a una funcion y un entero
int cuadrado_num(int);							//Declaracion de la funcion cuadrado_num que recibe un entero
void imprime_num(int);							//Declaracion de la funcion imprime_num que recibe un entero

int main()										//Declaracion de la funcion main del programa
{

  int (*fun1) (int);							//Declaracion de un apuntador a una funcion que devuelve un entero
  void (*fun2) (int);							//Declaracion de un apuntador a una funcion que devuelve lo que sea

  fun1 = &cuadrado_num;							//Inicializacion del apuntador declarado con la funcion cuadrado_num
  fun2 = &imprime_num;							//Inicializacion del apuntador declarado con la funcion imprime_num

  int var = misterio1(fun1, 3);					//Decalracion de la variable var entera mediante la llamada a la funcion misterio1
  misterio2(fun2, var);							//Llamada a la funcion misterio2
}


int misterio1(int (*fun) (int), int num)		//Implementacion de la funcion misterio1
{
    return fun(num);							//Regresa la llamada a funcion pasada con el numero pasado
}

void misterio2(void (*fun) (int), int num)		//Implementacion de la funcion misterio2
{
    fun(num);									//llama a la funcion pasada con el entero pasado
}

int cuadrado_num(int num)						//Implementacion de la funcion cuadrado_num
{
    return num * num;							//Regresa el numero pasado multiplicado por si mismo
}

void imprime_num(int num)						//Implementacion de la funcion imprime_num
{
    printf("Tada: %d\n", num);					//Imprime 'Tada: ' + el numero pasado
}
