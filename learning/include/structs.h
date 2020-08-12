#ifndef __STRUCTS__
    #include <stdlib.h>
    #include <stdio.h>
    #define __STRUCTS__
    #define PNODE_TYPE int
    #define BINARY_TREE_TYPE char
    struct pNode{
        PNODE_TYPE value;
        struct pNode * next;
    };
    struct pTwinNode{
        PNODE_TYPE value;
        struct pTwinNode * next;
        struct pTwinNode * prev;
    };
    int addPNode(PNODE_TYPE in,struct pNode *node);
    void printPNode(struct pNode *in);
    typedef struct binaryTree{
        struct binaryTree *right;
        struct binaryTree *left;
        char var;
    }BTree;
    BTree *getBinaryTreeFrontOutput(char *,char *,int,int,int);
    void printBinaryTreeFrontOutput(BTree *);
#endif