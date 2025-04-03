#include <bits/stdc++.h>
using namespace std;

class LRUCache {
public:
    unordered_map<int , int> m;
    unordered_map<int , list<int>::iterator> address;
    list<int> l;
    int cap;
    int siz;

    LRUCache(int capacity) {
        cap = capacity;
        siz = 0;
    }

    int get(int key) {
        if(m.find(key) == m.end())
            return -1;

        list<int>::iterator it = address[key];
        l.erase(it);
        address.erase(key);
        l.push_front(key);
        address[key] = l.begin();
        return m[key];
    }

    void put(int key, int value) {
        if(m.find(key) != m.end()) {
            l.erase(address[key]);
            address.erase(key);
            m.erase(key);
            siz--;
        }

        if(siz == cap) {
            int k = l.back();
            l.pop_back();
            address.erase(k);
            m.erase(k);
            siz--;
        }

        siz++;
        l.push_front(key);
        address[key] = l.begin();
        m[key] = value;
    }
};
