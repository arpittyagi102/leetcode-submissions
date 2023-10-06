class Solution {
public:
    int integerBreak(int n) {
        
        int max=0;
        for(int i=1;i<n;i++){
            vector<int>res;
            int quo=(n/i)-1;
            if(n/i==1 || n%i>1)
                quo=n/i;
            int rem=n-(quo*i);
            cout<<"n is "<<n<<" i is "<<i<<" quo is "<<quo<<" rem is "<<rem<<endl;

            for(int j=0;j<quo;j++)
                res.push_back(i);

            res.push_back(rem);
            int mul=1;
            for(int j=0;j<res.size();j++){
                mul=mul*res[j];
            }
            if(mul>max)
                max=mul;
        }
        return max;
        
    }
};