/*  Given numRows, generate the first numRows of Pascal’s triangle.

Pascal’s triangle : To generate A[C] in row R, sum up A’[C] and A’[C-1] from previous row R - 1.

Example:

Given numRows = 5,

Return

[
     [1],
     [1,1],
     [1,2,1],
     [1,3,3,1],
     [1,4,6,4,1]
]

*/
--------------------------------------------------------------------------------------------------------------

#define pb push_back
vector<vector<int> > Solution::solve(int A) {
    int i = 1;
    vector<vector<int> > v1;
    while(i <= A){
        int j = 0;
        vector<int> v;
        v.pb(1);
        j++;
        if(i>2){
            while(j<i-1){
                v.pb(v1[i-2][j] + v1[i-2][j-1]);
                j++;
            }
        }
        if(i>1)
            v.pb(1);
        v1.pb(v);
        i++;
    }
    return v1;
}
