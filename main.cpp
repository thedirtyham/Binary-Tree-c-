//
//  main.cpp
//  Homework 8
//
//  Created by Stephan on 12/7/14.
//  Copyright (c) 2014 cst 238. All rights reserved.
//

#include <iostream>
#include "BST.h"

int main(int argc, const char * argv[]) {
    BST <double> tree;
    for (int i = 0; i < 10; i++) {
        tree.insert(i);
    }
    std::cout << tree.numLeaves();
    return 0;
}
