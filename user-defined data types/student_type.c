#include <stdio.h>
#include <stdlib.h>

int main(int argc, char** argv) {


	typedef struct student Student;


	struct student

	{
		int number;
		float percent;
		char grade;

	};

	// initialize and print student information

	Student student0 = { 12345, 85.5, 'A' };

	printf("Student 0\n");
	printf("-----------------\n");
	printf("Number: %d\n", student0.number);
	printf("Percent: %.1f\n", student0.percent);
	printf("Grade: %c\n", student0.grade);

	printf("\n");


	// initialize and print student information

	Student student1;
	student1.number = 67890;
	student1.percent = 59.99;
	student1.grade = 'F';
	printf("Student 1\n");
	printf("-----------------\n");
	printf("Number: %d\n", student1.number);
	printf("Percent: %.1f\n", student1.percent);
	printf("Grade: %c\n", student1.grade);


	return (EXIT_SUCCESS);




}
