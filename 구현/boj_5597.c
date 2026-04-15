#include <stdio.h>

int main(void){

    int arr[30] = {0};

    for(int i = 0; i < 28; i++) {
        int n;
        scanf("%d", &n);
        arr[n - 1] = 1;
    }

    for(int i = 0; i < 30; i++){
        if (arr[i] != 1) {
            printf("%d\n", i + 1);
        }
    }
    return 0;
}
