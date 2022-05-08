class RandomizedCollection {
public:
RandomizedCollection() {}
    
    bool insert(int val) {
        auto exists = mmap.find(val);
        map_keys.push_back(val);
        mmap.insert(std::make_pair(val, map_keys.size() - 1));
        return exists == mmap.end();
    }
    
    bool remove(int val) {
        auto it = mmap.find(val);
        if (it == mmap.end()) {
            return false;
        }
        // Erasing from the std::vector is expensive. You could keep a 
        // map<int, std::vector<int>::iterator> to efficiently find an
        // element from the vector. But, erasing will invalidate iterators.
		// Instead keep a vector of removed indices.
        removed_index.insert(it->second);
        mmap.erase(it);
        
        return true;
    }
    
    int getRandom() {
	    // This does not loop forever as we're guaranteed at least a single
		// un-deleted element in the multimap.
        for (;;) {
            const int rand_index = rand() % map_keys.size();
            if (removed_index.count(rand_index)) {
                continue;
            }
            return map_keys[rand_index];
        }
    }
    
    std::multimap<int, int> mmap;
    std::vector<int> map_keys;
    std::unordered_set<int> removed_index;
};

/**
 * Your RandomizedCollection object will be instantiated and called as such:
 * RandomizedCollection* obj = new RandomizedCollection();
 * bool param_1 = obj->insert(val);
 * bool param_2 = obj->remove(val);
 * int param_3 = obj->getRandom();
 */
