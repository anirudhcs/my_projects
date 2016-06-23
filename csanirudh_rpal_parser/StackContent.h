/*
* Name: Anirudh S. Canumalla
* UFID: 94894962
*/
/*
 * This is the format of the content for each entry in the stack
 */

#ifndef STACKCONTENT_H
#define	STACKCONTENT_H

#include "TreeNode.h"

using namespace std;

class StackContent{
private:
    TreeNode* data;
    StackContent* next;
    
public:
    
    /**
     * This is the constructor and this is the only place where you can define the contents of the stack node
     * @param d
     */
    StackContent(TreeNode* d){
        data = d;
        next = 0; //this is equivalent to assigning the null value
    }
    
    /**
     * The data i.e the TreeNode pointer contained inside here is returned
     * @return 
     */
    TreeNode* getData(){
        return data;
    }
    
    /**
     * The next pointer is returned
     * @return 
     */
    StackContent* getNext(){
        return next;
    }
    
    
    /**
     * The next is set to the argument that has been supplied
     * @param s
     */
    void setNext(StackContent* s){
        next = s;
    }
};

#endif	/* STACKCONTENT_H */

