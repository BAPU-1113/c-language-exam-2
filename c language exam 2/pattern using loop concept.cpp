#include <stdio.h>
int main() {
    int i, j;
    int start = 5;
    for (i = start; i >= 1; i--) {
           
        for (j = start; j >= i; j--) {
           
            printf("%d ", j);
        }
        printf("\n");
    }
    return 0;
}