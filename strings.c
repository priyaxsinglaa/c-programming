// #include<stdio.h>
// int main()
// {
//     int n,rev;
//     int rem=0;
//     int count=0;
//     scanf("%d",&n);
//     while(n!=0)
//     {
//           rev=n%10;
           
//           if (rev==0 || rev==1)
//           {
//             n=n/10;
//           }
//           else 
//           {
//             count ++;
//             break;
//           }
          
//           }
//          if (count==0)
//          {
//             printf("binary");
//          }
//          else{
//             printf("not binary");
//          }
//          return 0;
// }

//****************************************************************************************************************************************
// #include<stdio.h>
// int main()
// {
//     int len=0,count=1;
//     char s[450];
//     fgets(s,450,stdin); //standard input
//     while(s[len]!='\0'){
//         if(s[len]==' ')
//         {
//             count++;
//         }
//         len++;
//     }
//     printf("%d",count);
// return 0;
// }
//#include<stdio.h>
// int main()
// {
//   char s[890];
//   char replacech;
//   char enterchar;
//   int count=0;
//   fgets(s,890,stdin);
//   scanf("%c",&replacech);
//   fflush(stdin);
//   scanf("%c",&enterchar);
//   while(s[count]!='\0')
//   {
//     count++;
//   }
//   fflush(stdin);
//   for (int i=0;i<=count;i++)
//   {
//     if(s[i]==replacech)
//     {
//       s[i]=enterchar;
//     }
//   }
//   puts(s);
// return 0;
// }
#include<stdio.h>
int main()
{
  char ch;
  char s[100];
  char sen[100];
  scanf("%c",&ch);
 
  scanf("%s",s);
  fflush(stdin);
  fgets(sen,100,stdin);
  
  printf("%c\n",ch);
 
  printf("%s\n",s);
 
 printf("%s\n",sen);
  
return 0;
}