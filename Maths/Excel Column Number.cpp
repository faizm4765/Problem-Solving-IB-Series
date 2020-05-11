// Given a column title as appears in an Excel sheet, return its corresponding column number.

int Solution::titleToNumber(string A) {
    int n = A.length(),i,k = 0;
    long long int num = 0;
    for(i=n-1;i>=0;i--){
        num += ((A[i]-'A'+1)*pow(26,k));
        k++;
    }
    return num;
}
