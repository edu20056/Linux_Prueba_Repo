#include <iostream>
#include <stdio.h>
#include <cstdint>  
#include <random>  

// & retrornar la posicion de variable
// * acceder a variable

int sumaDeNumerosYPuntero(int num1, int num2)
{
    static int num3 = num1 + num2;
    int* ptr = &num3;
    printf("Se ingresaron los valores %d y %d, el puntero de la suma es %p", num1, num2, ptr);
    return 0;
}


int* restaDeNUmerosYPuntero(int num1, int num2)
{
    static int num3 = num1 - num2;
    int* ptr = &num3;
    printf("Se ingresaron los valores %d y %d, la resta es %d, su puntero es %p", num1, num2, num3, ptr);
    return ptr;
}
int main()
{
    sumaDeNumerosYPuntero(12,5);
    printf("\n");
    int* ptr = restaDeNUmerosYPuntero(12, 2);
    printf("\n");
    printf("\n");
    printf("El puntero de resta apunta a %d con valor de memoria de %p", *ptr, ptr);
    printf("\n");

    return 0;
}