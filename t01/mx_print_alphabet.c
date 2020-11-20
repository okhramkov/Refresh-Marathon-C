void mx_printchar(char c);

void mx_print_alphabet(void) {
    for (int i = 65; i < 91; i += 2) {
        mx_printchar(i);
        mx_printchar(i + 33);
    }
    mx_printchar('\n');
}
