/* C PROGRAM CODE FOR DIGITAL FOOD ORDERING SYSTEM FOR UNSCHOOL PROJECT */
/*THIS CODING IS sherin DONE ON VISUAL STUDIO ~ 2019 PLATFORM SO SOME PREDEFINED FUNCTION STYLING MAY BE DIFFERENT FROM OTHER IDEs*/
/* DONE BY M.SHERIN BHARATHIY ON 14-04-2021*/

#include<stdio.h>
void main()
{
    int num, j = 0, bill = 0, n, price = 0;
    char name[50], ans, dummy;

    printf("\n ******* WELCOME TO SNACK WAGON *******\n");
    printf("\n Please enter your name (buyer) :");
    scanf_s("%s", &name, 50);
    do {
        for (int i = 0;i < 4;i++)
        {
            printf("\n %s , Enter any number accordindly\n", name, 50);
            printf("\nPress 1 to Order");
            printf("\nPress 2 to Serve");
            printf("\nPress 3 Display no.of.orders");
            printf("\nPress 4 Exit the program\n");
            printf("\n NO : ");
            scanf_s("%d", &num);


            switch (num)
            {
            case 1:
                printf("\n        ...............OUR DELIGHTFUL CUISINE..............         \n");
                printf("\nITEM_CODE         ITEM_NAME         QUANTITY         PRICE(In Dollars)\n");
                printf("  1001           tofu barbeque      5 sticks            $12 \n");
                printf("  1002             burger           200g                $7  \n");
                printf("  1003             pizza            500g                $8  \n");
                printf("  1004             waffle           5 pcs               $10 \n");
                printf("  1005             sandwich         2 pcs               $4  \n");
                printf("  1006             cold coffee      1_cup(250 l)        $5  \n");
                printf("\n                        *1. Order*                          ");
                printf("\n Enter no of items you want:");
                scanf_s("%d", &n);
                j++;
                int m;

                for (int i = 0, price = 0;i < n;i++)
                {

                    printf("\nEnter chosen item code for item-%d :", i + 1);
                    scanf_s("%d", &m);
                    switch (m)
                    {
                    case 1001:
                        printf("1001 ~ TOFU BARBEQUE  - 5 sticks  for $12\n");
                        price = 12;
                        break;
                    case 1002:
                        printf("1002 ~ BURGER -  200g  for $7\n");
                        price = 7;
                        break;
                    case 1003:
                        printf("1003 ~ PIZZA - 500g   for $8 \n");
                        price = 8;
                        break;
                    case 1004:
                        printf("1004 ~ WAFFLE - 5 pcs  for  $10 \n ");
                        price = 10;
                        break;
                    case 1005:
                        printf("1005 ~ SANDWICH - 2 pcs  for $4 \n");
                        price = 4;
                        break;
                    case 1006:
                        printf("1006 ~ COLD COFFEE  - 1_cup(250l) for $5 \n");
                        price = 5;
                        break;
                    default:
                        printf("\n Sorry no valid item matches your code");
                        price = 0;
                        break;
                    }
                    bill += price;
                }

                printf("\n No of items ordered :%d\n", n);
                printf("\n          ********  BILL ********    \n  ");
                if (bill != 0)
                {
                    printf("\nThanks for ordering .Amount to be paid (cash/card) is $%d", bill);
                    printf("\n Kindly wait till your order is ready to serve.....\n");
                }
                else
                    printf("\nEnter valid item code to order .No amount to be paid\n");
                break;
            case 2:
                printf("\n                   *2. Serve*                        ");
                if (bill != 0)
                    printf("\n Order placed by %s is ready . Enjoy your meal!!!", name, 50);
                else
                    printf("Enter valid item code to order . Thanks");
                break;
            case 3:
                printf("\n                    *3. Displaying no of orders*                      ");
                printf("\n No of orders placed %d", j);
                printf("\n No of orders completed %d", j);
                break;
            case 4:
                printf("\n                    *4. Exit the program*             \n");
                printf("\n Exit of program . THANK YOU!! . Have a nice day.");
                break;
            }
        }

        printf("\nAnymore orders needed ? (type y(lowercase) for yes) :");
        scanf_s("%c", &dummy);                          // dummy variable to avoid compiler asssuming ENTERKEY as a character
        scanf_s("%c", &ans);
        scanf_s("%c", &dummy);
    } while (ans == 'y');
    printf("\n Total No of orders placed %d", j);
    printf("\n Total No of orders completed %d", j);
    printf("\n Pending orders none . YAY!!");
}
