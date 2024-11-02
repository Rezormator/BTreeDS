#pragma once

#include "../BTreeNode/BTreeNode.h"

class BTree {
private:
    int t;
    BTreeNode *root;
public:
    explicit BTree(int t);
    ~BTree();
    void insert(int key, const std::string &value);
    void insert(const DataUnit &dataUnit);
    NODISCARD bool contain(int key) const;
    NODISCARD std::string search(int key) const;
    bool remove(const DataUnit &dataUnit);
    bool remove(int key);
    void print();
};
