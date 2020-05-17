#define m 1000003
#define ll long long int

int f[100000];

long long int fact(long long int num){
    
    f[0] = 1;
    f[1] = 1;
    num = num%m;
    if(f[num-1])
        return f[num] = (num%m *f[num-1]%m)%m;
    long long int res = 1;
    for(int i=2;i<=num;i++)
        res = (ll)(res%m * i%m)%m;;
        
    return (f[num] = res%m);
    
}



long long int power(long long int a,long long int b){
    if(a == 0)
        return 0;
    if(b == 0)
        return 1;

    if(b == 1)
        return a%m;
    
    if(b&1)
        return (long long int)((ll)((ll)power(a,b-1)%m * (ll)power(a,1)%m)%m);
    else
        return (long long int)((ll)((ll)power(a,b/2)%m * (ll)power(a,b/2)%m)%m);

}




int Solution::findRank(string A) {
    
    // if(A == NULL)
    //     return 1;
    
    int n = A.size(),i,count = 0;
    long long int rank = 0;
    
    
    unordered_map<char,int> mp;
    
    for(i=0;i<n;i++){
        count = 0;
    // cout<<i<<" ";
     //   mp[A[i]] = 1;
        for(int j = i+1;j<n;j++){
            if(A[i]>A[j])
                count++;
        }
       // cout<<i;
        for(int k = i;k<n;k++)
            mp[A[k]] += 1;
      // cout<<"bail ";
        //mp.clear();
        long long int f = 1;
         for(auto c:mp){
        
              f = (f%m * (ll)fact(c.second)%m)%m;     
         }
            
          mp.clear();  
      //  cout<<f<<" "<<count<<" "<<fact(n-i-1)%m<<" "<<(long long int)power(fact(f),m-2)%m<<"\n";    
        rank = (rank%m + (long long int)(count* (long long int)fact(n-i-1)%m * (long long int)power(f,m-2)%m))%m;
       
        //cout<<rank<<" "<<i<<" "<<"\n";
    }

    return (rank+1)%m;
}
