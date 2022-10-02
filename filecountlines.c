#include<stdio.h>
int main()
{
    FILE*fp=NULL;
    fp=fopen("vikram.txt","r");
    if(fp!=NULL)
    {

        char ch[50];
        int i=0;
        while(!feof(fp))
        {
            fgets(ch,50,fp);
            printf("%s",ch);
            i++;

        }
        fclose(fp);
        printf("\n\nthe no. of lines is %d\n",i);
    }
    else
        printf("error");


}
