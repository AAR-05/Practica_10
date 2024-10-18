/* Alexis Aguirre Rojas 
   Matriz 3x3 imprimir valores Ciclo Do - While
   18 de octubre de 2024 */

#include <stdio.h>

int main ()
{
    int arr [3][3] = {{1, 2, 3},{4, 5, 6},{7, 8, 9}};
    int i = 0,j = 0;
  
    printf("Imprimir matriz\n");
    do
    {
        printf("%d   ", arr[i][j]);
        j++; 
        j = 0;
        i++;
        printf("\n"); 
    }   while (i < 3 && j < 3);
    return 0;
}
