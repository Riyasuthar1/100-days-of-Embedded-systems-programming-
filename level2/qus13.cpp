#include <stdio.h>
int main(){
	int number,digit,reversenum=0;
    scanf("%d",&number);
    for (; number > 0; number /= 10) {
        int digit = number % 10;       // Extract the last digit
        reversenum = reversenum * 10 + digit; // Append the digit to the reversed number
    }

    // Step 3: Output the reversed number
    printf("The reversed number is: %d\n", reversenum);  
	return 0;
}
