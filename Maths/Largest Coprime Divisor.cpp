/*  You are given two positive numbers A and B. You need to find the maximum valued integer X such that:

X divides A i.e. A % X = 0
X and B are co-prime i.e. gcd(X, B) = 1
For example,

A = 30
B = 12
We return
X = 5
*/


int Solution::cpFact(int A, int B) {
    vector<int>v;
    int num = A;
    //cout<<"A";
    for(int i=1;i<=sqrt(A);i++){
        if(A%i == 0){
            if(i == A/i)
                v.push_back(i);
            else{
                v.push_back(i);
                v.push_back(A/i);
            }
        }
    }
    sort(v.begin(),v.end());
    int n = v.size();
    //for(auto c:v)   cout<<c<<" ";
    for(int i = n-1;i>=0;i--){
        if(__gcd(B,v[i]) == 1)
            return v[i];
    }
    return 1;
}
