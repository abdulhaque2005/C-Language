# include <stdio.h>
int main(){

int n;
printf("Enter the number\n");
scanf("%d",&n);
for(int i=n; i>0; i--){
    for(int s=1; s<=n-i; s++){
        printf("  ");
    }
for(int j=0; j<i; j++){
    printf("%c ", 'A'+j);
}
printf("\n");
}

    return 0;
}
