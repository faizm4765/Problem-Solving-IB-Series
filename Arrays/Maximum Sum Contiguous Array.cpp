/*  Find the contiguous subarray within an array, A of length N which has the largest sum. *

(Kaddane's Algorithm)

------------------------------------------------------------------------------------------------

int max(int a,int b){
    return(a>b?a:b);
}

int Solution::maxSubArray(const vector<int> &A) {
    long long int sum = 0,sum1 = INT_MIN;
    long long int n = A.size();
    for(long long int i=0;i<n;i++){
        sum = max(A[i],sum+A[i]);
        sum1 = max(sum,sum1);
    }
    return sum1;
}
