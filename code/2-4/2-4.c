#include <ctype.h>
#include <stdio.h>

int main(void)
{
    char chars[] = {'A', 'z', '5', '!', ' '};
    int n = sizeof(chars) / sizeof(chars[0]);

    for (int i = 0; i < n; i++) {
        char ch = chars[i];
        printf("%c - alpha:%d digit:%d upper:%c lower:%c\n",
               ch,
               isalpha((unsigned char)ch),
               isdigit((unsigned char)ch),
               toupper((unsigned char)ch),
               tolower((unsigned char)ch));
    }

    return 0;
}
