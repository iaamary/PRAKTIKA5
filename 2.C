#include <stdio.h>
#include <string.h>

int main() {
    char word[] = "yellow";
    char result[4];
    int j = 0;

    for (int i = 3; i < 6; i++) {
        result[j++] = word[i];
    }
    result[j] = '\0';

    printf("%s\n", result);

    return 0;
}
