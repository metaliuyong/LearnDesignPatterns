//
// Created by 刘勇 on 2021/2/2.
//

#ifndef COMPISITEDESIGNPATTERN_CHILDNODE_H
#define COMPISITEDESIGNPATTERN_CHILDNODE_H

#include "Node.h"
#include <list>

class ChildNode : public Node{
public:
    std::list<Node*> childNodes;
public:
    void printInform() override;
    void addChildNode(Node* childNode);
    void removeChildNode(Node* childNode);
};


#endif //COMPISITEDESIGNPATTERN_CHILDNODE_H
