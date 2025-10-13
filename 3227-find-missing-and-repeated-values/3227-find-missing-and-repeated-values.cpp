class Solution {
public:
    vector<int> findMissingAndRepeatedValues(vector<vector<int>>& grid) {
        unordered_set<int> seen;
        int missing;
        int repeated;

        for(vector<int> row: grid)
            for(int num: row)
                if(!seen.insert(num).second)
                    repeated = num;

        for(int i=0; i<grid.size()*grid.size(); i++)
            if(seen.find(i+1) == seen.end())
                missing = i+1;

        return {repeated, missing};
    }
};