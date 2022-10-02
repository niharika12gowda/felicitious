#include<stdio.h>
#include<stdbool.h>
int a[4];
int main(){
    tech();
   // int a[4];
//printf("%d",tech(a));
}
/*
int tech(int a[4]){
    printf("enter the arrays elements:\n");
for(int i=0;i<4;i++){
      scanf("%d",&a[i]);

}
 if(a[0]==6){
        //printf("True");
        return 1;
    }else{
    //printf("False");
    return 0;
    }
}
*/

tech(){
    printf("enter the arrays elements:\n");
    for(int i=0;i<4;i++){
        scanf("%d",&a[i]);
}
    if(a[0]==6){
    printf("True");
    }else{
    printf("False");
    }
}




