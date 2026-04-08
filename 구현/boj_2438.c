#include <stdio.h>

int main(void){

    int n;
    scanf("%d", &n);

    char arr[n+1];

    for(int i = 0; i < n; i++){
        
        arr[i] = '*';
        arr[i +1] = '\0';
        
        printf("%s\n", arr);
    }

    return 0;
}
