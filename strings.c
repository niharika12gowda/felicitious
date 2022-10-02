#include<stdio.h>
int main()
{
//    char s[10]={"hello,hey"};
  //  printf("%s",s);
  //char s[10]={'h','e','l','l','o','h','\0'};
//printf("%s",s);
//for (int i=0;i<5;i++)

//printf("%s",s[i]);
//for(int i=0;i<5;i++){
char str1[20]="hey man";
char str2[20]=" poda";

char concat=strcmp(str1,str2);
printf("%d\n",strlen(str1));
//puts(strcpy(str2,str1));
puts(strupr(str2));
puts(strlwr(str2));
printf("%d",(strcmp(str1,str2)));

}
//}
//}
