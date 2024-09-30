class CustomStack {
public:
    vector<int> vec;
    int ms;
    CustomStack(int maxSize) {
        ms = maxSize;
    }

    void pr(){
        for(int i: vec){
            cout<<i<<" ";
        }
        cout<<endl;
    }
    
    void push(int x) {
        //pr();
        //cout<<"pushing "<<x<<endl;
        if(vec.size() < ms){
            vec.push_back(x);
        }
    }
    
    int pop() {
        //pr();
        //cout<<"poping "<<endl;
        if(vec.size() > 0){
            int r = vec[vec.size()-1];
            vec.pop_back();
            return r;
        } else {
            return -1;
        }
    }
    
    void increment(int k, int val) {
        //pr();
        for(int i=0; i<k && i<vec.size(); i++){
            vec[i] += val;
        }
        //cout<<"adding "<<val<<" to first "<<k<<" elements\n";
        //pr();
    }
};

/**
 * Your CustomStack object will be instantiated and called as such:
 * CustomStack* obj = new CustomStack(maxSize);
 * obj->push(x);
 * int param_2 = obj->pop();
 * obj->increment(k,val);
 */