#include <stdio.h>; 

int main() {
    int tulos;
    tulos = sumTwoNumbers(10, 20);
    printf("Tulos on %d", tulos);
    return 0;
}

int sumTwoNumbers(int a, int b) {
    return a + b;
}