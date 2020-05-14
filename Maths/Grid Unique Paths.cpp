/*  A robot is located at the top-left corner of an A x B grid .

Path Sum: Example 1

The robot can only move either down or right at any point in time. 
The robot is trying to reach the bottom-right corner of the grid.

How many possible unique paths are there?

*/





int Solution::uniquePaths(int A, int B) {
    
    int a[A][B];
    int i,j;
    for(i=0;i<A;i++)
        a[i][0] = 1;
    
    for(i=0;i<B;i++)
        a[0][i] = 1;
        
    for(i=1;i<A;i++){
        for(j=1;j<B;j++){
            a[i][j] = a[i-1][j]+a[i][j-1];
        }
    }
    
    return a[A-1][B-1];
    
}
