#include <stdio.h>
#include <stdlib.h>
#include <time.h>

#define MAX_VALUE 1000


int getMax(int arr[], int n) {
    int max = arr[0];
    int i;
    for (i = 1; i < n; i++) {
        if (arr[i] > max) {
            max = arr[i];
        }
    }
    return max;
}


void countingSortByDigit(int arr[], int n, int exp) {
    int output[n];
    int i, count[10] = {0};

    
    for (i = 0; i < n; i++) {
        count[(arr[i] / exp) % 10]++;
    }


    for (i = 1; i < 10; i++) {
        count[i] += count[i - 1];
    }


    for (i = n - 1; i >= 0; i--) {
        output[count[(arr[i] / exp) % 10] - 1] = arr[i];
        count[(arr[i] / exp) % 10]--;
    }


    for (i = 0; i < n; i++) {
        arr[i] = output[i];
    }
}

void radixSort(int arr[], int n) {
    int max = getMax(arr, n);
    int exp;
    for (exp = 1; max / exp > 0; exp *= 10) {
        countingSortByDigit(arr, n, exp);
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
    
    int* v = (int*) malloc(l6 * sizeof(int));
    srand(time(NULL));
    int i;
    
    for(i = 0; i < l6; i++) v[i] = rand() % (1000 + 1 - 0) + 0;

    clock_t begin = clock();
    
    radixSort(v, l6);
    clock_t end = clock();

    double time_spent = (double)(end - begin) / CLOCKS_PER_SEC;
    printf("%lf", time_spent);
    

    return 0;
}
