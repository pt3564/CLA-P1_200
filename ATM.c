#include <stdio.h>

int main()
{ // This is the main function forom where the program starts
    float x, y;
    char ch;
    printf("Enter initial amount \n");
    scanf("%f", &x);
    printf("Enter \n c for credit \n d for debit \n b for balance\n");
    scanf("\n%c", &ch);
    switch (ch) // These are the switch cases for credit,debit and check of balance
    {
    case 'c': // for crediting balance
        printf("Enter credit amount \n");
        scanf("%f", &y);
        x = x + y;
        printf("New amount=%f\n", x);
        break;

    case 'd': // For debiting balance
        printf("Enter debit amount \n");
        scanf("%f", &y);
        if (x >= y)
        {
            x = x - y;
            printf("New amount=%f\n", x);
        }
        else
            printf("Insufficient balance\n");
        break;

    case 'b': // For chacking initial balance.
        printf("Balance in your account is %f\n", x);
        break;

    default:
        printf("Please choose correct option\n");
    }
}
