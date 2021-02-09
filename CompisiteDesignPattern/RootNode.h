//
// Created by 刘勇 on 2021/2/2.
//

#ifndef COMPISITEDESIGNPATTERN_ROOTNODE_H
#define COMPISITEDESIGNPATTERN_ROOTNODE_H

#include "Node.h"
#include <list>

class RootNode : public Node{
public:
    std::list<Node*> childNodes;
public:
    void printInform() override;
    void addChildNode(Node* childNode);
    void removeChildNode(Node* childNode);
    virtual void test();
};


#endif //COMPISITEDESIGNPATTERN_ROOTNODE_H
