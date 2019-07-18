
#include <stdio.h>
#include "c-sum.h"

#define NUM 200

extern int sum_abs_(int *inp, int *num);

int main(int argc, char **argv)
{
    int data[NUM], num, i;

    num = NUM;
    for (i=0; i < num; i++) {
        data[i] = i - 100 + 1;  /* NOTE: difference in array numbering */  
    }

    printf("sum=%d\n", sum_abs_(data, &num));
    return 0;
}
