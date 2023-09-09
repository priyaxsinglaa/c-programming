/*#include<stdio.h>
int main()
{
    int n;
    scanf("%d",&n);
    for (int i =1;i<=n;i++)
    {
        for (int k=n-i;k>=1;k--)
        {
            printf(" ");
        }
        for (int j=1;j<=i;j++)
        {
            printf("%d ",i);
        }
        printf("\n");
    }
return 0;
}*/
/*#include<stdio.h>
int main()
{
    int n;
    int ch=69;
    scanf("%d",&n);
    for (int i=n;i>=1;i++)
    {
        for (int j=i;j>=1;j--)
        {
            printf("%c",ch+j-1);
            
        }
       printf("\n");
    }
return 0;
}*/

/*#include<stdio.h>
int main()
{
    int n,i,j;
    int rem,rev=0;
    scanf("%d %d",&i,&j);
    for (n=i;n<=j;n++)
    {    int num=n;
         int rev=0;
        for (;;num)
        {
            rem=num%10;
            rev=rev*10+rem;
            num=num/10;
        }
        if (rev==n)
        {
            printf("%d",n);
        }
        else;
    }
    return 0;
}
*/
// #include <stdio.h>
// char fun();
// int main(void)
// {
// 	// Note that fun() is not declared
// 	printf("%c\n", fun());
// 	return 0;
// }

// char fun()
// {
// return 'G';
// }
// #include<stdio.h>
// void update(int *a, int *b);
// int main()
// {
//     int a,b;
//     scanf("%d\n %d",&a,&b);
//     update(&a,&b);

// return 0;
// }
// void update(int *a, int *b)
// {
//     int c,d;
//     c=*a + *b;
//     if (*a > *b)
//     {
//          d=*a - *b;
//     }
//     else{
//         d=*b - *a;
//     }
   
//     printf("%d\n",c);
//     printf("%d",d);
// }
#include<stdio.h>
void bitwiser(int n, int k);
int main()
{
    int n , k;
    scanf("%d %d",&n ,&k);
    bitwiser(n,k);
return 0;
}
void bitwiser(int n, int k)
{
    
    int i,j;
    int andop, orop, xorop;
    int null=0;
    for (i=1,j=i+1;i<=n-1,j<=n;i++,j++)
    {  
        andop = i & j;
       if (andop < k)
       {
          printf("%d\n",andop);
       }
       j--;
    }
    for (i=1,j=i+1;i<=n-1,j<=n;i++,j++)
    {  
        orop = i | j;
        printf("%d",orop);
       if (orop < k)
       {
          printf("%d\n",orop);
       } 
       j--;
    }
    
    for (i=1,j=i+1;i<=n-1,j<=n;i++,j++)
    {  
        xorop = i ^ j;
       if (xorop < k)
       {
          printf("%d\n",xorop);
       }
       j--;
    }
    
}