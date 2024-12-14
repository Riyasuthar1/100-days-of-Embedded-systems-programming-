#include <stdio.h>

int main() {
    int number, sum = 0;
	printf("Enter a number: ");
    scanf("%d", &number);
    for (; number > 0; number /= 10) {
        sum += number % 10; 
    }
    printf("The sum of the digits is: %d\n", sum);

    return 0;
}

