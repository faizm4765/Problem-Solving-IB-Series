/*  Given a collection of intervals, merge all overlapping intervals.

For example:

Given [1,3],[2,6],[8,10],[15,18],

return [1,6],[8,10],[15,18].

Make sure the returned intervals are sorted.

*/

-----------------------------------------------------------------------------------------------------------------------

/**
 * Definition for an interval.
 * struct Interval {
 *     int start;
 *     int end;
 *     Interval() : start(0), end(0) {}
 *     Interval(int s, int e) : start(s), end(e) {}
 * };
 */
 
 bool cmp(Interval a,Interval b){
     return a.start < b.start;
 }
 
 
vector<Interval> Solution::merge(vector<Interval> &A) {
    
    int n = A.size();
    stack<Interval> st;
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
