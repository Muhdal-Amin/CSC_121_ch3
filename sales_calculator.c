// Exercise 3.18
// Sales commission calculator using sentinel controlled loops

#include <stdio.h>
#include <stdbool.h>

// Function main - Code entry point
int main(void) {

	// variable declaration
	float gross_sales;
	float salary;
	float percent_sales;

	// processing phase
	while (true) {

		printf("%s", "Enter sales in dollars (-1 to end): ");
		scanf("%f", &gross_sales);

		if (gross_sales == -1) {
			return (0);
		} // end if

		// calculation phase
		percent_sales = 0.09 * gross_sales;
		salary = 200 + percent_sales;

		printf("Salary is: $%.2f\n\n", salary);
	} // end while

	return (0);
}
