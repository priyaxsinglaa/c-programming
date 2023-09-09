#include<stdio.h>
#define PI 3.14
#undef FILE_SIZE
#define FILE_SIZE
#if !defined(MESSAGE)
    #define MESSAGE "your wish.."
    #endif
#define square(x) (x*x)   
int main(){
    /*printf("line number %d\n", __LINE__);
    printf("curent file name : %s\n",__FILE__);
    printf("cureent date : %s\n",__DATE__);
    printf("curent time : %s\n"__TIME__);
    #ifdef __STDC__
    printf("complier complies with c standard\n");
    #else 
    printf("complier does not comply with c standards\n");
    #endif*/
    printf("here is message : %s\n",MESSAGE);
    printf("here is square of 10 is :%d\n",square(10));

    return 0;
}