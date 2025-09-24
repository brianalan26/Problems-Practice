#include <stdio.h>
#include <stdbool.h>
#include <string.h>
void findTheDifference(char* s, char* t) {
    char res = 0;

    for (int i = 0; s[i] != '\0'; i++) {
        res ^= s[i];
    }

    for (int i = 0; t[i] != '\0'; i++) {
        res ^= t[i];
    }
    printf("%c",res);
}

int main() {
    char s[] = "abcd";
    char t[] = "abcde";
    findTheDifference(s,t);
    return 0;
}
