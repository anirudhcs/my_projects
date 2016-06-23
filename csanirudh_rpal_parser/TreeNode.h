/*
* Name: Anirudh S. Canumalla
* UFID: 94894962
*/

/*
 *	This is the Node of the AST
*/

#ifndef TREENODE_H
#define	TREENODE_H

#include <string>

using namespace std;

class TreeNode{
private:
    string name,content;
    TreeNode* child;
    TreeNode* sibling;
    
public:
    /**
     * The 0 argument constructor
     */
    TreeNode(){
        name = "";
        content = "";
        child = NULL;
        sibling = NULL;
    }
    
    /**
     * The constructor that sets the data of the tree node.
     * this is the only place where the contents of the node can be set
     * Via other functions the child and siblings can be modified but this stays constant
     * @param name
     * @param content
     */
    TreeNode(string name,string content){
        this->name = name;
        this->content = content;
        child = NULL;
        sibling = NULL;
    }
    
    /**
     * returns the name of the node
     * @return 
     */
    string getName(){
        return name;
    }
    
    
    /**
     * returns the content of the node
     * @return 
     */
    string getContent(){
        return content;
    }
    
    /**
     * Returns the node that contains all the child nodes
     * @return 
     */
    TreeNode* getChild(){
        return child;
    }
    
    /**
     * Returns the node containing all the sibling nodes from here
     * @return 
     */
    TreeNode* getSibling(){
        return sibling;
    }
    
    /**
     * insert a sibling into the right depth
     * @param s
     */
    void insertSibling(TreeNode* s){
        if(sibling == NULL){
            sibling = s;
        }
        else{
            sibling->insertSibling(s);
        }
    }
    
    /**
     * Insert a child at the right depth
     * @param c
     */
    void insertChild(TreeNode* c){
        if(child == NULL){
            child = c;
        }
        else{
            child->insertSibling(c);
        }
    }
    
    /**
     * This is a temporary implementation. 
     * Needs to be changed
     * @return treenode in a string
     */
    string treePrinter(){
        string ret;
        if(content == ""){
            ret = name;
        }
        else if(content == "constant"){
            ret = "<"+name+">";
        }
        else{
            ret ="<"+ name + ":" + content + ">";  
        }
        
        return ret;
    }
    
    
    /**
     * This is the function for the pretty printing.
     * May need modiications.
     * My guess: This function might not need any modification but the treePrinter may need one
     * @param level 
     * @return returns the  pretty printed tree
     */
    string prettyPrint(int level){
        /*
         * First pretty print the children and then pretty print the siblings
         */
        string ret;
        ret = "";
        for(int i= 0;i<level;i++){
            ret = ret + ".";
        }
        ret = ret + treePrinter();
        if(child != NULL){
            ret = ret + "\n";
            ret = ret + child->prettyPrint(level + 1);
        }
        if(sibling != NULL){
            ret = ret + "\n";
            ret = ret + sibling->prettyPrint(level);
        }
        
        return ret;
    }
    
};

#endif	/* TREENODE_H */

