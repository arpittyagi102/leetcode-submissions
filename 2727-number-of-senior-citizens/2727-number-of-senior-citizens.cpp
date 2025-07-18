class Solution {
public:
    int countSeniors(vector<string>& details) {
        int seniors = 0;

        for( string detail : details ){
            int age = stoi( detail.substr(11,2) );

            if(age > 60){
                seniors++;
            }
        }

        return seniors;
    }
};