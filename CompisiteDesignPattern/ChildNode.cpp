//
// Created by 刘勇 on 2021/2/2.
//

#include "ChildNode.h"
#include <iostream>

void ChildNode::printInform(){
    std::cout << "I am a child node" << std::endl;
    for(Node* pChildNode : childNodes){
        pChildNode->printInform();
    }
}

void ChildNode::addChildNode(Node* childNode){
    childNodes.push_back(childNode);
}

void ChildNode::removeChildNode(Node* childNode){
    childNodes.remove(childNode);
}