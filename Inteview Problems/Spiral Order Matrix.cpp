/*  Given a matrix of m * n elements (m rows, n columns), return all elements of the matrix in spiral order.

Example:

Given the following matrix:

[
    [ 1, 2, 3 ],
    [ 4, 5, 6 ],
    [ 7, 8, 9 ]
]
You should return

[1, 2, 3, 6, 9, 8, 7, 4, 5]

*/
----------------------------------------------------------------------------------------

#define pb push_back
vector<int> Solution::spiralOrder(const vector<vector<int> > &A) {
    vector<int> v;
    int dir = 0,i;
    int rows = A.size(),cols = A[0].size();
    if(rows == 0)
        return v;
    int l = 0,r = rows-1,t = 0, d = cols-1;
    while(l<=r and t<=d){
        if(dir == 0){
            for(i=t;i<=d;i++)
                v.pb(A[l][i]);
            dir = 1;
            l++;
        }else if(dir == 1){
            for(i=l;i<=r;i++){
                v.pb(A[i][d]);
            }
            dir = 2;
            d--;
        }else if(dir == 2){
            for(i=d;i>=t;i--)
                v.pb(A[r][i]);
            dir = 3;
            r--;
        }else{
            for(i=r;i>=l;i--){
                v.pb(A[i][t]);
            }
            dir = 0;
            t++;
        }
    }
    return v;
}
