#include <stdio.h>
#include <ctype.h>

int main() {
    char letter = 'L'; 
    int position;

    if(isalpha(letter)) {
        position = tolower(letter) - 'a' + 1;
        printf("Буква '%c' находится на позиции %d\n", letter, position);
    } else {
        printf("'%c' не является буквой английского алфавита\n", letter);
    }

    return 0;
}
