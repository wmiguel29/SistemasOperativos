#include <stdio.h>

int main()
{
    FILE *fd;
    char dir[20] = "file.txt";
    char str[20];

    fd = fopen(dir, "a  ");
    fgets(str,400,fd);

    printf("%s", str);

    fclose(fd);

    return 0;
}