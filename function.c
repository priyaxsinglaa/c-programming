/*#include<stdio.h>
int main()
{
    int n,i;
    
    void printline();
    printline();
    printf("\nthis is function topic\n");
    printline();
    return 0;
   
}
void printline()
{  int i , n=13;

    for (int i=1; i<=n;i++)
    {
        printf("-");
    }
  
}*/

/*#include<stdio.h>
int swapno(int x ,int y)
{   int result;
    x=x+y;
    y=x-y;
    x=x-y;
     result=x;

      return result ;
}
int swapno2(int x ,int y)
{   int result2;
    x=x+y;
    y=x-y;
    x=x-y;
     result2=y;
     
      return result2 ;
}
int main()
{
    int a,b,res,res2;
    scanf("%d%d",&a,&b);
    res=swapno(a, b);
    res2=swapno2(a,b);
   printf("%d%d",res,res2);
    return 0;
}*/
/*#include<stdio.h>
void getcube();
int main()
{
    int a;
    scanf("%d",&a);
     getcube(a);
    return 0;
}
void getcube(int a)
{
    a = a*a*a;
     printf("%d",a);
}*/

/*#include<stdio.h>
int fibonum( int n);
int main()
{
    int n;
    scanf("%d",&n);
    printf("enter the nth term of fibonacci series = %d && output is %d",n,fibonum(n));
    return 0;
}
int fibonum(int n)
{
    if (n==1 || n==2)
    {
        return n-1;
    }
    else {
       return  (fibonum(n-1)+fibonum(n-2));
    }
}*/
/*#include<stdio.h>
int fibonum(int n);
int main()
{
    int n;
    scanf("%d",&n);
    printf("%d",fibonum(n));
    return 0;
}
int fibonum(int n){
    int a=0;
    int b=1;
    if (n==0)
    {
        return 0;
    }
    else {for (int i=0;i<=n;i++)
    {
       b=b+a;
       a=b-a;
    }
    return a;}
}
int max(int a,int b,int c);
#include<stdio.h>
int main()
{
    int a,b,c,x,y,z;
    scanf("%d%d%d",&a,&b,&c);
   int result= max(a,b,c);
    printf("%d", result);
    return 0;
}
int max(int a,int b,int c)
{
    if (a>b && a>c)
    {
        return a;
    }
    else if (b>a && b>c)
    {
        return b;
    }
    else{
        return c;
    }
}*/
// #include<stdio.h>
// int prime(int i);
// int main()
// {
//     int n;
//     scanf("%d",&n);
   
//     printf("%d",prime(n));
//     return 0;
// }
// int prime(int i)
// { int count =0;
//     for (int j =2;j<i;j++)
//     {
//         if (i%j==0)
//         {
//             count=count+1;
//         }
    
//     }
//  if (count==0)
//     {
//         printf(",it is prime no\n");
//     }
// else{
//         printf("it is not a prime no\n");
//     }
   
//     return count;
// }
// #include<stdio.h>
// int main(){
//     int a=3;
//     printf("%d %d %d",a,++a,a++);
//     return 0;
// }
