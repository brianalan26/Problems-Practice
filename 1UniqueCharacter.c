#include <stdio.h>
#include <stdbool.h>
#include <string.h>

int firstUniqChar(char* s) {
    int count[26] = {0};

    for (int i = 0; i < strlen(s); i++) {
        count[s[i] - 'a']++;
    }

    for (int j = 0; j < strlen(s); j++) {
        if (count[s[j] - 'a'] == 1)
            return j;
    }

    return -1; 
}

int main() {
    char s[] = "leetcode";

    int result = firstUniqChar(s);

    if (result != -1)
        printf("unique '%c' at index %d\n", s[result], result);
    else
        printf("No unique character found.\n");

    return 0;
}
