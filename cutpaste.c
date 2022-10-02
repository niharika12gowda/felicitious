#include<stdio.h>
int main()
{
    FILE *fp=NULL;
    FILE *p;
    fp=fopen("copyvikram.txt","r+");
    p=fopen("copyv.txt","w");
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
        fp=fopen("copyvikram.txt","w");
        fclose(fp);
    }
    else
        printf("Error");
}

