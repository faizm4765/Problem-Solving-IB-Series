//Given an even number ( greater than 2 ), return two prime numbers whose sum will be equal to given number.


bool prime(int n){
        for(int i=2;i<=sqrt(n);i++){
            if((n%i) == 0)
                return 0;
        }
        return 1;
    }


vector<int> Solution::primesum(int A) {
    
    for(int i=2;i<=(int)sqrt(A);i++){
        if(prime(i) and prime(A-i))
            return {i,A-i};
    }
}
