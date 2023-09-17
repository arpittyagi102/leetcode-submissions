class Solution {
public:
    int add(char a,char b){
        return 0;
    }

    string addBinary(string a, string b) {
        int i = a.size()-1;
        int j = b.size()-1;
        string res = "";
        char carry = '0';
        char temp = '0';

        /*if(j > i){
            string temp = a;
            a = b;
            b = temp;
        }*/



        while(i>=0 || j>=0 || carry!='0'){
            cout<< (i>=0?a[i]:'0') <<" + "<< (j>=0?b[j]:'0') <<" + "<<carry<<endl; 
            temp = carry ;
            temp += i>=0 ? a[i] -'0' : 0;
            temp += j>=0 ? b[j] -'0' : 0;
            carry = '0';

            if(temp > '1'){
                cout<<"temp = "<<temp<<endl;
                carry = '1';
                temp = temp == '2' ? '0' : '1';
                cout<<"carry = "<<carry<<endl;
            }
            res = temp + res;
            cout<<"Now res = "<<res<<endl;

            i--;
            j--;
        }

        cout<<"End : "<<res;

        return res;
    }
};