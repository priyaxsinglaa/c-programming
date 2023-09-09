/*#include<stdio.h>
int main()
{
    int n,r,s,c;
    scanf("%d%d%d%d",&n,&r,&s,&c);

    for (r=1;r<=n;r++){
        for (s=0;s<=r;s++)
{
    printf(" ");
}
    for(c=0;c<=n-r;c++)
    {
        printf("%d",r);
    }
    printf("\n");
    }

        }
*/
/*#include<stdio.h>
int main(){
    int day;
    printf("enter your day number:>>");
    scanf("%d",&day);
    switch(day){
        case 1:
        printf("Monday");
        break;
        case 2:
        printf("tuesday");
        break;
        case 3:
        printf("wednesday");
        break;
        case 4:
        printf("thursday");
        break;
        case 5:
        printf("friday");
        break;
        case 6:
        printf("saturday");
        break;
        case 7:
        printf("sunday");
        break;
        default:
        printf("enter valid day number:(");

    }
    printf("\nHave a good day<<3");
    return 0;
}*/
/*#include<stdio.h>
#include<conio.h>
fflush(stdin)
int main()
{
    char op , float n1 , n2 ,result;
    scanf("%f\n%f\n%c",&n1,&n2,&op);
    switch(op)
    {
        case '+':{
        result=n1+n2;
        break;}
        case '-':{
        result=n1-n2;
        break;}
        case '/':{
        result=n1/n2;
        break;}
        case'*':{
        result=n1*n2;
        break;}
        default:{
        printf("hehe, you are doing fun i got you!");}

    }
    printf("%f",result);
    return 0;

}*/
/*#include<stdio.h>
int main(){
    int x =2;
     x=8;
    printf("%d",x);
    return 0;
}*/
/*#include<stdio.h>
int main(){
    int x =10;
    int y;
    y =x++ + 20;
    printf("%d\n%d",x,y);
    return 0;

}*/
/*
#include<stdio.h>
int main(){
    int choice , ch1 ,ch2;
    printf("1.pens or 2.fruits\n");
    printf("enter number of your choice:");
    scanf("%d",&choice);
    switch(choice)
    {
        case 1:
        {
            printf("1.gel or 2.ball or 3.renold\n");
            scanf("%d",&ch1);
                switch(ch1)
                {
                    case 1:
                   { printf("gel"); 
                   printf("\nhave a good handwriting");
                   break;
                   }
                   case 2:
                   {printf("ball"); 
                   printf("\nhave a good handwriting");
                   break;
                  
                   }
                   case 3:
                   { printf("renold");
                   printf("\nhave a good handwriting");
                   break;
                  
                   }
                   default:
                   {goto label;
                    printf("\nenter a valid number");
                    
                    }
                }
                break;
        }
        label:
        case 2:
        { printf("1.aappllee or 2.mango<<3 or 3.kivi\n");
            scanf("%d",&ch2);
                switch(ch2)
                {
                    case 1:
                    {
                        printf("aapplee");
                        printf("have a good diet");
                        break;
                       
                    }
                     case 2:
                    {
                        printf("mango<<3");
                        printf("have a good diet");
                        break;
                        
                    }
                     case 3:
                    {
                        printf("kivi");
                        printf("have a good diet");
                        break;
                        
                    }
                    default:
                    {
                        printf("\nenter a valid number");
                    }
                }
                break;

        }        
        
    
        default:
        {
            printf("enter valid number");
        }
        }
        return 0;

    }*/

/*#include<stdio.h>
int main(){
    char ch;
    scanf("%c",&ch);
    switch(ch)
    {
        case 'a':
        case 'e':
        case 'i':
        case 'o':
        case 'u':
        case 'A':
        case 'I':
        case 'E':
        case 'O':
        case 'U':
               {
                printf("ch is vowel");
                break;
               }
        default:
        {
            printf("ch is consonant");
        }
    }
}
*/
/*#include<stdio.h>
int main()
{
    int ch;
    char a;
    printf("enter a character :\n");
    scanf("%d",&ch);
    printf("%c",ch);
    a =ch;


    if ( a == 'ch')
    {
        printf("it is alpha num");
    }
    else 
    {
        printf("it is character");
    }
    return 0;
}*/
/*#include<stdio.h>
int main()
{
    char n;
    printf("enter a character:\n");
    scanf("%c",&n);
    if (n>=48 && n<=57)
    {
        printf("it is a number");
    }
    else if (n>= 65 && n<=90)
    {
        printf("it a upercase alphabet");
    }
    else if( n>=97 && n<=122)
    {
        printf("it is lowercase alphabet");
    }
    else
    {
        printf("it is other symbol");
    }
}*/
/*#include<stdio.h>
int main()
{
    float a;
    int x=10 , y=3;
    a= x/y;
    printf("%f\n", a);
    a =(float) x/y;
    printf("%f",a);
    return 0;
}*/
/*#include<stdio.h>
int main()
{
    float a=0.12345678903435;
    double b=1.23423342455632;
    long double c = 1.345656543434787878;
    printf("%.14f %.12f %.21ld", a,b,c);
    return 0;
}*/
/*#include<stdio.h>
int main ()
{
    int a,b,c;
    c= (a=20,b=13,a+b);
    printf("%d",c);
    return 0;

}*/
/*#include<stdio.h>
int main()
{
    int var =12;
    int var2 =13;
    int c;
   
    printf("%d",c);
    return 0;
}*/

/*#include<stdio.h>
int main ()
{
    int days;
    printf("enter the number of days i.e 29,28,30,31:");
    scanf("%d",&days);
    switch (days)
    { default:
        printf("hello months");
        break;
    case 30:
    {
        printf("april//may//june//september//november");
        break;
    }
    case 31:
    {
         printf("january//march//may//july//august//octuber//december");
         break;
    }
    case 28:
    {
        printf("february");

    }
    }
    return 0;
}*/

/*#include<stdio.h>
int main()
{
    float a= 12.34;
    printf("%f",sizeof(a));
    return 0;
}*/
 
/*#include<stdio.h>
int main()
{
    int year;
    scanf("%d",&year);
    if (year %4 ==0 & year % 100 !=0)
    {
        printf("it is a leap year");
    }
    else if (year %100 ==0 & year %400 ==0)
    {
        printf("it is a leap year");

    }
    return 0 ;
}*/
/*#include<stdio.h>
int main()
{
    int KM , ans, change;
    scanf("%d%d",&KM,&change);
    if (change==1)
    {
       ans=KM*1000;
       printf("distance in m %d",ans);
    }
    if (change ==2)
    {
       ans =KM *100000;
       printf("distance in cm %d",ans);
    }
    if (change ==3)
    {
        ans =KM* 1000000;
        printf("distance in mm %d",ans);
    }
return 0;
}*/
/*#include<stdio.h>
#include<math.h>
int main()
{
    float a,b,c , x, y, z;
    scanf("%f%f%f",&a,&b,&c);
    x=sqrt(a*a +b*b);
    y=sqrt(b*b + c*c);
    z=sqrt(a*a+c*c);
    if (c==x || y==a || z==b)
    {
        printf("it is perfect right triangle");
    }
    else{
        printf("it is not rt");
    }
    return 0;
}*/
#include<stdio.h>
/*int main()
{
    int i ;
    i=1;
    for (;i<=10;)
    {
        printf("hilo");
        i++;
    }
    return 0;
}*/
/*#include <stdio.h>
#define PRINT(i, limit)								 \
	while (i < limit) {								 \
		printf("GeeksQuiz ");							 \
		i++;											 \
	}
int main()
{
	int i = 0;
	PRINT(i, 3);
	return 0;
}*/
/*#include <stdio.h>
#define MULTIPLY(a, b) a* b
int main()
{
	// The macro is expanded as 2 + 3 * 3 + 5, not as 5*8 
	printf("%d", MULTIPLY(12, 3));
	return 0;
}*/
/*#include<stdio.h>
#include<math.h>
int main() 
{
    int a,b,c;
    float d ,  root1 , root2;
    scanf("%d%d%d",&a,&b,&c);
    d=(b*b)-(4*a*c);
    if (d<0)
    {
        printf("%0.3f,%0.3f", -b/2*a + (sqrt(d))/(2*a));
        printf("%0.3f,%0.3f", -b/2*a - (sqrt(d))/(2*a));
    }  
    else if(d==0)
    {
        root1=-b/(2*a);
        printf("%0.3f",root1);
    }
    else 
    {
        root1= (-b+sqrt(d))/(2*a);
        root2= (-b-sqrt(d))/(2*a);
        printf("%0.3f%0.3f",root1,root2);
    }




    return 0;
}*/







