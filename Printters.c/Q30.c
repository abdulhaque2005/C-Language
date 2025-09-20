#include <stdio.h>

int main() {
    int n;
    printf("Enter the number\n");
    scanf("%d", &n);
    for (int i = 0; i < n; i++) {
        for (int k = 0; k < n - i; k++) {
            printf(" ");
        }
        for (int j = 0; j <= i; j++) {
            printf("%c", 'A' + j);
        }
        for (int j = i - 1; j >= 0; j--) {
            printf("%c", 'A' + j);
        }
        printf("\n");
    }
    for (int i = n - 2; i >= 0; i--) {
        for (int k = 0; k < n - i; k++) {
            printf(" ");
        }
        for (int j = 0; j <= i; j++) {
            printf("%c", 'A' + j);
        }
        for (int j = i - 1; j >= 0; j--) {
            printf("%c", 'A' + j);
        }
        printf("\n");
    }
    return 0;
}