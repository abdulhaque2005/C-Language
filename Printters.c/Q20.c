# include <stdio.h>
int main(){

int n;
printf("Enter the number\n");
scanf("%d",&n);
int count='A';
for(int i=0; i<=n; i++){
for(int j=0; j<=i; j++){
    printf("%c ", count);
    count++;
}
printf("\n");
}

    return 0;
}
