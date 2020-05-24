/*    You are given an array (zero indexed) of N non-negative integers, A0, A1 ,…, AN-1.
Find the minimum sub array Al, Al+1 ,…, Ar so if we sort(in ascending order) that sub array, then the whole array should get sorted.
If A is already sorted, output -1.

Example :

Input 1:

A = [1, 3, 2, 4, 5]

Return: [1, 2]

Input 2:

A = [1, 2, 3, 4, 5]

Return: [-1]

*/

--------------------------------------------------------------------------------------------------------------------------------

vector<int> Solution::subUnsort(vector<int> &A) {
    vector<int> v(A.begin(),A.end());
    sort(v.begin(),v.end());
    if(v == A)
        return {-1};
    int n = A.size(),i=0,j=n-1;
    int f = 0,flag = 0;
    vector<int>res;
    while(i<j){
        if(f == 0 and A[i] != v[i]){
            res.push_back(i);
            f = 1;
            i = INT_MIN;
        }
        if(flag == 0 and A[j] != v[j]){
            res.push_back(j);
            flag = 1;
            j = INT_MAX;
        }
        i++;
        j--;
        if(f == 1 and flag == 1)
            break;
    }
    sort(res.begin(),res.end());
    return res;
}
