#include<stdio.h>
#include<conio.h>
#include<stdlib.h>
int main()
{
 int *ptr,sum=0,*p,i,s,*q,j,sumnew=0;
 printf("enter the size of the array\n");
 scanf("%d",&s);
 ptr=(int*)malloc(sizeof(int)*s);
 p=ptr;
 printf("memory allocated %u\n",ptr);
        if(ptr==NULL)
        {
         printf("out of memory");
         exit(0);
        }
        printf("enter the %d elements\n",s);
 for(i=0;i<s;i++)
 {
  scanf("%d",ptr+i);
  sum=sum+*(ptr+i);
  }
  printf("array elements\n");
  for(i=1;i<=s;i++)
  {
   printf("%d\n",*p);
   p++;
   }
   printf("%d\n",sum);
printf("enter new size of array\n");
scanf("%d",&j);
ptr=(int*)realloc(ptr,sizeof(int)*j);
if(ptr==NULL)
{
printf("out of memory");
exit(0);
}
printf("reallocated memory %u",ptr);
q=ptr;
printf("enter %d elements\n",j);
for(i=0;i<j;i++)
{
 scanf("%d",ptr+i);
 sumnew=sumnew+*(ptr+i);
 }
 printf("the elements are\n");
 for(i=1;i<=j;i++)
 {
  printf("%d",*q);
  q++;
  }
  printf("the new addition is %d",sumnew);
  }
