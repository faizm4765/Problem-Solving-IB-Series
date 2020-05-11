/*  Reverse digits of an integer.

Example1:

x = 123,

return 321
Example2:

x = -123,

return -321

Return 0 if the result overflows and does not fit in a 32 bit signed integer.

*/


int revers(int num){
    int rem,rev = 0,temp = 0;
    while(num){
        rem = num%10;
        rev = rev*10 + rem;
        if(rev/10 != temp){
            return 0;
        }else{
            temp = rev;
        }
        num /= 10;
    }
    return rev;
}

int Solution::reverse(int A) {
    int rev = revers(A);
    if(rev >INT_MAX or rev < INT_MIN)
        rev = 0;
    return rev;
}
