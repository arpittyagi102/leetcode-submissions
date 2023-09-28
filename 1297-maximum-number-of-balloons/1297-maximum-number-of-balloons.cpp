class Solution {
public:
    int maxNumberOfBalloons(string text) {
        vector<int> vec;

        vec.push_back(count(text.begin(),text.end(),'b'));
        vec.push_back(count(text.begin(),text.end(),'a'));
        vec.push_back(count(text.begin(),text.end(),'l')/2);
        vec.push_back(count(text.begin(),text.end(),'o')/2);
        vec.push_back(count(text.begin(),text.end(),'n'));

        int min = vec.front();
        for(int i : vec)
            if(min > i)
                min = i;      

        return min;
    }
};