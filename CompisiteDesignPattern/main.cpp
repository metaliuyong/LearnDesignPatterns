#include <iostream>
#include "Node.h"
#include "RootNode.h"
#include "ChildNode.h"
#include "LeafNode.h"

int main() {
//    Node *root = new RootNode;
//    Node *childNode1 = new ChildNode;
//    Node *childNode2 = new ChildNode;
//    Node *leafNode1 = new LeafNode;
//    Node *leafNode2 = new LeafNode;
//    Node *leafNode3 = new LeafNode;
//    Node *leafNode4 = new LeafNode;

    RootNode *root = new RootNode;
    ChildNode *childNode1 = new ChildNode;
    ChildNode *childNode2 = new ChildNode;
    LeafNode *leafNode1 = new LeafNode;
    LeafNode *leafNode2 = new LeafNode;
    LeafNode *leafNode3 = new LeafNode;
    LeafNode *leafNode4 = new LeafNode;

    root->addChildNode(childNode1);
    root->addChildNode(childNode2);
    childNode1->addChildNode(leafNode1);
    childNode1->addChildNode(leafNode2);
    childNode2->addChildNode(leafNode3);
    childNode2->addChildNode(leafNode4);

    root->printInform();

    return 0;
}
