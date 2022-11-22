#include <stdio.h>

char *ft_strcat(char *dest, char *src)
{
    char *start;
    int count;
    int count1;

    count = 0;
    count1 = 0;
    start = dest;
    while (dest[count])
    {
        count++;
    }

    while (src[count1])
    {
        dest[count] = src[count1];
        count++;
        count1++;
    }
    dest[count] = src[count1];
    return (start);
}

int main ()
{
    char s1[11] = "Super";
    char s2[] = "Heroe";

  printf("Concatenar s1 y s2: %s\n", ft_strcat(s1, s2));
  return 0;
}