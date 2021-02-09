//
// Created by 刘勇 on 2021/2/2.
//

#include "RootNode.h"
#include <iostream>

void RootNode::printInform() {
    std::cout << "I am a Root Node." << std::endl;
    for(Node* pChildNode : childNodes){
        pChildNode->printInform();
    }
}

void RootNode::addChildNode(Node* childNode){
    childNodes.push_back(childNode);
}

void RootNode::removeChildNode(Node* childNode){
    childNodes.remove(childNode);
}

void RootNode::test(){

}