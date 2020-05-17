/*  Rearrange a given array so that Arr[i] becomes Arr[Arr[i]] with O(1) extra space. */






void Solution::arrange(vector<int> &A) {

    int n = A.size(),i;
    for(i=0;i<n;i++){
        int t = A[A[i]];
        A[i] = (t%n)*n+A[i]%n;
    }
    for(i=0;i<n;i++)
        A[i] = A[i]/n;
    
}
