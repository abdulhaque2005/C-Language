# include<stdio.h>
int main(){
int n;
printf("Enter the number\n");
scanf("%d",&n);
for(int i=n; i>=0; i--){
    for(int k=i; k<=n; k++){
        printf(" ");
    }
    for(int j=1; j<=i; j++){
        printf("*");
    }
    printf("\n");
}


    return 0;
}