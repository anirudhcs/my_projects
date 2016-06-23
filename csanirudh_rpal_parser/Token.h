/*
* Name: Anirudh S. Canumalla
* UFID: 94894962
*/

/*
*	This is the token class. 
*       Each token has a token type and a corresponding lexeme.
*/

#ifndef TOKEN_H
#define	TOKEN_H

#include <string>

using namespace std;

class Token{
private:
    /*
     * TokenType {"CONSTANTS"(-4), JUST A NAME"(-3), KEYWORD"(-2), IDENTIFIER"(1), "INTEGER"(2), "OPERATOR"(3), "STRING"(4), "DELETE"(5), "("(6), ")"(7), ";"(8), ","(9), "ERROR"(-1), "STOP"(0)};
     * These are the possible tokenTypes.
     */
    int TokenType;
    string lexeme;

public:
    
    /**
     * This is the constructor for the token. This is the only place you can add data to the the token
     * @param type
     * @param content
     */
    Token(int type, string content){
        TokenType = type;
        lexeme = content;
    }
    
    /**
     * Empty paramenter constructor
     */
    Token(){
        TokenType = -1;
        lexeme = "";
    }
    
    /**
     * This returns the type of the token
     * @return the token type
     */
    int getTokenType(){
        return TokenType;
    }
    
    /**
     * the lexeme is returned
     * @return lexeme
     */
    string getLexeme(){
        return lexeme;
    }
    
    /**
     * return the printable format of the token. 
     * Need to edit this as required. 
     * As of now just returns the type of the token + lexme
     * @return 
     */
    string tokenPrinter(){
        string ret, TType;
        TType = TypeString();
        ret = TType + "-" + lexeme;
        return ret;
    }
    
    
    /**
     * This just returns the string of the type
     * @return 
     */
    string TypeString(){
        switch(TokenType){
            case 0: return "STOP";
            case 1: return "ID";
            case 2: return "INT";
            case 3: return "OPERATOR";
            case 4: return "STR";
            case 5: return "DELETE";
            case 6: return "(";
            case 7: return ")";
            case 8: return ";";
            case 9: return ",";
            case -2: return "KEYWORD";
            case -3: return "KEYWORD";
            case -4: return "CONSTANT";
            default: return "ERROR";
        }
    }
    
    void operator= (Token a){
        TokenType = a.getTokenType();
        lexeme = a.getLexeme();
    }
    
    bool operator!= (Token a){
        if(TokenType == a.getTokenType() && lexeme == a.getLexeme()){
            return false;
        }
        else{
            return true;
        }
    }
    
    bool operator== (Token a){
        if(TokenType == a.getTokenType() && lexeme == a.getLexeme()){
            return true;
        }
        else{
            return false;
        }
    }
};

#endif	/* TOKEN_H */

