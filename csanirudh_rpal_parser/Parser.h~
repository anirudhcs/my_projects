/*
* Name: Anirudh S. Canumalla
* UFID: 94894962
*/

/*
 *	This is the parser function.
 *      This is expected to repeatedly call the lexer, get the tokens and work on them
*/

#ifndef PARSER_H
#define	PARSER_H

#include "Token.h"
#include "LexicalAnalyzer.h"
#include "Stack.h"
#include "TreeNode.h"



class Parser{
private:
    Token NT;
    Stack s;
    Input inp;
    
public:
    /**
     * The construcot to set the input
     * @param inp
     */
    Parser(Input &i){
        inp = i;
    }
    
    /**
     * 
     * @param t the token to compare
     */
    void ReadNext(Token t){
        int currentType;
        if(t != NT){
            cout<<"Token Mismatch. Expected: "<<t.tokenPrinter()<<"... But got: "<<NT.tokenPrinter()<<endl;
            exit(0);
        }
        currentType = t.getTokenType();
        if(currentType == 1 || currentType == 2 || currentType == 4){
            BuildTree(t,0);
        }
        
        NT = getNextValidToken();
    }
    
    /**
     * This builds a tree with the root as the token input and the count number of children.
     * This then pushes the result onto the stack.
     * The count number of children are obtained from popping.
     * Whatever you want the node to be named, pass that as the Token.
     * In such a case put the TokenType to be -3 and the lexeme to be the name
     * @param t
     * @param count
     */
    void BuildTree(Token t, int count){
        Stack temp;
        for(int i = 0;i<count;i++){
            temp.push(s.pop());
        }
        string name,content;
        int tType = t.getTokenType();
        if(tType == 1 || tType == 2 || tType == 4){
            name = t.TypeString();
            content = t.getLexeme();
        }
        else if(tType == -4){
            name = t.getLexeme();
            content = "constant";
        }
        else{
            name = t.getLexeme();
            content = "";
        }
        TreeNode* temp1 = new TreeNode(name,content);
        for(int i = 0;i<count;i++){
            temp1->insertChild(temp.pop());
        }
        s.push(temp1);
        
    }
    
    /**
     * This takes the input program and returns the AST
     * @param inp
     * @return the root node of the AST  
     */
    TreeNode* parseFunction(){
        TreeNode* head = 0;
        NT = getNextValidToken();
        /*
         * Here the first non-terminal is called with the stack and the inp as the arguments.
         * The non-terminal function in turn makes a succession of calls and the stack is populated.
         * At the end, when the call is returned only one node is present at the top of the stack and that is 
         * expected to be the entire tree.
         * This is then returned to the main function that is turn decides whether to print it.
         */
        /*
         * Error Detection: Too early return?
         *                  At each point check or both??
         */
        E();
        //In case any error detection is necessary
        head = s.pop();
        return head;
    }

    /**
     * This returns the next token ignoring the deletes
     * @param inp
     * @return next valid token
     */
    Token getNextValidToken(){
        Token ret;
        ret = getNextToken(inp);
        while(ret.getTokenType() == 5){
            ret = getNextToken(inp);
        }
        //cout<<"the next token:"<<ret.tokenPrinter()<<endl;
        return ret;
    }
    
    /*
     *  From here the functions for each non terminal will start
     */
    
    void E(){//cout<<".........Entering E()...stack size:"<<s.getSize()<<"\n";
        string nextTok;
        int childCount;
        
        nextTok = NT.getLexeme();
        Token* temp = new Token(-2,"in");
        if(nextTok == "let"){
            ReadNext(NT);
            D();
            delete temp;
            temp = new Token(-2,"in");
            ReadNext(*temp);
            E();
            delete temp;
            temp = new Token(-3,"let");
            BuildTree(*temp,2);
        }
        else if(nextTok == "fn"){
            ReadNext(NT);
            childCount = 0;
            do{
                Vb();
                childCount++;
            }while(NT.getTokenType() == 1 || NT.getTokenType() == 6);
            
            delete temp;
            temp = new Token(3,".");
            ReadNext(*temp);
            E();
            delete temp;
            temp = new Token(-3,"lambda");
            BuildTree(*temp,childCount + 1);
        }
        else{
            Ew();
        }
    }
    
    void Ew(){//cout<<".........Entering Ew()...stack size:"<<s.getSize()<<"\n";
        string nextTok;
        
        T();
        nextTok = NT.getLexeme();
        if(nextTok == "where"){
            Token* temp = new Token(-2,"where");
            ReadNext(*temp);
            Dr();
            delete temp;
            temp = new Token(-3,"where");
            BuildTree(*temp,2);
        }
    }
    
    void T(){//cout<<".........Entering T()...stack size:"<<s.getSize()<<"\n";
        string nextTok;
        int childCount;
        
        Ta();
        nextTok = NT.getLexeme();
        childCount = 1;
        Token* temp = new Token(9,",");
        while(nextTok == ","){
            ReadNext(*temp);
            Ta();
            childCount++;
            nextTok = NT.getLexeme();
        }
        delete temp;
        if(childCount > 1){
            temp = new Token(-3,"tau");
            BuildTree(*temp,childCount);
        }
    }
    
    void Ta(){//cout<<".........Entering Ta()...stack size:"<<s.getSize()<<"\n";
        string nextTok;
        
        Tc();
        nextTok = NT.getLexeme();
        Token* temp = new Token(-2,"aug");
        while(nextTok == "aug"){
            ReadNext(*temp);
            Tc();
            BuildTree(*temp,2);
            nextTok = NT.getLexeme();
        }
    }
    
    void Tc(){//cout<<".........Entering Tc()...stack size:"<<s.getSize()<<"\n";
        string nextTok;
        
        B();
        nextTok = NT.getLexeme();
        Token* temp = new Token(3,"->");
        if(nextTok == "->"){
            ReadNext(*temp);
            Tc();
            delete temp;
            temp = new Token(3,"|");
            ReadNext(*temp);
            Tc();
            delete temp;
            temp = new Token(3, "->");
            BuildTree(*temp,3);
        }
    }
    
    void B(){//cout<<".........Entering B()...stack size:"<<s.getSize()<<"\n";
        string nextTok;
       
        Bt();
        nextTok = NT.getLexeme();
        Token* temp = new Token(-2,"or");
        while(nextTok == "or"){
            ReadNext(*temp);
            Bt();
            BuildTree(*temp,2);
            nextTok = NT.getLexeme();
        }
    }
    
    void Bt(){//cout<<".........Entering Bt()...stack size:"<<s.getSize()<<"\n";
       string nextTok;
        
        Bs();
        nextTok = NT.getLexeme();
        Token* temp = new Token(3,"&");
        while(nextTok == "&"){
            ReadNext(*temp);
            Bs();
            BuildTree(*temp,2);
            nextTok = NT.getLexeme();
        }
    }
    
    void Bs(){//cout<<".........Entering Bs()...stack size:"<<s.getSize()<<"\n";
        string nextTok;
        
        nextTok = NT.getLexeme();
        Token* temp = new Token(-2,"not");
        if(nextTok == "not"){
            ReadNext(*temp);
            Bp();
            BuildTree(*temp,1);
        }
        else{
            Bp();
        }
    }
    
    void Bp(){//cout<<".........Entering Bp()...stack size:"<<s.getSize()<<"\n";
       string nextTok,tokenContent;
       
       tokenContent = "";
       
       A();
       nextTok = NT.getLexeme();
       Token* temp = new Token(-2,nextTok);
       
       if(nextTok == "gr" || nextTok == ">"){
           tokenContent = "gr";
       }
       else if(nextTok == "ge" || nextTok == ">="){
           tokenContent = "ge";
       }
       else if(nextTok == "ls" || nextTok == "<"){
           tokenContent = "ls";
       }
       else if(nextTok == "le" || nextTok == "<="){
           tokenContent = "le";
       }
       else if(nextTok == "eq"){
           tokenContent = "eq";
       }
       else if(nextTok == "ne"){
           tokenContent = "ne";
       }
       
       if(tokenContent != ""){
           ReadNext(*temp);
           A();
           delete temp;
           temp = new Token(-3,tokenContent);
           BuildTree(*temp,2);
       }
       
    }
    
    void A(){//cout<<".........Entering A()...stack size:"<<s.getSize()<<"\n";
        string nextTok;
        
        nextTok = NT.getLexeme();
        Token* temp = new Token(3,nextTok);
        if(nextTok == "-"){
            ReadNext(*temp);
            At();
            delete temp;
            temp = new Token(-3,"neg");
            BuildTree(*temp,1);
        }
        else if(nextTok == "+"){
            ReadNext(*temp);
            delete temp;
            At();
        }
        else{
            At();
            delete temp;
        }
        
        nextTok = NT.getLexeme();
        temp = new Token(3,nextTok);
        while(nextTok == "-" || nextTok == "+"){
            ReadNext(*temp);
            At();
            BuildTree(*temp,2);
            nextTok = NT.getLexeme();
            delete temp;
            temp = new Token(3,nextTok);
        }
    }
    
    void At(){//cout<<".........Entering At()...stack size:"<<s.getSize()<<"\n";
        string nextTok;
        
        Af();
        nextTok = NT.getLexeme();
        Token* temp = new Token(3,nextTok);
        while(nextTok == "*" || nextTok == "/"){
            ReadNext(*temp);
            Af();
            BuildTree(*temp,2);
            nextTok = NT.getLexeme();
            delete temp;
            temp = new Token(3,nextTok);
        }
    }
    
    void Af(){//cout<<".........Entering Af()...stack size:"<<s.getSize()<<"\n";
        string nextTok;
        
        Ap();
        nextTok = NT.getLexeme();
        Token* temp = new Token(3,"**");
        if(nextTok == "**"){
            ReadNext(*temp);
            Af();
            BuildTree(*temp,2);
        }
    }
    
    void Ap(){//cout<<".........Entering Ap()...stack size:"<<s.getSize()<<"\n";
        string nextTok;
        
        R();
        nextTok = NT.getLexeme();
        Token* temp = new Token(3,nextTok);
        Token* idTemp = new Token(1,"var");
        while(nextTok == "@"){
            ReadNext(*temp);
            //red id
            delete idTemp;
            idTemp = new Token(1,NT.getLexeme());
            ReadNext(*idTemp);
            R();
            BuildTree(*temp,3);
            nextTok = NT.getLexeme();
        }
    }
    
    void R(){//cout<<".........Entering R()...stack size:"<<s.getSize()<<"\n";
        string nextTok;
        int tokType;
        
        Rn();
        nextTok = NT.getLexeme();
        tokType = NT.getTokenType();
        Token* temp = new Token(-3,"gamma");
        while(nextTok == "true" || nextTok == "false" || nextTok == "nil" || nextTok == "(" || nextTok == "dummy" || tokType == 1 || tokType == 2 || tokType == 4){
            Rn();
            BuildTree(*temp, 2);
            nextTok = NT.getLexeme();
            tokType = NT.getTokenType();
        }
    }
    
    void Rn(){//cout<<".........Entering Rn()...stack size:"<<s.getSize()<<"\n";
        string nextTok,theLexeme;
        int tokType;
        
        nextTok = NT.getLexeme();
        tokType = NT.getTokenType();
        theLexeme = nextTok;
        Token* temp = new Token(-2,nextTok);
        switch(tokType){
            case 1:
            case 2:
            case 4:
                ReadNext(NT);
                break;
                
            default:
                if(nextTok == "("){
                    delete temp;
                    temp = new Token(6,"(");
                    ReadNext(*temp);
                    E();
                    delete temp;
                    temp = new Token(7,")");
                    ReadNext(*temp);
                }
                else{
                    ReadNext(*temp);
                    delete temp;
                    temp = new Token(-4,theLexeme);
                    BuildTree(*temp,0);
                }
        }
    }
    
    void D(){//cout<<".........Entering D()...stack size:"<<s.getSize()<<"\n";
        string nextTok;
        
        Da();
        nextTok = NT.getLexeme();
        Token* temp = new Token(-2,"within");
        if(nextTok == "within"){
            ReadNext(*temp);
            D();
            BuildTree(*temp,2);
        }
    }
    
    void Da(){//cout<<".........Entering Da()...stack size:"<<s.getSize()<<"\n";
        string nextTok;
        int childCount;
        
        Dr();
        nextTok = NT.getLexeme();
        childCount = 1;
        Token* temp = new Token(-2,"and");
        while(nextTok == "and"){
            ReadNext(*temp);
            Dr();
            childCount++;
            nextTok = NT.getLexeme();
        }
        if(childCount > 1){
            BuildTree(*temp,childCount);
        }
    }
    
    void Dr(){//cout<<".........Entering Dr()...stack size:"<<s.getSize()<<"\n";
        string nextTok;
        
        nextTok = NT.getLexeme();
        Token* temp = new Token(-2,"rec");
        if(nextTok == "rec"){
            ReadNext(*temp);
            Db();
            BuildTree(*temp,1);
        }
        else{
            Db();
        }
    }
    
    void Db(){//cout<<".........Entering Db()...stack size:"<<s.getSize()<<"\n";
        string nextTok;
        int tokType,childCount;
        
        nextTok = NT.getLexeme();
        tokType = NT.getTokenType();
        Token* temp = new Token(-2,nextTok);
        if(nextTok == "("){
            delete temp;
            temp = new Token(6,"(");
            ReadNext(*temp);
            D();
            delete temp;
            temp = new Token(7,")");
            ReadNext(*temp);
        }
        else if(tokType == 1){
            ReadNext(NT);
            childCount = 1;
            if(NT.getLexeme() == "," || NT.getLexeme() == "="){
                //Vl(); - this call replaced by the function
                
                Token* idTemp = new Token(1,NT.getLexeme());
                nextTok = NT.getLexeme();
                Token* temp = new Token(9,",");
                while(nextTok == ","){
                    ReadNext(*temp);
                    delete idTemp;
                    idTemp = new Token(1,NT.getLexeme());
                    ReadNext(*idTemp);
                    childCount++;
                    nextTok = NT.getLexeme();
                }
                if(childCount > 1){
                    BuildTree(*temp,childCount);
                }
                
                delete temp;
                temp = new Token(3,"=");
                ReadNext(*temp);
                E();
                BuildTree(*temp, 2);
            }
            else{
                do{
                    Vb();
                    childCount++;
                }while(NT.getTokenType() == 1 || NT.getTokenType() == 6);
                delete temp;
                temp = new Token(3,"=");
                ReadNext(*temp);
                E();
                delete temp;
                temp = new Token(-3,"function_form");
                BuildTree(*temp,childCount + 1);
            }
            
        }
    }
    
    void Vb(){//cout<<".........Entering Vb()...stack size:"<<s.getSize()<<"\n";
        string nextTok;
        int tokType;
        
        nextTok = NT.getLexeme();
        tokType = NT.getTokenType();
        Token* temp = new Token(6,"(");
        if(tokType == 1){
            ReadNext(NT);
        }
        else{
            ReadNext(*temp);
            delete temp;
            temp = new Token(7,")");
            if(NT.getLexeme() == ")"){
                ReadNext(*temp);
                delete temp;
                temp = new Token(-3, "()");
            }
            else{
                Vl();
                ReadNext(*temp);
            }
        }
    }
    
    void Vl(){//cout<<".........Entering Vl()...stack size:"<<s.getSize()<<"\n";
        string nextTok;
        int tokType,childCount;
        
        Token* idTemp = new Token(1,NT.getLexeme());
        ReadNext(*idTemp);
        childCount = 1;
        nextTok = NT.getLexeme();
        Token* temp = new Token(9,",");
        while(nextTok == ","){
            ReadNext(*temp);
            delete idTemp;
            idTemp = new Token(1,NT.getLexeme());
            ReadNext(*idTemp);
            childCount++;
            nextTok = NT.getLexeme();
        }
        if(childCount > 1){
            BuildTree(*temp,childCount);
        }
    }
    
};


#endif	/* PARSER_H */

