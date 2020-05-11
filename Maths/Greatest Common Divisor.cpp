int Solution::gcd(int A, int B) {
    if(A == 0)
      return B;
    if(B == 0)
      return A;
    int num = A<B?A:B;
    int hcf = 1;
    for(int i=2;i<=num;i++){
        if(A%i == 0 and B%i == 0 and i>hcf)
            hcf = i;
    }
    
    return hcf;
}
