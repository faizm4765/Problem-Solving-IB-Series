/*  Implement the next permutation, which rearranges numbers into the numerically next greater permutation of numbers for a 
    given array A of size N.

If such arrangement is not possible, it must be rearranged as the lowest possible order i.e., sorted in an ascending order.

Note:

1. The replacement must be in-place, do **not** allocate extra memory.
2. DO NOT USE LIBRARY FUNCTION FOR NEXT PERMUTATION.

Return an array of integers, representing the next permutation of the given array.
Constraints:

1 <= N <= 5e5
1 <= A[i] <= 1e9
Examples:

Input 1:
    A = [1, 2, 3]

Output 1:
    [1, 3, 2]

Input 2:
    A = [3, 2, 1]

Output 2:
    [1, 2, 3]

Input 3:
    A = [1, 1, 5]

Output 3:
    [1, 5, 1]

Input 4:
    A = [20, 50, 113]

Output 4:
    [20, 113, 50]

*/
-----------------------------------------------------------------------------------------------------
int binary_search(vector<int> &A,int l,int r,int key){
    
    int mid,index = -1;
    while(l<=r){
        mid = (l+r)/2;
        if(A[mid] <= key){
            r = mid-1;
        }else{
            l = mid+1;
            if(index == -1 or A[index] >= A[mid]){
                index = mid;
            }
        }
    }
    return index;
}


vector<int> Solution::nextPermutation(vector<int> &A) {
    
    int n = A.size(),i = n-2,j = n-1,f = 0;
    if(n < 2)
        return A;
    while(i>=0 and A[i]>=A[i+1])
        i--;
    if(i != -1){
        int in = binary_search(A,i+1,n-1,A[i]); //cout<<in<<" ";
        int temp = A[i];
        A[i] = A[in];
        A[in] = temp;
    }
    sort(A.begin()+i+1,A.end());
    return A;
}
