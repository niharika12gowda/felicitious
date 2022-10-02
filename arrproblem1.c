  #include<stdio.h>
int main(){
/*
    int b,c;
int a[3];
    for(int i=0; i<3; i++){
    scanf("\n%d",&a[i]);
    }
if(a[0]==6||a[2]==6){
    printf("true");
//    if(a[2]==6);{
//        printf("True");
    //}
}else{
printf("enter new value");
}*/
/*
int a[3];
int b[3];
int d=0;
    for(int i=0; i<=2; i++){
    scanf("\n%d",&a[i]);
    }
    for(int i=2; i>=0; i--){
        b[i]=a[d++];
    }
    for(int i=0; i<=2;i++){
        printf("%d\n",b[i]);
    }
*/

int a[3];
int b[3];
int d=0;
    for(int i=0; i<=2; i++){
    scanf("\n%d",&a[i]);
    }
    for(int i=2; i>=0; i--){
    b[i]=a[i];
    }
    for(int i=0; i<=2;i++){
        printf("%d\n",b[i]);
    }
}


