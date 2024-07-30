#include <stdio.h>
#include <string.h>

#define USER_ID "user123"
#define PASSWORD "pass123"

void calculator() {
    int choice;
    double num1, num2, result;

    do {
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
    } while (choice != 5);
}

int main() {
    char entered_id[50];
    char entered_password[50];

    printf("Enter ID: ");
    fgets(entered_id, sizeof(entered_id), stdin);
    entered_id[strcspn(entered_id, "\n")] = 0; // Remove trailing newline

    printf("Enter Password: ");
    fgets(entered_password, sizeof(entered_password), stdin);
    entered_password[strcspn(entered_password, "\n")] = 0; // Remove trailing newline

    if (strcmp(entered_id, USER_ID) == 0 && strcmp(entered_password, PASSWORD) == 0) {
        printf("Login successful!\n");
        calculator();
    } else {
        printf("Invalid ID or Password. Access denied.\n");
    }

    return 0;
}
