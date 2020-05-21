/*
Given a set of non-overlapping intervals, insert a new interval into the intervals (merge if necessary).

You may assume that the intervals were initially sorted according to their start times.

Example 1:

Given intervals [1,3],[6,9] insert and merge [2,5] would result in [1,5],[6,9].

Example 2:

Given [1,2],[3,5],[6,7],[8,10],[12,16], insert and merge [4,9] would result in [1,2],[3,10],[12,16].

This is because the new interval [4,9] overlaps with [3,5],[6,7],[8,10].

Make sure the returned intervals are also sorted.

*/


--------------------------------------------------------------------------------------------------------------

bool cmp(Interval a,Interval b){
     return a.start < b.start;
 }
 

vector<Interval> Solution::insert(vector<Interval> &A, Interval newInterval) {
    
    int n = A.size();
    stack<Interval> st;
    A.push_back(newInterval);
    n += 1;
    sort(A.begin(),A.end(),cmp);
    st.push(A[0]);
    for(int i=1;i<n;i++){
        if(A[i].start > st.top().end)
            st.push(A[i]);

        else if(A[i].end > st.top().end){
            st.top().end = A[i].end;
        }
    }
    vector<Interval>v;
    
    while(!st.empty()){
        Interval t = st.top();
        st.pop();
        v.push_back(t);
    }
    
    sort(v.begin(),v.end(),cmp);
    return v;
}
