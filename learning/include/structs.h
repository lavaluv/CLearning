#ifndef __STRUCTS__
    #include <stdlib.h>
    #include <stdio.h>
    #define __STRUCTS__
    #define PNODE_TYPE int
    #define BINARY_TREE_TYPE char
    #define STACK_TYPE int
    #define MAP_KEY_TYPE char
    #define MAP_VALUE_TYPE int
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
        char var;
        struct binaryTree *right;
        struct binaryTree *left;
    }BTree;
    BTree *getBinaryTreeFrontOutput(char *mid,char *rear,int left,int right,int rearLen);
    void printBinaryTreeFrontOutput(BTree *tree);

    typedef struct stack{
        int len;
        int maxLen;
        STACK_TYPE *var;
    }STACK;
    STACK *createStack(int len, STACK *stack);
    unsigned char push(STACK_TYPE in, STACK *stack);
    STACK_TYPE pop(STACK *stack);
    STACK_TYPE getTop(STACK * stack);
    void deleteStack(STACK *stack);
    typedef struct map{

    }MAP;
#endif