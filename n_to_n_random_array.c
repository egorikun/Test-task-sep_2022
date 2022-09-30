/* 
На любом языке программирования напишите программу, которая запрашивает у пользователя число N,
где N>=3, после чего создаёт двумерный числовой массив NxN, этот массив заполняется случайными числами.
После программа находит минимальный элемент побочной диагонали и выводит его на экран (см. картинку ниже). 
Укажите, на каком языке программирования вы написали код.

С

*/

#include <stdio.h>
#include <stdlib.h>

int array (int in_num);

int main (void) {
    array (input_number);
    return 0;
}

int array (int in_num) {
    printf ("Input the number of array's length & height here: ");
    scanf ("%d", &in_num);
    int array[in_num][in_num];
    if (in_num < 3) {
        printf ("Input number should be 3 or more!");
    } else {
        for (int i = 0; i < in_num; i++) {
           for (int j = 0; j < in_num; j++) {
                array[i][j] = rand()%(in_num * in_num + 1);
                if (j < in_num) {
                    printf("%d ", array[i][j]);
                } else if (i < in_num) {
                    printf("%d\n", array[i][j]);
                } else {
                    printf("%d", array[i][j]);
                }
                
            }
        }
    }
    return 0;
}

