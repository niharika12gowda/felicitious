/*#include<stdio.h>

typedef struct student{
char *name;
int tm;
float cgpa;
char grade;

}std;

int main(){
std s[5];

for(int i=0;i<5;i++)
{printf("enter the tm cgpa grade\n");
    scanf("%d\n%f\n%c",&s[i].tm,&s[i].cgpa,&s[i].grade);

}
for(int i=0;i<5;i++)
{
    printf("tm %d\t cgpa %f\t grade %c\n",s[i].tm,s[i].cgpa,s[i].grade);
}
//scanf("%s\n%d\n%f\n%c",&s[i].name,&s[i].tm,&s[i].cgpa,&s[i].grade);
// printf("%s\t%d\t%f\t%c\n",s[i].name,s[i].tm,s[i].cgpa,s[i].grade);


//scanf("%d",&s[0].tm);
//scanf("\n%f",&s[0].cgpa);
//scanf("\n%c",&s[0].grade);
//printf("%d\n",s[0].tm);
//printf("%f\n",s[0].cgpa);
//printf("%c",s[0].grade);
}
*/




#include<stdio.h>

typedef struct student{
char name[20];
int tm;
float cgpa;
char grade;

}std;

int main(){
    int n;
    printf("enter the number of students\n");
    scanf("%d",&n);
std s[n];

for(int i=0;i<n;i++)
{printf("enter the name, term, cgpa & grade\n");
scanf("%s\n%d\n%f\n%c",&s[i].name,&s[i].tm,&s[i].cgpa,&s[i].grade);
printf("\n");
}

for(int i=0;i<n;i++)
{
 printf("name of student: %s\t term: %d\t cgpa: %f\t  grade: %c\n\n",s[i].name,s[i].tm,s[i].cgpa,s[i].grade);
}
printf("%d",sizeof(std));

}
