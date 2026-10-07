#include <stdio.h>
#include <stdint.h>
#include <stdlib.h>

struct memoryArray {
    uint8_t *value;
    uint64_t *sum;
    uint64_t *rice;
};

uint8_t v(uint8_t b) {
    return b*b;
}

uint8_t w(uint8_t x) {
    struct memoryArray *a = (struct memoryArray*) malloc(sizeof(struct memoryArray));

    if (a == NULL) {
        return 1;
    }

    a->value = (uint8_t*) calloc(1, sizeof(uint8_t));
    a->sum = (uint64_t*) calloc(1, sizeof(uint64_t));
    a->rice = (uint64_t*) calloc(1, sizeof(uint64_t));

    if ((a->value) == NULL || (a->sum) == NULL || (a->rice) == NULL) {

        if ((a->value)!=NULL) {
            free(a->value);
            (a->value) = NULL;
        } else {
            free(a->value);
        }
        if ((a->sum)!=NULL) {
            free(a->sum);
            (a->sum) = NULL;
        } else {
            free(a->sum);
        }
        if ((a->rice)!=NULL) {
            free(a->rice);
            (a->rice) = NULL;
        } else {
            free(a->rice);
        }
        free(a);
        a = NULL;
        return 2;
    } 
    
    *(a->value) = v(8);
    *(a->sum) = 0;
    *(a->rice) = 1;

    for(int i = 1; i <= *(a->value); i++) {
        printf("%d. Box = %llu Rice; Weight: ", i, *(a->rice));
        if (*(a->rice) < 1000) {
            printf("%llumg\n",*(a->rice)*20);
        } else if (*(a->rice) < 1000000) {
            printf("%.3lfg\n",((double)*(a->rice)*20)/1000);
        } else if (*(a->rice) < 1000000000) {
            printf("%.3lfkg\n",((double)*(a->rice)*20)/1000000);
        } else {
            printf("%.3lfmetric ton\n",((double)*(a->rice)*20)/1000000000.0);
        }
        *(a->sum) = *(a->sum) + *(a->rice);
        if (i == *(a->value)) {
            printf("Total Sum = %llu Rice; Weight: %.3lfmetric ton\n",*(a->sum), ((double)*(a->sum)*20)/1000000000.0);
        }
        if (i < *(a->value)) {
            *(a->rice) = *(a->rice) * 2;
        }
    }
    free(a->value);
    (a->value) = NULL;
    free(a->sum);
    (a->sum) = NULL;
    free(a->rice);
    (a->rice) = NULL;
    free(a);
    a = NULL;

    return 0; 
}

int main() {
    uint8_t work = w(3);
    switch (work) {
        case 1: 
            printf("Memory Allocate was Failed");
            break;
        case 2:
            printf("Work Pointers Allocate was failed");
            break;
        default:
            printf("FULL PROGRAM RUN SUCCESSFULLY");
            break;
    }
}
