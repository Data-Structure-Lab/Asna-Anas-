#include<stdio.h>
void insertion();
void deletion();
void searching();
void sorting();
void display();
int array[100];
int num;
int n;
int main()
{
printf("enter the number of elements");
scanf("%d",&num);
for(int i=0;i<num;i++)
{
scanf("%d",&array[i]);
}
printf("the array elements are:");
for(int i=0;i<num;i++)
{
printf("%d\n",array[i]);
}
while(1)
{
printf("enter a option:\n 1.Insertion \n 2.Deletion \n 3.Searching \n 4.Sorting \n 5.Display\n 6.Exit \n");
scanf("%d",&n);
switch(n)
{
case 1:
       insertion();
       break;
case 2:
       deletion();
       break;
case 3:
       searching();
       break;
case 4:
       sorting();
       break;
case 5:
       display();
       break;
case 6:
       break;
default:printf("invalid option\n");
      break;
}
}
return 0;
}

void insertion()
{
int number;
printf("enter the number to be inserted");
scanf("%d",&number);
array[num]=number;
num=num+1;
printf("the array elements are:");
for(int i=0;i<num;i++)
{
printf("%d\n",array[i]);
}
