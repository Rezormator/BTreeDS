#include "BTree.h"

BTree::BTree(const int t) : t(t), root(nullptr) {
}

BTree::~BTree() {
    delete root;
}

void BTree::insert(const int key, const std::string &value) {
    insert(DataUnit(key, value));
}

void BTree::insert(const DataUnit &dataUnit) {
    if (root == nullptr) {
        root = new BTreeNode(t);
        root->setDataUnit(0, dataUnit);
        root->setN(1);
    }
    else if (root->getN() == 2 * t - 1) {
        const auto newRoot = new BTreeNode(t, false);
        newRoot->setChild(0, root);
        newRoot->splitChild(0, root);

        int i = 0;
        if (newRoot->getDataUnit(0) < dataUnit) {
            i++;
        }
        newRoot->getChild(i)->insertNonFull(dataUnit);
        root = newRoot;
    }
    else {
        root->insertNonFull(dataUnit);
    }
}

bool BTree::contain(const int key) const {
    return root->search(key) == " ";
}

std::string BTree::search(int key) const {
    return root->search(key);
}

bool BTree::remove(const DataUnit &dataUnit) {
    return remove(dataUnit.getKey());
}

bool BTree::remove(const int key) {
    if (this->contain(key)) {
        return false;
    }

    root->remove(key);
    if (root->getN() == 0) {
        if (root->getIsLeaf()) {
            root = nullptr;
        } else {
            root = root->getChild(0);
        }
    }
    return true;
}

void BTree::print() {
    if (root != nullptr) {
        root->printBTree();
    }
}
