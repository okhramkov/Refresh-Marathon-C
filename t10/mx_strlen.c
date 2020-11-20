int mx_strlen(const char *s) {
    int i;
    for (i = 0; s[i]; i++);
    return i;
}
