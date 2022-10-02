int main(){

int a[2][5][5],i,j,k;
    for(int i=0; i<2; i++){
        for(int j=0; j<5; j++){
            for(int k=0; k<5;k++){
                a[i][j][k]=0;
    }
    }
    }

    for (j=0;j<5;j++){
            for(k=0;k<1;k++){

                scanf("\n%d",&a[5][j][k]);
            }
    }


    for(int i=0; i<10; i++){
        for(int j=0; j<10; j++){
            for(int k=0; k<10;k++){
                printf("\t%d",a[i][j][k]);
    }
    printf("\n");
    }
    printf("\n");
    }
}
