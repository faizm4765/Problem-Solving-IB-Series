/*  Given an array A of integers, find the maximum of j - i subjected to the constraint of A[i] <= A[j].

If there is no solution possible, return -1.

Example :

A : [3 5 4 2]

Output : 2 
for the pair (3, 4)
*/

-----------------------------------------------------------------------------------------------------------------------------


int Solution::maximumGap(const vector<int> &A) {
    int i = 0,j = A.size()-1;
    int n = j+1,res = INT_MIN;
    if(n == 0)
        return -1;
    for(i=0;i<n;i++){
        for(j=n-1;j>i;j--){
            if(A[i] <= A[j])
                res = max(res,j-i);
        }
    }
    return max(res,0);
}
