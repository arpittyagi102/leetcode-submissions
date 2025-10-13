class MyHashSet {
public:
    vector<bool> mySet;
    MyHashSet() {
        mySet = vector<bool>(1000001, false);
    }
    
    void add(int key) {
        mySet[key] = true;
    }
    
    void remove(int key) {
        mySet[key] = false;
    }
    
    bool contains(int key) {
        return mySet[key];
    }
};

/**
 * Your MyHashSet object will be instantiated and called as such:
 * MyHashSet* obj = new MyHashSet();
 * obj->add(key);
 * obj->remove(key);
 * bool param_3 = obj->contains(key);
 */