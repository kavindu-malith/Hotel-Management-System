#include<stdio.h>
#include<stdlib.h>

void input(); //prototype
void rooms();
void function();
void safari();
void discount();
void close();
char choice; //Global Variable
int total=0;
int main()
{
    input();
    return 0;
}
void input()
{
    do
    {
    printf("\n\n $&&-- Welcome To Green Way Hotel --&&$ \n\n $$ Please Select Your Choice $$\n"); //Welcome note
    printf("\t\t [1] - Guest Room\n"); //menu
    printf("\t\t [2] - Functions\n");
    printf("\t\t [3] - Safari Package\n");
    printf("\t\t [4] - Discount Details\n");
    printf("\t\t [5] - Exit\n");
    printf("\n Enter Your Choice : "); //input
    scanf(" %c",&choice);
    system("cls");
    if(choice=='1') //Selection
    {
        rooms();
    }
    else if(choice=='2')
    {
        function();
    }
    else if(choice=='3')
    {
        safari();
    }
    else if(choice=='4')
    {
        discount();
    }
    else if(choice=='5')
    {
        close();
    }
    else
    {
        printf("**Invalid Choice**"); //Invalid Massage
    }
    }
    while(choice!='9'); //Loop
}
void rooms()
{
    char room; //Local Variable
    int days;
    printf("\n\nPlease enter your room type : \n\n"); //Massage For User
    printf("\t\t [1] A/C room\n");
    printf("\t\t [2] Non A/C room\n\n");
    printf(" Enter your room type : "); //Inputs
    scanf(" %c",&room);
    printf("\n");
    printf(" Enter No.of days : ");
    scanf("%d",&days);
    printf("\n");
    system("cls");
    if(room=='1') //Selection
    {
    total=total+(days*3000);
    printf(" Your Total Is : Rs.%d\n\n",total);
    }
    else if(room=='2')
    {
        total=total+(days*1000);
        printf(" Your Total Is : Rs.%d\n",total);
    }
    else
    {
        printf("\t\tInvalid Choice"); // Invalid Massage
    }
}
void function()
    {
        char hall;
        int hours;
        printf("\n\nWelcome Our function Section\n"); //Function Menu Massage
        printf("\t\t [1] A/C hall\n");
        printf("\t\t [2] Non A/C\n");
        printf("\t\t [3] Outdoor Functions\n");
        printf("\t\t [4] Luxury Hall\n");
        printf("\t\t [5] Exit\n\n");
        printf(" Please Enter Your Choice : "); //Inputs
        scanf(" %c",&hall);
        printf("\n");
        printf("\n");
        if(hall=='1') // Selection
        {
                printf(" Enter Duration Of The Function : ");
                scanf("%d",&hours);
                total=total+(hours*10000);
                printf(" Your Total Is : Rs.%d",total);
        }
        else if(hall=='2')
        {
                printf(" Enter Duration Of The Function : ");
                scanf("%d",&hours);
                total=total+(hours*8000);
                printf(" Your Total Is : Rs.%d",total);

        }
        else if(hall=='3')
        {
                printf(" Enter Duration Of The Function : ");
                scanf("%d",&hours);
                total=total+(hours*12000);
                printf(" Your Total Is : Rs.%d",total);
        }
        else if(hall=='4')
        {
                printf(" Enter Duration Of The Function : ");
                scanf("%d",&hours);
                total=total+(hours*20000);
                printf(" Your Total Is : Rs.%d",total);
        }
        else if(hall=='5')
        {
            close();
        }
        else
        {
            printf("\t\tInvalid Choice"); //invalid Massage
        }
    }
void safari()
    {
        int km; //Local Variable
        char country;
        printf("\n\nPlease Get The Service Of Our Guide\n\n"); //Massage For User
        printf("Welcome To Our Safari Package\n\n");
        printf("Are You From Sri Lanka\n\n");
        printf("Enter [Y] For Yes or [N] For No : ");//Inputs
        scanf(" %c",&country);
        printf("\n");
        printf("Enter The Distance of Safari : ");
        scanf("%d",&km);
        system("cls");
        if(country=='Y'||country=='y') //selection
        {
        printf(" We Charge 100/= per km ");
        total=total+(km*100);
        printf(" Your Total Is : Rs.%d",total);
        }
        else if(country=='N'||country=='n')
        {
            printf(" Welcome to sri Lanka\n");
            printf("\tWe charge 500/= per km\n");
            total=total+(km*500);
            printf(" Your Total Is : Rs.%d",&total);
        }
        else
        {
            printf("Invalid Choice \n");
        }

    }

void discount()
    {
        char dis; //Local Variable
        printf("\n\n if your total greater than 5000/= \n \tyou can enjoy 10 percent discount\n\n"); // Massage For User
        printf(" if your total greater than 25000/= \n \tyou can enjoy 20 percent discount\n\n");
        printf(" if your total is greater than 100000/= \n \t you van enjoy 50 percent discount\n\n");
        printf(" Do You want Discount?\n");
        printf(" Press [Y] For Yes or [N] For No : "); //Inputs
        scanf(" %c",&dis);
        if(dis=='Y'||dis=='y') //selection
        {
            if(total>=100000)
            {
                total=total-(total*50/100);
                printf(" You Got 50\% Off New Total Is : Rs.%d",total);
            }
            else if(total>=25000)
            {
                total=total-(total*20/100);
                printf(" You Got 20% Off New Total Is : Rs.%d",total);
            }
            else if(total>=5000)
            {
                total=total-(total*10/100);
                printf(" You Got 10% Off New Total Is : Rs.%d",total);
            }
            else
            {
                printf(" Your Total is Not Enough To Enjoy Our Discount");
            }
        }
        else if(dis=='N'||dis=='n')
                printf("\nYour Total Bill Is : Rs.%d",total);
        else
        {
            printf("\t\tInvalid Choice"); //invalid Massage
        }
    }
void close()
    {
        printf("\nYour Total Bill Is : Rs.%d",total);
    printf(" \n**** Please Settle Your Bill To The Counter ****\n");
      printf("\n\n\t\t $$ Thank You For Visit Us $$\n"); // Exit Massage
      printf("*****************************************************************************************************************");
      total=0;
    }








