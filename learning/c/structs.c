#include <stdio.h>
#include <stdlib.h>
#include "structs.h"
/*

*/

int addPNode(PNODE_TYPE in,struct pNode *node){
    struct pNode *newNode = (struct pNode *) malloc(sizeof(struct pNode));
    struct pNode *next = NULL;
    if(newNode != NULL && node != NULL){
        newNode->value = in;
        newNode->next = NULL;
        next = node;
        do
        {
            node = node->next;
            if (node == NULL)
            {
                next->next = newNode;
            }
            next = node;
        } while (next != NULL);
        return 0;
    }
    return -1;
}
void printPNode(struct pNode *in){
    if(in != NULL){
        struct pNode *node = in->next;
        printf("Node value is:");
        while(node != NULL){
            printf("%d ",node->value);
            node = node->next;
        }
        printf("\n");
    }
    else{
        printf("Head node is NULL\n");
    }
}
BTree *getBinaryTreeFrontOutput(char *mid,char *rear,int left,int right,int rearLen){
    int index = -1,i = left,j = rearLen;
    BTree *tree = NULL;
    if (rearLen != 0)
    {
        while(j > 0){
            while(i <= right){
                if (mid[i] == rear[j-1])
                {
                    index = i;
                }
                i++;
            }
            if(index != -1){
                tree = (BTree*)malloc(sizeof(BTree));
                tree->var = rear[j-1];
                if(left < index){
                    tree->left = getBinaryTreeFrontOutput(mid,rear,left,index - 1,rearLen-1);
                }
                if(right > index){
                    tree->right = getBinaryTreeFrontOutput(mid,rear,index + 1,right,rearLen-1);
                }
                break;
            }
            j--;
            i = left;
        }
    }
    else{
        tree = NULL;
    }
    return tree;
}
void printBinaryTreeFrontOutput(BTree *tree){
    if(tree != NULL){
        printf("%c",tree->var);
        printBinaryTreeFrontOutput(tree->left);
        printBinaryTreeFrontOutput(tree->right);
    }
}
STACK *createStack(int len, STACK *stack){
    if(stack == NULL){
        stack = (STACK *)malloc(sizeof(STACK)*len);
        if(stack != NULL){
            stack->len = 0;
            stack->maxLen = len;
            return stack;
        }
        else{
            //ERR
            return NULL;
        }
    }
    else{
        //ERR
        return stack;
    }
}
unsigned char push(STACK_TYPE in, STACK *stack){
    if (stack != NULL){
        if (stack->maxLen > stack->len){
            stack->var[stack->len+1] = in;
            stack->len += 1;
            return 1;
        }
        else {
            //error
            return 0;
        }
    }
    else {
        //error
        return 0;
    }
}
STACK_TYPE pop(STACK *stack){
    if (stack != NULL){
        if (stack->len != 0){
            stack->len -= 1;
            return stack->var[stack->len];
        }
        else {
            //error
            return 0;
        }
    }
    else {
        //error
        return 0;
    }
}