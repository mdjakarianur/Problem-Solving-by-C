#include <stdio.h>

int main(){
    int i,m,n,sum=0;
    printf("Enter the first range number: ");
    scanf("%d", &m);
    printf("Enter the last range number: ");
    scanf("%d", &n);
    for(i=m; i<=n; i++){
            if(i%2!=0){
               printf("%d  ",i);
        }
    }

    return 0;
}