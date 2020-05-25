/*  A hotel manager has to process N advance bookings of rooms for the next season. His hotel has K rooms. Bookings contain an arrival date and a departure date. He wants to find out whether there are enough rooms in the hotel to satisfy the demand. Write a program that solves this problem in time O(N log N) .

Input:


First list for arrival time of booking.
Second list for departure time of booking.
Third is K which denotes count of rooms.

Output:

A boolean which tells whether its possible to make a booking. 
Return 0/1 for C programs.
O -> No there are not enough rooms for N booking.
1 -> Yes there are enough rooms for N booking.
Example :

Input : 
        Arrivals :   [1 3 5]
        Departures : [2 6 8]
        K : 1

Return : False / 0 

At day = 5, there are 2 guests in the hotel. But I have only one room. 
*/

--------------------------------------------------------------------------------------------------------


bool cmp(pair<int,int> a,pair<int,int> b){
    return a.first <= b.first;
}


bool Solution::hotel(vector<int> &arrive, vector<int> &depart, int k) {
    
    int n = arrive.size(),i;
     if(k>=n)
         return 1;
    vector<pair<int,int> >v;
    
    for(i=0;i<n;i++){
        v.push_back({arrive[i],1});
        v.push_back({depart[i],0});
    }
    int active = 0;
    sort(v.begin(),v.end()); 
  
    for (int i = 0; i < v.size(); i++) { 
  
         
        if (v[i].second == 1) { 
            active++; 
            if(active > k)
                return 0;
        } 
  
        // if a guest departs, decrement 
        // current guests count. 
        else
            active--; 
    } 
  
     
    return 1;
}


















