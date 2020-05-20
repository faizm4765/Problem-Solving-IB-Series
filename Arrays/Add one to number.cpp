/*  Given a non-negative number represented as an array of digits,

add 1 to the number ( increment the number represented by the digits ).

The digits are stored such that the most significant digit is at the head of the list.

Example:

If the vector has [1, 2, 3]

the returned vector should be [1, 2, 4]

as 123 + 1 = 124.
*/

------------------------------------------------------------------------------------------------------------

vector<int> Solution::plusOne(vector<int> &A) {
    int n = A.size(),i = n-1,k = 0;
    if(n == 1 and A[0] == 0){
        A[0] += 1;
        return A;
    }
    for(auto j= A.begin();j != A.end();){
        if((*j) == 0){
            A.erase(j);
            n--;
            //j++;
        }   //cout<<"hi"<<" ";
        if((*j) != 0)
            break;
    }   
    //return A;
    i = n-1;
    while(i>0 and A[i] == 9){
        A[i] = 0;
        i--;
    }
    if(i == 0){
        if(A[0] == 9){
            A[0] = 0;
            A.insert(A.begin(),1);
        }else{
            A[0] = A[0]+1;
         }
    }else{
        A[i] += 1;
    }
    return A;
}

