#include <stdio.h>

void calculateBill() {
    char customerName[50];
    int units;
    float amount, surcharge = 0, totalAmount;
    char category;

    // Prompt user for input
    printf("Enter customer name: ");
    scanf("%s", customerName);
    printf("Enter units consumed: ");
    scanf("%d", &units);
    printf("Enter category (D for Domestic, C for Commercial): ");
    scanf(" %c", &category);

    // Calculate bill based on category and units consumed
    if (category == 'D' || category == 'd') {
        if (units <= 199) {
            amount = units * 1.20;
        } else if (units <= 400) {
            amount = units * 1.50;
        } else if (units < 600) {
            amount = units * 1.80;
        } else {
            amount = units * 2.00;
        }
    } else if (category == 'C' || category == 'c') {
        if (units <= 100) {
            amount = units * 2.00;
        } else if (units < 300) {
            amount = units * 2.50;
        } else {
            amount = units * 3.00;
        }
    } else {
        printf("Invalid category entered.\n");
        return;
    }

    // Apply surcharge if applicable
    if (amount > 400) {
        surcharge = amount * 0.15;
    }
    totalAmount = amount + surcharge;

    // Display the bill
    printf("\nCustomer Name: %s\n", customerName);
    printf("Units Consumed: %d\n", units);
    printf("Amount Charged @ Rs. %.2f per unit: %.2f\n", amount / units, amount);
    printf("Surcharge Amount: %.2f\n", surcharge);
    printf("Total Amount to be Paid: %.2f\n", totalAmount);
}

int main() {
    calculateBill();
    return 0;
}
