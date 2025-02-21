#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>

int main(){

    int amount, balance = 1000, option;
    char ch;
    char pass[20];

    printf("***Welcome To ATM***\n");
    while(1){
            if(option==4){
                break;
            }

    printf("Enter Your PIN: ");
    int i=0;

    while(1){
        ch = getch();
    if(ch==13){
        pass[i]='\0';
        break;
    }else if(ch==8 && i>0){
        i--;
        printf("\b \b");
    }else if(i<19){
        pass[i++]=ch;
        printf("*");
    }
   }
    printf("\nLogin Successfully\n");

    while(1){
            if(option==4){
                printf("Successfully Exit!");
                break;
            }
    printf("Balance~1\nDepositMoney~2\nWithdraw Money~3\nExit~4\n");
    printf("Enter Your Option (1~4): ");
    scanf("%d", &option);

        switch(option){
        case 1:
        printf("Your Balance is: %d\n", balance);

        case 2:
        printf("Deposit Money: ");
        scanf("%d", &amount);
        if(amount>0){
            balance += amount;
            printf("Your Amount is: %d \n", balance);
        }

        case 3:
        printf("\nWithdraw Money: ");
        scanf("%d", &amount);
        if(amount>0){
            balance -= amount;
            printf("\nYour Amount is: %d \n\n", balance);
        }
        }
    }
    }
    return 0;
}
