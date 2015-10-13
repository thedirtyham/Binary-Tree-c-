//
//  BinaryTree.h
//  Homework 8
//
//  Created by Stephan on 12/10/14.
//  Copyright (c) 2014 cst 238. All rights reserved.
//

#ifndef Homework_8_BinaryTree_h
#define Homework_8_BinaryTree_h

template <typename T>
class BTNode {
private:
    T data;
    BTNode *left;
    BTNode *right;
    
public:
    BTNode() { }
    BTNode(T d, BTNode* l = NULL, BTNode *r = NULL) {
        data = d;
        left = l;
        right = r;
    }
    
    const T getData() const { return data; }
    const BTNode *leftChild() const { return left; }
    const BTNode *rightChild() const { return right; }
};

template <typename T>
class BinaryTree {
private:
    BTNode<T> *root;
    
public:
    BinaryTree() { root = NULL; }
    BinaryTree(BTNode<T> *r) { root = r; }
    
    bool isMinHeap() const;
};

template <typename T>
bool BinaryTree<T>::isMinHeap() const {
    // Your code here
    return true;
}

#endif
