#include<string.h>

unsigned long mx_hex_to_nbr(const char *hex) {
    unsigned long nbr = 0;

    if(hex == NULL)
        return 0;
    for(int i = 0; hex[i]; i++) {
        if(i >= 48 && i <= 57)
            nbr = nbr * 16  + (hex[i] - 48);
        if ((i > 96 && i < 123) && hex[i] <= 'f')
            nbr = nbr * 16 + (hex[i] - 87);
        if((i > 64 && i < 91) && hex[i] <= 'F')
            nbr = nbr * 16 + (hex[i] - 55);
    }
    return nbr;
}
