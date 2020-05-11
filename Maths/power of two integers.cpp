//Given a positive integer,A, which fits in a 32 bit signed integer, find if it can be expressed as A^P 
  where P > 1 and A > 0. A and P both should be integers.


int Solution::isPower(int A) {
    if(A == 1)
        return 1;
    if(A<4)
        return 0;
    long long k = sqrt(A);
    for(int i=2;i<=k;i++){
        long long num = 1;
        while(1){
            num *= i;
            if(num == A)
                return 1;
            if(num >A)
                break;
        }
    }
    return 0;
}
