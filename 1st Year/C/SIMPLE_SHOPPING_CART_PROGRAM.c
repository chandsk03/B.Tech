// SIMPLE SHOPPING CART PROGRAM IN C

#include <stdio.h>

int main() {
    char item[50];
    int cost; 
    // int cost = 50; [Fixed Price of the product].
    int quantity;
    char currency[] = "$";
    int total;

    printf("What product would you like to buy?: ");
    scanf("%49s", item);

    //---[Remove below two lines for fix price.]---
    printf("What was the cost of product?: ");
    scanf("%d", &cost);
    //---------------------------------------------
    printf("Quantity of the product: ");
    scanf("%d", &quantity);

    total = quantity * cost;

    printf("\nYou have bougth %d %s(s)\n", quantity, item);
    printf("Each cost: %s%d\n", currency, cost);
    printf("Total: %s%d", currency, total);

    return 0;
}