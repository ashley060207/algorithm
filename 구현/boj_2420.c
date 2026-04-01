#include <stdio.h>

int main(void){

    long long a, b;
    long long sum;
    
    scanf("%lld %lld", &a, &b);

    sum = a - b;

    if(sum <0){
        sum *= -1;
    }

    printf("%lld", sum);

  return 0;
}
