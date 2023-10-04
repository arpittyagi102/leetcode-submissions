class MyHashMap {
private:
    vector<vector<pair<int, int>>> buckets;
    const int size = 1000; // Choose an appropriate size for the hash table

    int hash(int key) {
        return key % size;
    }

public:
    MyHashMap() {
        buckets.resize(size);
    }

    void put(int key, int value) {
        int index = hash(key);
        for (auto &pair : buckets[index]) {
            if (pair.first == key) {
                pair.second = value; // Update value if key already exists
                return;
            }
        }
        buckets[index].emplace_back(key, value);
    }

    int get(int key) {
        int index = hash(key);
        for (const auto &pair : buckets[index]) {
            if (pair.first == key) {
                return pair.second;
            }
        }
        return -1;
    }

    void remove(int key) {
        int index = hash(key);
        auto &bucket = buckets[index];
        for (auto it = bucket.begin(); it != bucket.end(); ++it) {
            if (it->first == key) {
                bucket.erase(it); // Remove the key-value pair if found
                return;
            }
        }
    }
};


/**
 * Your MyHashMap object will be instantiated and called as such:
 * MyHashMap* obj = new MyHashMap();
 * obj->put(key,value);
 * int param_2 = obj->get(key);
 * obj->remove(key);
 */