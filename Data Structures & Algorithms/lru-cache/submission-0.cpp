class LRUCache {
public:
    int cap;
    list<pair<int,int>>l;
    unordered_map<int,list<pair<int,int>>::iterator> mp;
    LRUCache(int capacity) {
        cap=capacity;
    }
    
    int get(int key) {
        auto it=mp.find(key);
        if(it==mp.end())
        {
            return -1;
        }
        l.splice(l.begin(),l,it->second);
        return it->second->second;
    }
    
    void put(int key, int value) {
       auto it=mp.find(key);
       if(it!=mp.end())
       {
        it->second->second=value;
        l.splice(l.begin(),l,it->second);
        return;
       }
        if(l.size()==cap)
        {
            int oldkey=l.back().first;
            mp.erase(oldkey);
            l.pop_back();
        }
       l.push_front({key,value});
       mp[key]=l.begin();
    }
};
