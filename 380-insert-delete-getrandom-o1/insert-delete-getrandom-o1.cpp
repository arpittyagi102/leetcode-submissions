class RandomizedSet {
    unordered_set<int> st;
public:
    RandomizedSet() {
        
    }
    
    bool insert(int val) {
        return st.insert(val).second;
    }
    
    bool remove(int val) {
        auto it = st.find(val);
        if(it != st.end()){
            st.erase(it);
            return true;
        } else {
            return false;
        }
    }
    
    int getRandom() {
      auto it = st.begin();
      advance(it,rand()%st.size());
      return *it;
    }
};

/**
 * Your RandomizedSet object will be instantiated and called as such:
 * RandomizedSet* obj = new RandomizedSet();
 * bool param_1 = obj->insert(val);
 * bool param_2 = obj->remove(val);
 * int param_3 = obj->getRandom();
 */