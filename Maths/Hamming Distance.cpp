/* Hamming distance between two non-negative integers is defined as the number of positions at
  which the corresponding bits are different.

  For example,
  HammingDistance(2, 7) = 2, as only the first and the third bit differs in the binary representation of 2 (010) and 7 (111).

  Given an array of N non-negative integers, find the sum of hamming distances of all pairs of integers in the array.
  Return the answer modulo 1000000007.
*/





#define m 1000000007

int Solution::hammingDistance(const vector<int> &A) {
    
    int n = A.size(),i,j;
    long long ans = 0;
    vector<int>v(32,0);
    for(j=0;j<n;j++){
        int index = 0;
        int num = A[j];
        while(num){
            v[index] += (num&1);
            num >>= 1;
            index++;
        }
    }        
    for(i=0;i<32;i++){
        ans = (ans +(long long ) 2*v[i]*(n-v[i]))%m;
    } 
    return ans%m;
}
