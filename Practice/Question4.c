#include <stdio.h>

// Function to calculate Fibonacci number recursively
int fibonacci(int n) {
    if (n <= 1) {
        return n;
    }
    return fibonacci(n - 1) + fibonacci(n - 2);
}

int main() {
    int n;
    printf("Enter the position of Fibonacci sequence: ");
    scanf("%d", &n);
    
    printf("Fibonacci number at position %d is %d\n", n, fibonacci(n));
    return 0;
}
