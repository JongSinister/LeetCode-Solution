#include <bits/stdc++.h>
using namespace std;
class Solution {
public:
    int minMovesToSeat(vector<int>& seats, vector<int>& students) {
        int n=seats.size(),ans=0;
        sort(seats.begin(),seats.end());
        sort(students.begin(),students.end());
        for(int i=0;i<n;i++){
            ans+=abs(seats[i]-students[i]);
        }
        return ans;
    }
};