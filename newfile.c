
#include<stdio.h>
int main()
{
    FILE *fp=NULL;
    fp=fopen("vikram.txt","r");
    if(fp!=NULL)
    {
        char ch[50];
        while(!feof(fp))
        {
            fgets(ch,50,fp);
            printf("%s",ch);
        }
        fclose(fp);
    }
    else
        printf("Error");
}

