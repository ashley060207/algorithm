#include <stdio.h>
#include <stdbool.h>

int main(void){

    int a, b;
        
    while(true)
    {
        scanf("%d %d", &a, &b);
        
        if (a == 0 && b ==0) {
            break;
        }
        
        printf("%d\n", a+b);
    }

    return 0;
}

//or
//while (scanf("%d %d", &a, &b), a || b) {
//    printf("%d\n", a + b);
//}
