#include <stdio.h>
int main(){
   char firstname[50];
   char lastname[50];
   int birthYear;

   printf("What is Your firstname?");
   scanf("%s",firstname);
   printf("What is Your lastname?");
   scanf("%s",lastname);
   printf("What is Your birthYear?");
   scanf("%d",&birthYear);
   printf("%s %s was born in %d\n",firstname,lastname,birthYear);
   return 0;
}
