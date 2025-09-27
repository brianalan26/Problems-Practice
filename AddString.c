char* addStrings(char* num1, char* num2) {
    int len1 = strlen(num1);
    int len2 = strlen(num2);

    int maxLen = (len1 > len2 ? len1 : len2) + 1;
    char* result = (char*)malloc(maxLen + 1); 
    result[maxLen] = '\0';

    int i = len1 - 1, j = len2 - 1, k = maxLen - 1;
    int carry = 0;

    while (i >= 0 || j >= 0 || carry > 0) {
        int x = (i >= 0) ? num1[i--] - '0' : 0;
        int y = (j >= 0) ? num2[j--] - '0' : 0;

        int sum = x + y + carry;
        result[k--] = (sum % 10) + '0';
        carry = sum / 10;
    }


    return result + k + 1;
}
