//#include<conio.h>
#include<stdio.h>
int main()
{
int i,j,sum=0,n;
int ar[20],tm[20];
int disk =0;
//clrscr();
printf("enter the number of location \t");
scanf("%d",&n);
printf("enter position of head \t");
scanf("%d",&disk);
printf("enter the elements of disk queue \n");
for(i=0;i<n;i++)
{
scanf("%d",&ar[i]);
tm[i]=disk-ar[i];
if(tm[i]<0)
{
tm[i]=ar[i]-disk;
}
disk=ar[i];
sum=sum+tm[i];
}
printf("\nmovement of total cylinders %d",sum);
//getch();
return 0;
}