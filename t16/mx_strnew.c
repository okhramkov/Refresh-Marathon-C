#include<string.h>
#include <stdlib.h>

char *mx_strnew(const int size) {
    char *arr = (char *) malloc ((size + 1)*sizeof(char));
    for(int i = 0; i <= size; i++)
        arr[i] = '\0';
    return arr;
}
