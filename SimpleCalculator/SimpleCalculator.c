// SimpleCalculator.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <stdio.h>
#include <math.h>

int main()
{
	int exit_choice = 1;
	int input_error = 0;
	double first_number, second_number;

	char c;

	while (exit_choice)
	{
		int int_operand_choice = 0;
	
		printf("\n\n\n\n\n=====Welcome to the simple calculator app!=====\n\n");

		do 
		{
			input_error = 0;
			printf("Please select operand:\n1) +\n2) -\n3) *\n4) /\n5)sqrt\n6)power\n\nChoice: ");
			scanf_s("%d", &int_operand_choice, 1);
			printf("\n");
			while ((c = getchar()) != '\n' && c != EOF);
			
 			switch (int_operand_choice)
			{
			case 1:
				printf("=== You selected + ===\n\nPlease key in the first number: ");
				scanf_s("%lf", &first_number, 1);
				while ((c = getchar()) != '\n' && c != EOF);
				printf("\nPlease key in the second number: ");
				scanf_s("%lf", &second_number, 1);
				while ((c = getchar()) != '\n' && c != EOF);
				printf("\n%lf + %lf = %lf\n\n", first_number, second_number, first_number + second_number);
				break;
			case 2:
				printf("=== You selected - ===\n\nPlease key in the first number: ");
				scanf_s("%lf", &first_number, 1);
				while ((c = getchar()) != '\n' && c != EOF);
				printf("\nPlease key in the second number: ");
				scanf_s("%lf", &second_number, 1);
				while ((c = getchar()) != '\n' && c != EOF);
				printf("\n%lf - %lf = %lf\n\n", first_number, second_number, first_number - second_number);
				break;
			case 3:
				printf("=== You selected * ===\n\nPlease key in the first number: ");
				scanf_s("%lf", &first_number, 1);
				while ((c = getchar()) != '\n' && c != EOF);
				printf("\nPlease key in the second number: ");
				scanf_s("%lf", &second_number, 1);
				while ((c = getchar()) != '\n' && c != EOF);
				printf("\n%lf * %lf = %lf\n\n", first_number, second_number, first_number * second_number);
				break;
			case 4:
				printf("=== You selected / ===\n\nPlease key in the first number: ");
				scanf_s("%lf", &first_number, 1);
				while ((c = getchar()) != '\n' && c != EOF);
				printf("\nPlease key in the second number: ");
				scanf_s("%lf", &second_number, 1);
				while ((c = getchar()) != '\n' && c != EOF);
				printf("%lf / %lf = %lf\n\n", first_number, second_number, first_number / second_number);
				break;
			case 5:
				printf("=== You selected root ===\n\nPlease key in the number to be square rooted");
				scanf_s("%lf", &first_number, 1);
				while ((c = getchar()) != '\n' && c != EOF);
				printf("\nsquare root of %lf = %lf\n\n", first_number, sqrt(first_number));
				break;
			case 6:
				printf("=== You selected power ===\n\nPlease key in the exponent: ");
				scanf_s("%lf", &first_number, 1);
				while ((c = getchar()) != '\n' && c != EOF);
				printf("\nPlease key in the number: ");
				scanf_s("%lf", &second_number, 1);
				while ((c = getchar()) != '\n' && c != EOF);
				printf("\n%lf^%lf = %lf\n\n", second_number, first_number, pow(first_number,second_number));
				break;
				break;
			default:
				printf("=== Invalid operand choice! Please try again. ===\n\n");
				input_error = 1;
				break;
			}
		} while (input_error);

		printf("Do you want to continue?\n1) No\n2) Yes\nChoice: ");
		scanf_s("%d", &exit_choice, 1);
		while ((c = getchar()) != '\n' && c != EOF);
		exit_choice--;		
	}
}

// Run program: Ctrl + F5 or Debug > Start Without Debugging menu
// Debug program: F5 or Debug > Start Debugging menu

// Tips for Getting Started: 
//   1. Use the Solution Explorer window to add/manage files
//   2. Use the Team Explorer window to connect to source control
//   3. Use the Output window to see build output and other messages
//   4. Use the Error List window to view errors
//   5. Go to Project > Add New Item to create new code files, or Project > Add Existing Item to add existing code files to the project
//   6. In the future, to open this project again, go to File > Open > Project and select the .sln file
