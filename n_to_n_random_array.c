/* 
Didn't make the choose of the minimal num of the 2nd diagonal of array still.

*/

#include <stdio.h>
#include <stdlib.h>

int array (int in_num);

int main (void) {
    int inmput_number;
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

