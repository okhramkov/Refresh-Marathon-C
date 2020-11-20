double mx_pow(double n, unsigned int pow) {
    unsigned int i;
    if (pow == 0)
    return 1;
    if (pow == 1)
    return n;
    for (i = 0; i < pow; i++)
        n *= n;
    return n;
}
