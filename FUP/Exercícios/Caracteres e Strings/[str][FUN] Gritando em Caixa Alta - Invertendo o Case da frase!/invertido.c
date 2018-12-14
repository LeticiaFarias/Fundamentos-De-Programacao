#include <stdio.h>
#include <string.h>

int main () {
    char str[100];
    scanf ("%[^\n]s", str);
    int i;
    for (i = 0; i < strlen(str); i++) {
        if (str[i] >= 65 && str[i] <= 90) {
            str[i] = str[i] + 32;
            printf ("%c", str[i]);
        }
        else if (str[i] >= 97 && str[i] <= 122) {
            str[i] = str[i] - 32;
            printf ("%c", str[i]);
        }
        else {
            printf ("%c", str[i]);
        }
    }
    return 0;
}
