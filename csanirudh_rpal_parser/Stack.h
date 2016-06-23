/*
* Name: Anirudh S. Canumalla
* UFID: 94894962
*/
/**
 *  This is the implementation of the stack.
 */

#ifndef STACK_H
#define	STACK_H

#include "StackContent.h"

using namespace std;

class Stack{
private:
    StackContent* top;
    int count;
    
public:
    /**
     * The no argument constructor that initializes the stack
     */
    Stack(){
        top = 0;
        count = 0;
    }
    
    /**
     * The push functionality that takes in the pointer to the treeNode 
     * @param t
     */
    void push(TreeNode* t){
        StackContent* temp = new StackContent(t);
        if(count == 0){
            top = temp;
            count++;
        }
        else{
            temp->setNext(top);
            top = temp;
            count++;
        }
        
    }
    
    /**
     * 
     * @return the treeNode contained in the top of the stack 
     */
    TreeNode* pop(){
        TreeNode* temp;
        if(count != 0){
            temp = top->getData();
            top = top->getNext();
            count--;
        }
        else{
            cout<<"Cannot pop an empty stack\n";
            exit(0);
        }
        return temp;
        
    }
    
    StackContent* getTop(){
        return top;
    }
    
    int getSize(){
        return count;
    }
};

#endif	/* STACK_H */

