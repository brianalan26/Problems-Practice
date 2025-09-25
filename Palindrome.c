bool isPalindrome(int x) {
    int num=x;
    int digit=0;
    long int rev=0;
    while(num>0){
        digit=num%10;
        rev=rev*10 + digit;
        num/=10;
    }
    if(x==rev) return true ;
    else return false;
}
