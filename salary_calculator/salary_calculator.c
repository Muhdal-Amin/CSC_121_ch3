// Exercise 3.20
// salary calculator using sentinel controlled loops

#include <stdio.h>
#include <stdbool.h>

// Function main - Code entry point
int main(void) {

	//  variable declaration
	int hours_worked;
	float hourly_rate, salary;
	int list = 1;

	// processing phase
	// take input from user
	while (true) {

	        printf("Employee #%d:\n", list++);
		printf("%s", "Enter # of hours worked (-1 to end): ");
		scanf("%d", &hours_worked);

		if (hours_worked == -1) {
			return (0);
		}

		printf("%s", "Enter hourly rate of the worker ($00.00): ");
		scanf("%f", &hourly_rate);

		if (hours_worked <= 40) {

			salary = hours_worked * hourly_rate;

			printf("Salary is: $%.2f\n\n", salary);

		} // end if

		else if (hours_worked > 40) {

			salary = hours_worked * hourly_rate + hourly_rate/2;

			printf("Salary is: $%.2f\n\n", salary);

		} // end else

	} // end while

	return (0);

} // end function main
