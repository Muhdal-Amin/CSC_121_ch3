// Exercise 3.17
// Mortgage calculator program with sentinel controlled loop

#include <stdio.h>
#include <stdbool.h>

// function main - code entry point
int main(void) {

	// declaring variables
	int account_num, mortgage_amt, mortgage_terms, month;
	float interest_rate, interest_payable, total_amt, monthly_payable;

	// processing phase
	// get input from user

	while(true) {

	printf("%s", "Enter account number, -1 to end: "); // prompt user for input
	scanf("%d", &account_num); // read account number from user

	if (account_num == -1) { // loop while sentinel value not yet read from user
		return (0);
	}

	printf("%s", "Enter mortgage amount (in dollars): ");
	scanf("%d", &mortgage_amt);

	printf("%s", "Enter mortgage term (in years): ");
	scanf("%d", &mortgage_terms);

	printf("%s", "Enter interest rate (as a decimal): ");
	scanf("%f", &interest_rate);

	// Calculation phase

	interest_payable = mortgage_amt * mortgage_terms * interest_rate;

	total_amt = mortgage_amt + interest_payable;

	month = mortgage_terms * 12;

       monthly_payable = total_amt / month;

	printf("The monthly payable interest is: $%1.f\n\n", monthly_payable);

	} //end while

	return (0);

} // end main function
