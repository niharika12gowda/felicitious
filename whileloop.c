
int main()
{
    int a,b=0,i=1;
    while(i<=10){

    scanf("\n%d",&a);

    if(a<0){
    printf("Enter positive number\n");
    break;
    //continue;
     }

    i++;
    b=b+a;
    }
    printf("%d",b);
}
