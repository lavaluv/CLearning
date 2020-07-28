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
int main(int argc, char *argv[]){
    typedef struct pNode * NODE;
    NODE head = (NODE)malloc(sizeof(struct pNode));
    addPNode(6,head);
    addPNode(7,head);
    printPNode(head);
}