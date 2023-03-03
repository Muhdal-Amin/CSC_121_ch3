// class-average program with sentinel-controlled iteration

#include <stdio.h>

// function main begins program execution
int main(void) {

	unsigned int counter; // number of grades entered
	int grade; // grade value
	int total; // sum of grades

	float average; // number with decimal point for average

	// initializtion phase
	total = 0;
	counter= 0;

	// processing phase
	// get first grade from user
	printf("%s", "Enter grade, -1 to end: "); // prompt for input
	scanf("%d", &grade); // read grade from user

	// loop while sentinel value not yet read from the user
	while (grade != -1) {
		total = total + grade; // add grade to total
		counter = counter + 1; // increment counter

		//get next grade from user
		printf("%s", "Enter grade, -1 to end: "); //prompt for input
		scanf("%d", &grade); // read next grade
	} // end while

	//termination phase
	// if user entered at least one grade

	if (counter != 0) {

		// calculate total of all inputted grades
		average = (float) total / counter; // to avoid truncation

		// display average with 2 digits precision
		printf("class average is %.2f\n", average);
	} //end if

	else {
		puts("No grades were entered");
	} //end else

} //end main function
