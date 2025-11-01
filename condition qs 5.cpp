#include <stdio.h>
int main() {
    int num;
    printf("Enter a number:\n");
    scanf("%d", &num);
    if (num > 0) {
        printf("positive.\n");
    } else if (num < 0) {
        printf("negative.\n");
    } else {
        printf("The number is zero.\n");
    }
    return 0;
}
