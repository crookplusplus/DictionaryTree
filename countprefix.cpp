/*
*Authored by: Chris Rook
*Red ID: 825835875
*CS480-1001 
* 
*This is the driver source file for the Dictionary Tree.
*/

#include "dictionary.h"
#include <string>
#include <iostream>
#include <fstream>
#include <cstring>
#include <cctype>


int main(int argc, char* argv[]){

    int count = 0; //counts number of prefixes
    struct dictTree *root = makeDictNode(); //creates root node
    std::string textLine;
    const char *delimiters = "\n\r !\"#$%&()*+,./0123456789:;<=>?@[\\]^`{|}~";
    std::ifstream vocabFile(argv[1]);
    std::ifstream textFile(argv[2]);

    if (argc == 3){
        //reads the vocabulary file and builds the tree
        if (vocabFile.is_open())
        {
            while ( vocabFile.good() )
            {
                getline(vocabFile, textLine);
                char* start  = &textLine[0];
                char *word = strtok(start, delimiters); 
                while (word != nullptr) 
                { 
                    //insert each word to the dictionary tree
                    insert(root, word);
                    word = strtok(NULL, delimiters);  
                } 
            }
            vocabFile.close();
        }

        else std::cout << "Unable to open vocabulary file";


        //read text file words, search, count prefix, and output 
        if (textFile.is_open())
        {
            while ( textFile.good() )
            {
                getline(textFile, textLine);
                char* start  = &textLine[0];
                char *word = strtok(start, delimiters); 
                while (word != nullptr) 
                { 
                    if (search(root, word)) {
                        prefixCounter(root, word, count);
                        std::cout<< word << " "<<count<<std::endl;
                        count = 0;
                        }
                    else {
                        prefixCounter(root, word, count);
                        std::cout<<word<<" "<<count<<std::endl;
                        count = 0;
                        }

                    word = strtok(NULL, delimiters);  
                } 
            }
            textFile.close();
        }

        else std::cout << "Unable to open text file";
    }
    else std::cout << "There is an incorrect number of command line arguments."<< std::endl;

    
    return 0;
}