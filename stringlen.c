#include<stdio.h>
//char nion();
//int main()
//{
//    char s[100]={};
//    printf("enter the char:\n");
//   // for(int i=0;i<s[100];i++){
//    scanf("%s",&s);
//    //}
//    string()
//
//}


//char nion(){
//    char s[10];
//printf("enter the characters:\n");
//
//for(int i=0;i<15;i++){
//
//    scanf("\n%s",&s[i]);
//}
//for(int j=0;j<15;j++){
//
//    printf("\n%s",&s[j]);
//}
//}





int main()
{
    char s[200];
    //int s[100];
    int i,count=0;
    scanf("%s",&s);
    for(i=0;s[i]!='\0';i++)
    {
        if(s[i]<='z' && s[i]>='a' || s[i]<='Z' && s[i]>='A'|| s[i]>='0'&&s[i]<='9' ){
        //count++;
        continue;
        }else {
            printf("%c",s[i]);
          count++;
        }
    }
    printf("\n%d",count);
}
