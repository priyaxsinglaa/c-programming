/*#include<stdio.h>
int main()
{
    int a=12;
    float l=1290.9;
    char ch='S';
    printf("%u\n%u\n%u\n",&a,&l,&ch);
    return 0;
}*/
/*#include<stdio.h>
int main()
{
    int a=23;
    int *p;
  
    p=&a;
    printf("%d\n",a);
    printf("%d\n",*p);
    printf("%u\n",p);
   
    return 0;
}*/

*******************************************************//swapping using pointer//****************************************************
/*#include<stdio.h>
void swap( int *x, int *y);
int main()
{
    int a=3 , b=9; 
    int *x,*y;
    swap(&a,&b);
   

    printf("%d\n%d",a,b);

    return 0;
}
void swap(int *x, int *y){
   int t=*x;
    *x=*y;
    *y=t;
    printf("%d\n%d",*x,*y);
    
}*/
/*#include<stdio.h>

void square(int *ptr);
int main()
{
    int a=2;
    int y;
    square(&a);
    printf("%d",a);
    return 0;
}
void square(int  *ptr){
    *ptr =(*ptr) * (*ptr);
     printf("%d\n",*ptr);
}*/
/*int max(int *pa ,int *pb);
int main ()
{
    int a =23 ,b=14,*p;
    max(&a, &b);
    printf("%d\n%d",a);
    return 0;
}*/
/*#include<stdio.h>
void alpha(int i,int *y);
int main()
{
    int i=64;
    
    alpha(&i);
    return 0;
}
void alpha(int i,int *y)

{
    for (int k =1;k<=26;k++)
    {
        (*y)++;
        printf("%c",*y);
      
    }
    printf("\n");
}
#include<stdio.h>
void sum(int *p1,int *p2,int *p3);
int main()
{
    int a,b,c;
  
    scanf("%d%d",&a,&b);
    sum(&a,&b,&c);
    printf("%d",c);
}
void sum(int*p1,int*p2,int*p3)
{  
    *p3=*p2+*p1;
    printf("%d\n",*p3);
}*/



