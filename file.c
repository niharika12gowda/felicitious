
#include<stdio.h>
int main()
{
 FILE *fp=NULL;
 fp=fopen("vikram.txt","r");
 if(fp!=NULL)
 {
  // char c[100]="VIKRAM G V V";
   //char d;
//    fprintf(fp,"%s",c);
//    fclose(fp);
  for(int i=0;i<500;i++)
   {
    char ch=fgetc(fp);
    printf("%c",ch);
    }
    fclose(fp);
 }
 else
    printf("Error");
}
