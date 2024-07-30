#include <stdio.h>
#include <string.h>

#define USER_ID "user123"
#define PASSWORD "pass123"

void calculator() {
    int choice;
    double num1, num2, result;

    while (1) {
        printf("\nBasic Calculator Menu:\n");
        printf("1. Addition\n");
        printf("2. Subtraction\n");
        printf("3. Multiplication\n");
        printf("4. Division\n");
        printf("5. Exit\n");
        printf("Enter your choice (1-5): ");
        scanf("%d", &choice);

        if (choice == 5) {
            printf("Exiting calculator.\n");
            break;
        }

        if (choice < 1 || choice > 5) {
            printf("Invalid choice. Please try again.\n");
            continue;
        }

        printf("Enter first number: ");
        scanf("%lf", &num1);
        printf("Enter second number: ");
        scanf("%lf", &num2);

        switch (choice) {
            case 1:
                result = num1 + num2;
                printf("Result: %.2lf\n", result);
                break;
            case 2:
                result = num1 - num2;
                printf("Result: %.2lf\n", result);
                break;
            case 3:
                result = num1 * num2;
                printf("Result: %.2lf\n", result);
                break;
            case 4:
                if (num2 != 0) {
                    result = num1 / num2;
                    printf("Result: %.2lf\n", result);
                } else {
                    printf("Error: Division by zero is not allowed.\n");
                }
                break;
        }
    }
}

int main() {
    char entered_id[50];
    char entered_password[50];

    printf("Enter ID: ");
    scanf("%s", entered_id);

    printf("Enter Password: ");
    scanf("%s", entered_password);

    if (strcmp(entered_id, USER_ID) == 0 && strcmp(entered_password, PASSWORD) == 0) {
        printf("Login successful!\n");
        calculator();
    } else {
        printf("Invalid ID or Password. Access denied.\n");
    }

    return 0;
}
