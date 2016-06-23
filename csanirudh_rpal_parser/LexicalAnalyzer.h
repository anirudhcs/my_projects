/*
* Name: Anirudh S. Canumalla
* UFID: 94894962
*/

/*
 *	This is the Lexical analyzer function that gets the next token
 *      It takes a few subsequent characters and makes a token out of them 
*/

#include <iostream>
#include <algorithm> 
#include <iterator>
#include "Input.h"
#include "Token.h"

using namespace std;

int getCharType(char c);
Token getNextToken(Input &inp);
bool isKeyword(string mTok);

#ifndef LEXICALANALYZER_H
#define	LEXICALANALYZER_H


/**
 * Takes the input program and returns the next token.
 * @param inp
 * @return 
 */
Token getNextToken(Input &inp){
    string tokenContent;
    int tokenType,charType;
    char currentLookup,earlierLookup;
    Token *ret;
    
    tokenContent = "";
    tokenType = -1;
    currentLookup = (char)0;
    earlierLookup = (char)0;
    
    
    if(inp.isInputLeft()){
        currentLookup = inp.peekNextChar();
        charType = getCharType(currentLookup);
        switch(charType){
            /*
             * This the case for either comments (delete) or operators
             */
            case 1:
                currentLookup = inp.getNextChar();
                tokenContent = tokenContent + currentLookup;
                if(inp.isInputLeft()){
                    currentLookup = inp.peekNextChar();
                }
                else{
                    currentLookup = (char)0;
                }
                    
                if(currentLookup == '/'){
                    while((int)currentLookup != 10){
                        currentLookup = inp.getNextChar();
                        tokenContent = tokenContent + currentLookup;
                        if(inp.isInputLeft()){
                            currentLookup = inp.peekNextChar();
                        }
                        else{
                            currentLookup = (char)0;
                        }
                    }
                    tokenType = 5;
                    ret = new Token(tokenType,tokenContent);
                }
                else{
                    while(getCharType(currentLookup) == 1){
                        currentLookup = inp.getNextChar();
                        tokenContent = tokenContent + currentLookup;
                        if(inp.isInputLeft()){
                            currentLookup = inp.peekNextChar();
                        }
                        else{
                            currentLookup = (char)0;
                        }
                    }
                    tokenType = 3;
                    ret = new Token(tokenType,tokenContent);
                }
                break;
             
            /*
             * This the case for Integers
             */    
            case 2:
                currentLookup = inp.getNextChar();
                tokenContent = tokenContent + currentLookup;
                if(inp.isInputLeft()){
                    currentLookup = inp.peekNextChar();
                }
                else{
                    currentLookup = (char)0;
                }
                while(getCharType(currentLookup) == 2){
                    currentLookup = inp.getNextChar();
                    tokenContent = tokenContent + currentLookup;
                    if(inp.isInputLeft()){
                        currentLookup = inp.peekNextChar();
                    }
                    else{
                        currentLookup = (char)0;
                    }
                }
                tokenType = 2;
                ret = new Token(tokenType,tokenContent);
                break;
                
            /*
             * This the case for Identifiers
             */
            case 3:
                currentLookup = inp.getNextChar();
                tokenContent = tokenContent + currentLookup;
                if(inp.isInputLeft()){
                    currentLookup = inp.peekNextChar();
                }
                else{
                    currentLookup = (char)0;
                }
                charType = getCharType(currentLookup);
                while(charType == 2 || charType == 3 || currentLookup == '_'){
                    currentLookup = inp.getNextChar();
                    tokenContent = tokenContent + currentLookup;
                    if(inp.isInputLeft()){
                        currentLookup = inp.peekNextChar();
                    }
                    else{
                        currentLookup = (char)0;
                    }
                    charType = getCharType(currentLookup);
                }
                if(isKeyword(tokenContent)){
                    tokenType = -2;
                }
                else{
                    tokenType = 1;
                }
                ret = new Token(tokenType,tokenContent);
                break;
                
            
            /*
             * This the case for punctuations
             */ 
            case 4:
                currentLookup = inp.getNextChar();
                tokenContent = tokenContent + currentLookup;
                switch(currentLookup){
                    case '(':
                        tokenType = 6;
                        break; 
                        
                    case ')':
                        tokenType = 7;
                        break; 
                        
                    case ';':
                        tokenType = 8;
                        break;
                        
                    case ',':
                        tokenType = 9;
                        break;
                }
                ret = new Token(tokenType,tokenContent);
                break;
                
            /*
             * This the case for strings
             */ 
            case 5:
                currentLookup = inp.getNextChar();
                tokenContent = tokenContent + currentLookup;
                earlierLookup = currentLookup;
                if(inp.isInputLeft()){
                    currentLookup = inp.peekNextChar();
                }
                else{
                    currentLookup = (char)0;
                }
                while(1){
                    if(currentLookup == '\''){
                        if(earlierLookup != '\\'){
                            currentLookup = inp.getNextChar();
                            tokenContent = tokenContent + currentLookup;
                            break;
                        }
                    }
                    currentLookup = inp.getNextChar();
                    tokenContent = tokenContent + currentLookup;
                    earlierLookup = currentLookup;
                    if(inp.isInputLeft()){
                        currentLookup = inp.peekNextChar();
                    }
                    else{
                        currentLookup = (char)0;
                    }
                }
                tokenType = 4;
                ret = new Token(tokenType,tokenContent);
                break;
                
            
            /*
             * This the case for spaces
             */ 
            case 6:
                currentLookup = inp.getNextChar();
                tokenContent = tokenContent + currentLookup;
                if(inp.isInputLeft()){
                    currentLookup = inp.peekNextChar();
                }
                else{
                    currentLookup = (char)0;
                }
                while(getCharType(currentLookup) == 6){
                    currentLookup = inp.getNextChar();
                    tokenContent = tokenContent + currentLookup;
                    if(inp.isInputLeft()){
                        currentLookup = inp.peekNextChar();
                    }
                    else{
                        currentLookup = (char)0;
                    }
                }
                tokenType = 5;
                ret = new Token(tokenType,tokenContent);
                break;
                
            default:
                cout<<"undefined character: "<<currentLookup<<endl;
                exit(0);
                break;
        }
    }
    else{
        ret = new Token(0,tokenContent);
    }
    
    return *ret;
    
}

/**
 * gets the type of the character that is passed to it
 * error = 0
 * operator-symbol = 1
 * digit = 2
 * Letter = 3
 * punctuation = 4
 * single quote = 5
 * spaces = 6
 * @param c
 * @return 
 */
int getCharType(char c){
    int retType = 0;
    int asciiOfChar = (int)c;
    char operators[] = {'+' ,'-' ,'*' ,'<' ,'>' ,'&' ,'.' ,'@' ,'/' ,':' ,'=' ,'~' ,'|' ,'!' ,'#' ,'%' ,'^' ,'_' ,'[' ,']' ,'{' ,'}' ,'"' ,'`' ,'?'};
    bool inOprArray;
    inOprArray = false;
    
    char* end = operators + sizeof(operators) / sizeof(operators[0]);            
    char* position = std::find(operators, end, c);
    inOprArray = position != end;
    
    if(inOprArray){
        retType = 1;
    }
    else if(asciiOfChar >=48 && asciiOfChar <= 57){
        retType = 2;
    }
    else if(asciiOfChar >=65 && asciiOfChar <= 90){
        retType =  3;
    }
    else if(asciiOfChar >=97 && asciiOfChar <= 122){
        retType =  3;
    }
    else if(c == '('|| c == ')' || c == ';' || c == ','){
        retType = 4;
    }
    else if(c == '\''){
        retType = 5;
    }
    else if(asciiOfChar == 32 || asciiOfChar == 10 || asciiOfChar == 9){
        retType = 6;
    }
    return retType;
}


/**
 * Checks if a token is a keyword
 * @param mTok
 * @return true if token is a keyword
 */
bool isKeyword(string mTok)
{
    string keys[] = { "let", "fn", "in", ".", "where",
            ",", "aug", "->", "|",
            "or", "&", "not", "gr", ">", "ge", ">=", "ls", "<", "le", "<=", "eq", "ne",
            "+", "-", "*", "/", "**", "@",
            "true", "false", "nil", "(", ")", "dummy",
            "within", "and", "rec", "=" };

    for (int i = 0; i < 38; i++) {
            if (keys[i] == mTok)
                return true;
    }
    return false;
} 

#endif	/* LEXICALANALYZER_H */

