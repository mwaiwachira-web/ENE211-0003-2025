#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main()
{   double num1, num2, result;
    int choice;

    printf("Enter first number: ");
    scanf("%lf", &num1);

    printf("Enter second number: ");
    scanf("%lf", &num2);

    printf("\nChoose operation:\n");
    printf("1. Addition\n");
    printf("2. Subtraction\n");
    printf("3. Multiplication\n");
    printf("4. Division\n");
    printf("5. Modulus\n");

    printf("Enter your choice: ");
    scanf("%d", &choice);

    if (choice == 1)
{   result = num1+num2;
    printf("Result= %.2f", result);

}
    else if (choice == 2)
    {
        result = num1-num2;
        printf("Result= %.2f", result);
    }
    else if (choice == 3)
    {
        result = num1*num2;
        printf("Result= %.2f", result);
    }
    else if (choice == 4)
    {
        result = num1/num2;
        printf("Result= %.2f", result);
    }
    else if (choice == 5)
    {
        result = fmod(num1,num2);
        printf("Result= %.2f", result);
    }
    return 0;
}
