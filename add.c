#include <stdio.h>

/**
 main - Code enrty point
 int1 - First integer
 int2 - Second integer
 return - Always return 0
*/

int main(void) {

	int int1;
	int int2;

	printf("Enter the first number:");
	scanf("%d", &int1);

	printf("Enter the second number:");
	scanf("%d", &int2);

	int sum;
	sum = int1 + int2;

	printf("The sum is %d :\n", sum);

	return(0);

}
