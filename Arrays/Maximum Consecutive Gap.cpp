/*    Given an unsorted array, find the maximum difference between the successive elements in its sorted form.

Try to solve it in linear time/space.

Example :

Input : [1, 10, 5]
Output : 5 
Return 0 if the array contains less than 2 elements.
*/

--------------------------------------------------------------------------------------------------------------------------

int Solution::maximumGap(const vector<int> &A) {
    int n = A.size(),i;
    if(n<2)
        return 0;
    vector<int>v(A.begin(),A.end());
    int res = INT_MIN;
    sort(v.begin(),v.end());
    for(i=1;i<n;i++){
        if(v[i]-v[i-1] > res)
            res = v[i]-v[i-1];
    }
    return res;
}
