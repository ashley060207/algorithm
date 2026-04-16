#include <stdio.h>
#define LEN_INPUT 21

int main(void) {
    char str[LEN_INPUT];
    scanf("%s", str);
    
    for (int i = 0; str[i] != '\0'; i++) {
        if ('A' <= str[i] && str[i] <= 'Z')
            str[i] += 32;
        else if ('a' <= str[i] && str[i] <= 'z')
            str[i] -= 32;
    }
    
    printf("%s", str);
    return 0;
}

// #include <stdio.h>
// #define LEN_INPUT 21

// int main(void) {
//     char str[LEN_INPUT];
//     scanf("%20s", str);

//     for (int i = 0; str[i]; i++) {
//         if ((str[i] >= 'A' && str[i] <= 'Z') || 
//             (str[i] >= 'a' && str[i] <= 'z')) {
//             str[i] ^= 32;
//         }
//     }

//     printf("%s", str);
//     return 0;
// }
