//Determine whether an integer is a palindrome. Do this without extra space.


int Solution::isPalindrome(int A) {
    if(A<0)
        return 0;
    int n = A;
    long long rev = 0;
    while(A){
        int rem =  A%10;
        rev = rev*10 + rem;
        A /= 10;
    }
    return rev==n;
}
