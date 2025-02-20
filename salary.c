#include <stdio.h>
int maim(){
     float payRate;
     int hours;
     printf("Enter total worked hours:");
     scanf("%d",&hours);
     printf("Enter payRate:");
     scanf("%f",&payRate);
     printf("Your pay Rate:%.2f,worked hours:%d\n",payRate,hours);
     return 0;

 }
