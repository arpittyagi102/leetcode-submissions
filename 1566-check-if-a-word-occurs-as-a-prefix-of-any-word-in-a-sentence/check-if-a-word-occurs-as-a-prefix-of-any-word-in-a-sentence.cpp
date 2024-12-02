class Solution {
public:
    int isPrefixOfWord(string sentence, string searchWord) {
        int i = -1;
        int count = 0;

        do{
            if((sentence.size()-1) - (i) >= (searchWord.size()) && (sentence.substr(i+1,searchWord.size()) == searchWord)){
                return count+1;
            }
            i = sentence.find(' ',i+1);
            count++;
        } while(i!=string::npos);

        return -1;
    }
};