//Find no of trailing zeroes in n! 

int Solution::trailingZeroes(int A) {
    int i = 5,f = 0;
    while((A/i)>=1){
        f += A/i;
        i *= 5;
    }
    return f;
}
