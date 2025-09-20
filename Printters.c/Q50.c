# include<stdio.h>
int main(){
int n;
int count=15;
printf("Enter the number\n");
scanf("%d",&n);
for(int i=n; i>0; i--){
    for(int j=i; j<=n; j++){

        printf("%d ",count);
        count-=1;
    }
    printf("\n");
 
}

return 0;}