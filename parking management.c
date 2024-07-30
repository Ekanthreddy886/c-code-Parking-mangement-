#include<windows.h>
#include<stdlib.h>
#include<stdio.h>
#include<conio.h>
int Menu();
void Bike();
void Scooty();
void Car();
void Delete_bike(),Delete_scooty(),Delete_car(),Delete();
void Showdetail();
int nob=0,nos=0,noc=0,amount=0,count=0,ch;
int t=0;
void main()
{
    system("color 80");
while(1)
{
switch(Menu())
{
case 1:Bike();
       break;
case 2:Scooty();
       break;
case 3:Car();
       break;
case 4:Showdetail();
       break;
case 5:Delete();
       break;
case 6:Delete_bike();
       break;
case 7:Delete_scooty();
       break;
case 8:Delete_car();
       break;
case 9:exit(0);
default : printf("Invalid Choice, Try again !!!\n");
}
getch();
}
}
int Menu()
{
printf("\t\tWELCOME TO EKANTH'S PARKING MANAGEMENT SYSTEM\n");
printf("Enter your vehicle to park\n");
printf("1. To park bike : Rs20\n");
printf("2. To park scooty : Rs10\n");
printf("3. To park car : Rs50\n");
printf("4. Show details\n");
printf("5. Delete\n");
printf("6.Delete_bike\n");
printf("7.Delete_scooty\n");
printf("8.Delete_car\n");
printf("9. Exit\n");
printf("Enter your choice\n");
scanf("%d",&ch);
return(ch);
}
void Delete()
{
nob=0,nos=0,noc=0,amount=0,count=0;
}
void Delete_bike()
{
    int n;
    printf("Enter number of bikes to exited from parking plot");
    scanf("%d",&n);
    nob-=n,count-=n;
    printf("%d bikes exited from the parking plot succesfully",n);
//amount=amount-20;
}
void Delete_scooty()
{
    int n;
    printf("Enter number of scooty to exited from parking plot",n);
    scanf("%d",&n);
nos-=n,count-=n;
    printf("%d scootys exited from the parking plot succesfully");
}
void Delete_car()
{
    int n;
    printf("Enter number of cars to exited from parking plot");
    scanf("%d",&n);
noc-=noc,count-=n;
printf("%d cars exited from the parking plot succesfully",n);

}
void Showdetail()
{int t=0;
printf("Number of bike in parking plot : %d \n",nob);
printf("Number of scooty in parking plot  : %d \n",nos);
printf("Number of car in parking plot  : %d \n",noc);
printf("Total no of vehicles in parking plot  : %d\n",count);
t+=amount;
printf("Total amount gained :  Rs %d\n",t);
}
void Bike()
{
    int n;
    printf("Enter the number of bikes entered");
    scanf("%d",&n);
    printf("\nParking charges of %d bikes is Rs:%d \n",n,n*20);
    nob+=n;
printf("Bike entry successful\n");
amount=amount+20*n;
count+=n;
}
void Scooty()
{ int n;
    printf("Enter the number of scooty entered");
    scanf("%d",&n);
    printf("\nParking charges of %d scooty is Rs:%d \n",n,n*10);
    nos+=n;
printf("Scooty entry successful\n");
amount=amount+10*n;
count+=n;
}
void Car()
{int n;
    printf("Enter the number of car entered");
    scanf("%d",&n);
    printf("\nParking charges of %d acar is Rs:%d \n",n,n*50);
    noc+=n;
printf("car entered successful\n");
amount=amount+50*n;
count+=n;
}