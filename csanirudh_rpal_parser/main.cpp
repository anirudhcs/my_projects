/*
* Name: Anirudh S. Canumalla
* UFID: 94894962
*/

/*
 * This is the brains of the entire ast writing system
 */

#include <iostream>
#include <cstdlib>
#include "Input.h"
#include "LexicalAnalyzer.h"
#include "Parser.h"

using namespace std;


int main(int argc, char** argv) {
    
    /*
    * This part takes the command line arguments and processes them
    */
    string flag,inputFile;
    if(argc == 3){
            flag = argv[1];
            inputFile = argv[2];
    }
    else{
            inputFile = argv[1];
            flag = "none";
    }
    
    
    static Input inputProgram = Input(inputFile); 
    Parser* p = new Parser(inputProgram);
    string printValue;
    bool isNotEmpty;
    TreeNode* rootAST;
    
    if(inputProgram.getInput() != ""){
    	rootAST = p->parseFunction();
    	isNotEmpty = true;
    }
    

    
    if(flag == "-ast"){
        /*
         * With this condition the entire tree is printed
         */
        if(isNotEmpty){
        	printValue = rootAST->prettyPrint(0);
        }
        else{
        	printValue = "";
        }
        
        cout<<printValue<<endl;
    }
    else if(flag == "-l"){
        /*
         * Here the listing of the input is done
         */
        cout<<inputProgram.getInput()<<endl;
    }
    else{}
    
    return 0;
}

