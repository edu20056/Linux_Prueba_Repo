#include <iostream>
#include <stdio.h>
#include <cstdint>  
#include <random>  

// & retrornar la posicion de variable
// * acceder a variable

int sumaDeNumeroYPuntero(int num1, int num2)
{
    int num3 = num1 + num2;
    int* ptr = &num3;
    printf("Se ingresaron los valores %d y %d, el puntero de la suma es %p", num1, num2, ptr);
    return 0;
}

int main()
{
    sumaDeNumeroYPuntero(12,5);
    return 0;
}