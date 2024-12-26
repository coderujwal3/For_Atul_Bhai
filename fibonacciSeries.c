#include <stdio.h>

void fibonacciSeries(int terms) {
    int firstTerm = 0, secondTerm = 1, nextTerm;

    printf("Fibonacci Series up to %d terms:\n", terms);

    for (int i = 0; i < terms; i++) {           // 0 se lekar terms tak loop chalana
        printf("%d\t", firstTerm);              // first term print karna : first term hamesha 0 hoga

        nextTerm = firstTerm + secondTerm;      // next term calculate karna
        firstTerm = secondTerm;                 // first term ko second term me store karna
        secondTerm = nextTerm;                  // second term ko next term me store karna
    }
    printf("\n");
}

int main() {
    int terms;
    // kitne terms tak fibonacci series print karni hai
    printf("Enter the number of terms for the Fibonacci series: ");
    scanf("%d", &terms);
    
    // agar terms negative hai to fibonacci series nahi print hogi
    if (terms < 0) {
        printf("Fibonacci series is not defined for negative values.\n");
    }
    else {          // agar terms positive hai to fibonacci series print hogi
        fibonacciSeries(terms);
    }

    return 0;
}
