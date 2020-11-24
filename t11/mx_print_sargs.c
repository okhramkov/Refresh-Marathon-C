#include <unistd.h>
#include <stdio.h>
#include <string.h>

int mx_strlen(const char *s);
void mx_printstr(const char *s);
void mx_printchar(char c);
int mx_strcmp(const char * s1, const char * s2);

void mx_print_sargs(int argc, char *argv[]) {
    int i;
    char *bulb;

    if (argc == 0)
        return;
    for (i = 1; i < argc; i++)
        for (int j = 1; j < argc - 1; j++)
            if (mx_strcmp(argv[j], argv[j + 1]) > 0) {
                bulb = argv[j];
                argv[j] = argv[j + 1];
                argv[j + 1] = bulb;
            }
    for (i = 1; i < argc; i++) {
        mx_printstr(argv[i]);
        mx_printchar('\n');
    }
}

int main(int argc, char *argv[]) {
    mx_print_sargs(argc, argv);
    return 0;
}
