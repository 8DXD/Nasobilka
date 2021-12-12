#include <stdio.h>
int main()
{
    int a = 1; 
    int b = 1;
    printf("Mala nasobika:\n");
    while (a <= 10) {
        for (b = 1; b <= 10; b++) {
            printf("%d ", b * a);
        }
        printf("\n");
        int b = 1;
        a++;
    }
}