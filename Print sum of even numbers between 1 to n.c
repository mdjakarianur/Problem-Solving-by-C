#include <stdio.h>

int main(){
    int i,n,sum=0;
    printf("Enter the last range number: ");
    scanf("%d", &n);
    for(i=1; i<=n; i++){
            if(i%2==0){
               sum+=i;
        }
    }
        printf("Sum of even number = %d  ",sum);
    return 0;
}
