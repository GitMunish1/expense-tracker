#include <stdio.h>

int main()
{
    int a;
    int b;

    printf("Enter the value of a: ");
    scanf("%d", &a);

    printf("Enter the value of b: ");
    scanf("%d", &b);

    if (a >= 0 && b >= 0)
        printf("Jay Mata, The Rock!\n");
        printf("See you again.\n");
    else
        printf("Bhadme joh na.\n");

    return 0;
}
