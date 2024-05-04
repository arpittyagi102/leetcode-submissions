class Solution {
public:
    int numRescueBoats(vector<int>& people, int limit) {
        int ans = 0;
        int left = 0;
        int right = people.size() - 1;

        sort(people.begin(), people.end());

        while(right >= left){
            if(people[left] + people[right] <= limit){
                left++;
                right--;
            } else {
                right--;
            }
            ans++;
        }

        return ans;
    }
};