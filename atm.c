#include <stdio.h>

int totalamt = 20000;//Assuming the initially deposited amount 
int amt = 0; // Assume amount to be zero. used to reflect the balance

int CreatePin();
int ChangePin();
int WithdrawCash();
int CheckBalance();
int MiniStmt();

int main()
{
    int ch, pin;
    
    do {
        printf("1. CreatePin 2. ChangePin 3. CashWithdrawal 4. CheckBalance 5. MiniStatement\n");
        printf("Enter your choice: ");
        scanf("%d", &ch);

        switch (ch) {
            case 1:
                CreatePin();
                break;
            case 2:
                ChangePin();
                break;
            case 3:
                WithdrawCash();
                break;
            case 4:
                CheckBalance();
                break;
            case 5:
                MiniStmt();
                break;
            default:
                printf("Select a valid choice.\n");
        }
    } while (ch >= 1 && ch <= 5);

    return 0;
}

int CreatePin()
{
    int a, b, c, d;
    printf("Enter your pin: ");
    scanf("%d%d%d%d", &a, &b, &c, &d);
    printf("You have successfully created your pin.\n");
    printf("Thank you for banking with us");
    return 0;
}

int ChangePin()
{
    int pin, l, m, n, o;
    printf("Enter your previous pin: ");
    scanf("%d", &pin);

    if (pin == 2004) // Assuming that previously entered pin as 2004
    {
        printf("Enter your new pin: ");
        scanf("%d%d%d%d", &l, &m, &n, &o);
    } else {
        printf("Incorrect pin.\n");
    }
    printf("\n Thank you for banking with us");
    return 0;
}

int WithdrawCash()
{
    int cash;
    printf("Enter the amount to withdraw: ");
    scanf("%d", &cash);

    if (cash > 0 && cash <= totalamt) {
        amt += cash; // to get the amt.initially amt is 0
        totalamt -= cash; // Deduct the amount from total balance.
        printf("Your transaction is being processed. Please wait to collect the cash.\n");
    } else {
        printf("Enter a valid amount within available balance.\n");
    }
    printf("\n Thank you for banking with us\n");
    return 0;
}

int CheckBalance()
{
    int balance = totalamt;
    printf("The balance of your account is: %d\n", balance);
    printf("Thank you for banking with us\n");
    return 0;
}

int MiniStmt()
{
    int balance = totalamt;
    printf("Balance: %d\nAmount withdrawn: %d\n", balance, amt);
    printf("Thank you for banking with us");
    return 0;
}