#include <stdio.h>

int main() {
    char str[100];
    int start = 0, i, j;
    char temp;

    printf("Enter a sentence: ");
    fgets(str, sizeof(str), stdin);

    for (i = 0; str[i] != '\0'; i++) {
        if (str[i] == ' ' || str[i] == '\n') {
            j = i - 1;

            while (start < j) {
                temp = str[start];
                str[start] = str[j];
                str[j] = temp;

                start++;
                j--;
            }

            start = i + 1;
        }
    }

    printf("Reversed words: %s", str);

    return 0;
}