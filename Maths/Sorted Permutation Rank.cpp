/*Given a string, find the rank of the string amongst its permutations sorted lexicographically.
  Assume that no characters are repeated.
*/




#define m 1000003

int f[100000];

int fact(int num){
    
    f[0] = 1;
    f[1] = 1;
    if(f[num-1])
        return f[num] = (num%m *f[num-1]%m)%m;
    int res = 1;
    for(int i=2;i<=num;i++)
        res = (res%m * i%m)%m;;
        
    return (f[num] = res%m);
    
}


int Solution::findRank(string A) {
    
    // if(A == NULL)
    //     return 1;
    
    int n = A.size(),i,count = 0,rank = 0;
    
    for(i=0;i<n;i++){
        count = 0;
        for(int j = i+1;j<n;j++){
            if(A[i]>A[j])
                count++;
        }
        rank +=(((count%m) * (fact(n-i-1)%m))%m);
       // cout<<rank<<" "<<i<<" "<<"\n";
    }
   /// return count;
    return (rank+1)%m;
}
