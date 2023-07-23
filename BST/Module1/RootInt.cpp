#include <bits/stdc++.h>
using namespace std;
template <typename T>
class Node {
public:
    T data;
    vector<Node *> children;

    Node(T data) {
        this->data = data;
    }
   
};