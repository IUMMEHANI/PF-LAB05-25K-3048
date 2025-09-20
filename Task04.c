#include <stdio.h>
int main() {
    int amount = 0;
    int current_balance = 500;

    printf("How much amount would you like to withdraw: ");
    scanf("%d", &amount);

    if (amount <= current_balance) {
        if (amount % 20 == 0) {
            printf("Withdrawal approved.\n");
        } else {
            printf("Withdrawal denied.Entered amount must be a multiple of $20.\n");
        }
    } else {
        printf("Withdrawal denied. Current balance is only $500.\n");
    }

    return 0;
}

