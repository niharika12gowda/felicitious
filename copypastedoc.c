#include<stdio.h>
int main()
{
    FILE *fp=NULL;
    FILE *p;
    fp=fopen("vikram.txt","r");
    p=fopen("copyvikram.txt","w");
    if(fp!=NULL)
    {
        char ch[50];
        while(!feof(fp))
        {
            fgets(ch,50,fp);
            fputs(ch,p);
            //printf("%s",ch);
        }

        fclose(fp);
        fclose(p);
    }
    else
        printf("Error");
}
