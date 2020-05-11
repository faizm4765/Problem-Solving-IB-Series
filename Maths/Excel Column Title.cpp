/*Given a positive integer, return its corresponding column title as appear in an Excel sheet.
    it 
    1 -> A
    2 -> B
    3 -> C
    ...
    26 -> Z
    27 -> AA
    28 -> AB 
*/


string Solution::convertToTitle(int A) {
    string s = "ABCDEFGHIJKLMNOPQRSTUVWXYZ";
    string res;
    while(A){                       
        A -= 1;             //  decrementing A so that it matches with our string s indices.
        int rem = A%26;
        res += s[rem];
        //cout<<res<<" ";
        A /= 26;
    }
    reverse(res.begin(),res.end());
    return res;
}
