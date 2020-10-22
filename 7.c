#include<stdio.h>
void printMaxActivities(int s[], int f[], int n, char a[])
{
    int i, j;

    printf ("\nFollowing activities are selected: ");

    i = 0;
    printf("%c ", a[i]);

    for (j = 1; j < n; j++)
    {
      if (s[j] >= f[i])
      {
          printf ("%c ", a[j]);
          i = j;
      }
    }
}
int main()
{
    int n=11;
    char a[]={'p','q','r','s','t','u','v','w','x','y','z'};
    int s[n],f[n];
    for(int i=0;i<n;i++)
    {
       printf("Enter for activity:%c\n",a[i]);
       printf("Enter start time");
       scanf("%d",&s[i]);
       printf("Enter finish time");
       scanf("%d",&f[i]);
    }
    printMaxActivities(s, f, n,a);
    return 0;
}
