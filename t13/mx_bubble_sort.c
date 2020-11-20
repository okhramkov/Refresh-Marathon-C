int mx_strcmp(const char *s1, const char *s2);

static void mx_bubbleSort(char **str, int number)
{
    for (int i = 0; i < number - 1; i++)
    {
        for (int j = 0; j < number - 1 - i; j++)
        {
            if (mx_strcmp(str[j], str[j + 1]) > 0)
            {
                char *tmp = str[j];
                str[j] = str[j + 1];
                str[j + 1] = tmp;
            }
        }
    }
}
