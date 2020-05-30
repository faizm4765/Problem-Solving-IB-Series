/*  Given a positive integer n and a string s consisting only of letters D or I,
    you have to find any permutation of first n positive integer that satisfy the given input string.

  D means the next number is smaller, while I means the next number is greater.

  Notes

  Length of given string s will always equal to n - 1
  Your solution should run in linear time and space.
  
Example :

Input 1:

n = 3

s = ID

Return: [1, 3, 2]

*/

---------------------------------------------------------------------------------------------------------

#define pb push_back
vector<int> Solution::findPerm(const string A, int B) {
    
    vector<int> res;
    int n = A.size();
    int i = 1;
    stack<int> s;
    for(auto c:A){
        
        if(c == 'D'){
            s.push(i);
        }else{
            s.push(i);
            while(!s.empty()){
                res.pb(s.top());
                s.pop();
            }
        }
        i++;
    }
    s.push(B);
    while(! s.empty()){
        res.pb(s.top());
        s.pop();
    }
    return res;
}
