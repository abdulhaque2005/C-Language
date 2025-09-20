# include<stdio.h>
int main(){
int n;
printf("Enter the number\n");
scanf("%d",&n);
for(int r=1; r<=n; r++ ){
for(int j=1; j<=r; j++){
    if((r+j)%2==0){
      printf("1 ");  
    }
    else{
        printf("0 ");
    }
}
printf("\n");

}













return 0;}