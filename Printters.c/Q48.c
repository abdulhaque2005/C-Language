# include<stdio.h>
int main(){
int n;
int count=1;
printf("Enter the number\n");
scanf("%d",&n);
for(int i=1; i<=n; i++){
    for(int j=1; j<=n; j++){

        printf("%d ",count);
        count=count+1;
    }
    printf("\n");
 
}

return 0;}