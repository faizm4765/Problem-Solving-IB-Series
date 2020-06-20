Implement next permutation, which rearranges numbers into the lexicographically next greater permutation of numbers.

If such arrangement is not possible, it must rearrange it as the lowest possible order (ie, sorted in ascending order).

The replacement must be in-place and use only constant extra memory.

Here are some examples. Inputs are in the left-hand column and its corresponding outputs are in the right-hand column.

1,2,3 → 1,3,2
3,2,1 → 1,2,3
1,1,5 → 1,5,1

-------------------------------------------------------------------------------------------------------------------------


class Solution {
public:
    
    Solution(){
        
        ios_base::sync_with_stdio(false);
        cin.tie(NULL);
        cout.tie(NULL);

    }
    
    void reverse(vector<int>&nums,int i,int j){
        while(i<=j){
            int t = nums[i];
            nums[i] = nums[j];
            nums[j] = t;
            i++;
            j--;
        }
    }
    
    void nextPermutation(vector<int>& nums) {
        int n = nums.size(),i = n-1;
        while(i>0 and nums[i-1] >= nums[i]){
            i--;
        }
        if(i == 0){
            reverse(nums,0,n-1);
            return;
        }
        int minimum = INT_MAX;
        int t = nums[i-1];
        int in = i-1,ind;
        for(;i<n;i++){
            if(nums[i] > t and nums[i]<minimum){
                minimum = nums[i];
                ind = i;
            }
        }
        
       // cout<<ind<<" ";
       
        nums[in] = minimum;
        nums[ind] = t;
        for(i=in+1;i<n-1;i++){
            if(nums[i] > nums[i+1]){
                sort(nums.begin()+in+1,nums.end());
            }   
        }
        
    }
};
