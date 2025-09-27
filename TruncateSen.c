char* truncateSentence(char* s, int k) {
    int len=strlen(s);
    int spaces=0;

    for(int i = 0 ; i < len ; i ++){
        if(s[i] == ' ') {
            spaces++;
            if(spaces==k){
                s[i]='\0';
                break;
            }
        }
    }
    return s;
}
