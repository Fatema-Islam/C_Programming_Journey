#include <stdio.h>

int main() {

    int First_number, Second_number;
    printf("Enter the First number: ");
    scanf("%d", &First_number);
    printf("Enter the Second number");
    scanf("%d", &Second_number);
    if(First_number > Second_number) {
        printf("The first number is bigger than Second number");
    }
    else if(Second_number > First_number) {
        printf("The Second number is grether than first number");
    }
    else {
        printf("The numbers are same");
    }

    return 0;
}