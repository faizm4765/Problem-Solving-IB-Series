/*  Give a N*N square matrix, return an array of its anti-diagonals. Look at the example for more details.

Example:

		
Input: 	

1 2 3
4 5 6
7 8 9

Return the following :

[ 
  [1],
  [2, 4],
  [3, 5, 7],
  [6, 8],
  [9]
]
  

*/
--------------------------------------------------------------------------------------------------------------------

vector<vector<int> > Solution::diagonal(vector<vector<int> > &A) {
    
    vector<vector<int> > v;
    int i,j,n = A.size();
    if(n == 0)
        return v;
    map<int,vector<int>> mp;
    for(i=0;i<n;i++){
        for(j=0;j<n;j++){
            mp[i+j].push_back(A[i][j]);
        }
    }
    for(auto c:mp){
        v.push_back(c.second);
    }
    return v;
}
