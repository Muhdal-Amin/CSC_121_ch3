// Exercise 3.19
// Interest calculator using sentinel controlled loops

#include <stdio.h>
#include <stdbool.h>

// Function main - code entry point
int main(void) {

	// variables declaration
	float interest_rate, principal, interest_charge;
	int loan_terms;
	int list = 1;

	// processing phase
	// take input from user
	while(true) {

	        printf("Interest Program #%d:\n", list++);
		printf("%s", "Enter the loan principal (-1 to end): ");
		scanf("%f", &principal);

		if (principal == -1) {
			return (0);
		}

		printf("%s", "Enter the interest rate: ");
		scanf("%f", &interest_rate);

		printf("%s", "Enter the term of loan in days: ");
		scanf("%d", &loan_terms);

		// calculation phase
		interest_charge = principal * interest_rate * loan_terms / 365;

		printf("The interest charge is: $%.2f\n\n", interest_charge);
	} // end while

	return (0);

} // end main function
