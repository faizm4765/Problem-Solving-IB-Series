Given a matrix, A of size M x N of 0s and 1s. If an element is 0, set its entire row and column to 0.

--------------------------------------------------------------------------------------------------------------


void Solution::setZeroes(vector<vector<int> > &A) {
    
    int n = A.size(),j = 0,i=0;
    int m = A[0].size();
    vector<bool> rows(n);
    vector<bool> cols(m);
    
    for(i=0;i<n;i++){
        for(j=0;j<m;j++){
            if(A[i][j] == 0){
                rows[i] = true;
                cols[j] = true;
            }
        }
    }
    for(i=0;i<n;i++){
        for(j=0;j<m;j++){
            if(rows[i] == true or cols[j] == true)
                A[i][j] = 0;
        }
    }
}
