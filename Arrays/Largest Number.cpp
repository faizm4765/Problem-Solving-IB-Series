/*  Given a list of non negative integers, arrange them such that they form the largest number.

For example:

Given [3, 30, 34, 5, 9], the largest formed number is 9534330.

Note: The result may be very large, so you need to return a string instead of an integer.

*/

-----------------------------------------------------------------------------------------------------------------------

bool cmp(string a,string b){
    string x = a+b;
    string y = b+a;
    return x.compare(y) > 0 ?1:0;
}
 
 
 
string Solution::largestNumber(const vector<int> &A) {
    
     string res ;
     int n = A.size();
     vector<string> v;
    // vector<pair<string,int>> ans;
    for(int i=0;i<n;i++)
          v.push_back(to_string(A[i]));
    sort(v.begin(),v.end(),cmp);
    
    if(v[0] == "0")
        return to_string(0);
    for(auto c:v)
        res = res + c;
        
    return res;
}
---------------------------------------------------------------------------------------------------------
