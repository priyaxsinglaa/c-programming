#include<stdio.h>
#define MAX 100
int stack_arr[100];
int stack=-1;
void push(int data);

int main()
{
    int num;
    int i=2;
    int count=0;
    scanf("%d",&num);

    while(num!=1)
    {
        while(num%i==0)
        { count++;
           push(i);
           num=num/i;
           
        }
        i++;
    }
    for(int i=count-1;i>=0;i--)
    {
        printf("%d ",stack_arr[i]);
    }
    return 0;
}

void push(int data)
{
    // if(stack==MAX-1)
    // {
    //     printf("stack overflow");
    //     return;
    // }
    stack++;
    stack_arr[stack]=data;
    
}
