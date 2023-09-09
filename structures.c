// #include<stdio.h>
//    typedef struct student {
//     int rollno;
//     char name[100];
//     float cgpa;
//    }std;
// int main()
// {
//      std s1;
//      s1.rollno=34535353;
//      s1.cgpa=9.87;
//      printf("%d",s1.rollno);
// return 0;
// }
// #include<stdio.h>

// struct student {
//     char name[900];
//     int roll;
//     float cgpa;
// };
// int main()
// {
    // struct student s1;
    // s1.roll=89;
    // s1.cgpa=8.9;
    // printf("%0.1f",s1.cgpa);
    // struct student ece[100];
    // ece[0].roll= 100;
    // ece[0].cgpa=9.2;
    // printf("%d",ece[0].roll);
    // struct student s1={"priya",89,9.2};
    // printf("%s",s1.name);
    // struct student *ptr=&s1;
    // printf("%d",(*ptr).roll);
    // printf("%d",ptr->roll);
// return 0;
// }
// #include<stdio.h>
// struct student {
//     char name[900];
//     int roll;
//     float cgpa;
// };
// void printinfo(struct student s1);
// int main()
// {
//     struct student s1={"priya",89,9.2};
//     printinfo(s1);
// return 0;
// }
// void printinfo(struct student s1)
// {
//     printf("%d",s1.roll);
// }
#include<stdio.h>

struct address{
    int block;
    int houseno;
    char city[100];
    char state[100];
};
void address1(struct address person1);
void address2(struct address person2);
int main(){
    struct address person1;
    printf("enter block state houseno city for person 1\n");
    scanf("%d",&person1.block);
    scanf("%s",person1.state);
    scanf("%d",&person1.houseno);
    scanf("%s",person1.city);
    struct address person2;
    printf("enter block state houseno city for person 2\n");
    scanf("%d",&person2.block);
    scanf("%s",person2.state);
    scanf("%d",&person2.houseno);
    scanf("%s",person2.city);
    address1(person1);
    address1(person2);
return 0;
}
void address1(struct address person1){
    printf("%d %d %s %s " , person1.block,person1.houseno,person1.city,person1.state);
    
}
#include<stdio.h>
struct employee{
    char employee_name[100];
    int joining_date;
    char dapartment[100];
};
int main() {
    
    struct employee s1,s2;
        s1.employee_name;
        s1.joining_date;
        s1.dapartment;
        
        s2.employee_name;
        s2.joining_date;
        s2.dapartment;
        
        scanf("%s,%d,%s",s1.employee_name,&s1.joining_date,&s1.dapartment);
     
        scanf("%s,%d,%s",&s2.employee_name,&s2.joining_date,&s2.dapartment);
    
    printf("s2.employee_name=%s,s2.joining_date=%d,s2.dapartment=%s",s2.employee_name,s2.joining_date,s2.dapartment);
    printf("%s,%d,%s",s1.employee_name,s1.joining_date,s1.dapartment);
    
    return 0;
}