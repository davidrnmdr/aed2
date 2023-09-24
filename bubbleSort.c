#include <stdio.h>
#include <stdlib.h>
#include <time.h>

void swap(int *x, int *y){
    int aux;
    aux = *x;
    *x = *y;
    *y = aux;
}


void bubbleSort(int v[], int n) {
    //i for defines the lower bound of the sorted sub-array
    //therefor, the refered sub-array is the rightmost
    for(int i = n - 1; i > 0; i--) {

        //j for is used to compare sequencial elements
        for(int j = 0; j < i; j++) {

            //swaps if the first is greater than the second
            if(v[j] > v[j + 1]) swap(&v[j], &v[j + 1]);
        }
    }
}

int main() {
    int l0 = 1000;
    int l1 = 2000;
    int l2 = 4000;
    int l3 = 10000;
    int l4 = 20000;
    int l5 = 40000;
    int l6 = 1000000;
    int l7 = 500000;
    int l8 = 250000;

    int* v = (int*) malloc(l8 * sizeof(int));
    srand(time(NULL));
    for(int i = 0; i < l8; i++) v[i] = rand() % (1000 + 1 - 0) + 0;

    clock_t begin = clock();
    bubbleSort(v, l8);
    clock_t end = clock();

    double time_spent = (double)(end - begin) / CLOCKS_PER_SEC;
    printf("%lf", time_spent);

    return 0;
}
