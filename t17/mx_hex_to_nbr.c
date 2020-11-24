#include<string.h>
#include<stdio.h>
#include <stdbool.h>

bool mx_isdigit(int c) {
    return (c > 47 && c < 58) ? 1 : 0;
}

bool mx_islower(int c) {
    return ( c > 96 && c < 123) ? 1 : 0;
}

bool mx_isupper(int c) {
    return (c > 64 && c < 91) ? 1 : 0;
}

unsigned long mx_hex_to_nbr(const char *hex) {
    unsigned long nbr = 0;

    if(hex == NULL)
        return 0;
    for(int i = 0; hex[i]; i++) {
        if(mx_isdigit(hex[i]))
            nbr = nbr * 16  + (hex[i] - 48);
        if(mx_islower(hex[i]) && hex[i] <= 'f')
            nbr = nbr * 16 + (hex[i] - 87);
        if(mx_isupper(hex[i]) && hex[i] <= 'F')
            nbr = nbr * 16 + (hex[i] - 55);
    }
    return nbr;
}


// int main(void) {
//     char *hex = "FADE";
//     unsigned long nbr;
//     nbr = mx_hex_to_nbr(hex);
//     printf("%ld", nbr);
// }


