#include <stdio.h>
int main() {
    int a = 0;
    int b = 0;
    int max = 0;
    printf("Enter 1st number: ");
    scanf("%d", &a);
    printf("Enter 2nd number: ");
    scanf("%d", &b);
	max = (a > b) ? a : b;
    printf("The maximum number is: %d\n", max);
    return 0;
}
