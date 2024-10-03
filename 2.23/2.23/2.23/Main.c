#include <stdio.h>
#include <stdlib.h>

int main(void) {
    int a, b, c;
    printf("Enter an integer:");
    scanf_s("%d %d %d", &a, &b, &c);

    int max = a,min = a;
    if (b > max) max = b;
    if (c > max) max = c;
    if (b < min) min = b;
    if (c < min) min = c;
    printf("Largest: %d\n", max);
    printf("Smallest: %d\n", min);
    return 0;

}