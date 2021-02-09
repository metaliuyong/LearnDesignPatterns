//
// Created by 刘勇 on 2021/2/2.
//

#ifndef COMPISITEDESIGNPATTERN_LEAFNODE_H
#define COMPISITEDESIGNPATTERN_LEAFNODE_H

#include "Node.h"

class LeafNode : public Node{
public:
    void printInform() override;
};


#endif //COMPISITEDESIGNPATTERN_LEAFNODE_H
