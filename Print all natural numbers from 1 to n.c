#include <stdio.h>

int main(){
    int i,n;
    printf("Enter the last range number: ");
    scanf("%d", &n);
    for(i=1; i<=n; i++){
        printf("%d  ",i);
    }
    
    return 0;
}
