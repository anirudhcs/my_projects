/*
* Name: Anirudh S. Canumalla
* UFID: 94894962
*/

/*
*	This is the class that acts as the input. 
*       One instance of this class holds the input at all times
*/


#ifndef INPUT_H
#define	INPUT_H

#include <iostream>
#include <string>
#include <fstream>
#include <streambuf>

using namespace std;


class Input{
private:
	
        string theInput; 			// this holds the entire input from the file
	int currentPosition;			// this holds the position until which the input has been read

public:
	
        /**
         * this is the constructor that take in the file name and extract the content of the entire
         * file to the string in question
         * @param content
         */
	Input(string inputFile){
            const char * fileName = inputFile.c_str();
            ifstream ifs(fileName);
            string content( (istreambuf_iterator<char>(ifs) ), (istreambuf_iterator<char>()) );
            theInput = content;
	    currentPosition = 0;
	}
        
        Input(){}

	/**
         * This function gets the next char from the position specified by the variable currentPosition
         * @return the next character
         */	
	char getNextChar(){
		char nextChar;
		nextChar = theInput[currentPosition];
		currentPosition++;
		return nextChar;
	}		

	/**
         * if at all there is a necessity to backtrack this function puts the currentPosition back by one
         */	
	void positionBacktrack(){
		currentPosition--;
	} 

	/**
         * just give a peek at what the next char but does not update the currentPosition.
         * @return the next character without updating the currentPosition
         */
	char peekNextChar(){
		char nextChar;
		nextChar = theInput[currentPosition];
		return nextChar;
	}		

	/**
         * This just return the input
         * @return the entire input
         */ 
	string getInput(){
		return theInput;
	}

	/**
         * This gets the current position
         * @return the current position
         */
	int getPosition(){
		return currentPosition;
	}
        
        /**
         * This tells if the input is still left
         * @return 
         */
        bool isInputLeft(){
            if(currentPosition >=  theInput.length()){
                return false;
            }
            else{
                return true;
            }
        }
        
        void operator= (Input a){
            theInput = a.getInput();
            currentPosition = a.getPosition();
        }
};

#endif	/* INPUT_H */

