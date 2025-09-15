# include<stdio.h>
int main(){
    int n;
printf("Enter the number\n");
scanf("%d",&n);
for(int i=1; i<=n; i++){
    for(int k=i; k<n; k++){
        printf(" ");
    }

    for(int j=0; j<i; j++){
        
    printf("%c",'A'+(j%26));
    }
            printf("\n");
    }



return 0;
}