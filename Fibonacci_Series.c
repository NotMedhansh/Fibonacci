#include <stdio.h>

void printFibonacci(int n) {
    int a = 0, b = 1, next;
    printf("Fibonacci Series: ");
    for (int i = 1; i <= n; i++) {
        printf("%d ", a);
        next = a + b;
        a = b;
        b = next;
    }
    printf("\n");
}

int main() {
    int terms;
    printf("Enter the number of terms in the Fibonacci series: ");
    scanf("%d", &terms);
    
    printFibonacci(terms);
    
    return 0;
}