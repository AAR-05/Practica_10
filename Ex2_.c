/* Alexis Aguirre Rojas 
   Matriz 3x3 imprimir valores Ciclo While
   18 de octubre de 2024 */

#include <stdio.h>

int main ()
{
    int arr [3][3] = {{1, 2, 3},{4, 5, 6},{7, 8, 9}};
    int i,j;
  
    printf("Imprimir matriz\n");
    while (i < 3)
    {
        printf("%d   ", arr[i][j]);
        j++; 
        if (j == 3) 
        {
            j = 0; 
            i++;   
            printf("\n"); 
        }
    }   
    return 0;
}
