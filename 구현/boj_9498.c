#include <stdio.h>

int main(void) {

    int s;
    scanf("%d", &s);
    
    if(s >= 90){
        puts("A");
    } else if(s >= 80){
        puts("B");
    } else if(s >= 70){
        puts("C");
    } else if(s >= 60){
        puts("D");
    } else if(s >= 0){
        puts("F");
    } else{
        puts("측정불가: 점수를 확인하세요");
    }
}
