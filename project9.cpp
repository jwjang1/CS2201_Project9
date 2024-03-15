// File name: project9.cpp
// Author: Jungwon Jang
// userid: jangj1
// Email: jungwon.jang@vanderbilt.edu
// Class: CS2201 @ Vanderbilt U.
// Assignment Number: 9
// Description:  provides support for holding a collection of words (in the form of a trie)
// Honor statement: I have not given or received unauthorized aid on this assignment.
// Last Changed: Nov.20

#include <iostream>
#include <string>
#include <stdexcept>
#include "Trie.h"

int main(){

    std::cout << "Testing Trie..." << std::endl;

    Trie myTrie; //testing default constructor

    if(myTrie.wordCount() != 0){ // testing wordCount
        std::cout << "Wrong word count!" << std::endl;
    }

    myTrie.insert("fork"); //testing insert

    if(myTrie.wordCount() != 1){ // testing wordCount
        std::cout << "Wrong word count!" << std::endl;
    }

    if(!myTrie.isWord("fork")){ //testing isWord
        std::cout << "wrong!" << std::endl;
    }
    if(myTrie.isWord("lol")){ //testing isWord
        std::cout << "wrong!" << std::endl;
    }

    if(!myTrie.isPrefix("f")){ //testing isPrefix
        std::cout << "Wrong prefix!" << std::endl;
    }
    if(myTrie.isPrefix("lol")){ //testing isPrefix
        std::cout << "Wrong prefix!" << std::endl;
    }

    myTrie.print();

    myTrie.insert("topsy"); //testing insert
    myTrie.insert("toss"); //testing insert

    if(myTrie.wordCount() != 3){ // testing wordCount
        std::cout << "Wrong word count!" << std::endl;
    }
    if(!myTrie.isWord("toss")){ //testing isWord
        std::cout << "wrong!" << std::endl;
    }
    if(myTrie.isWord("lol")){ //testing isWord
        std::cout << "wrong!" << std::endl;
    }

    if(!myTrie.isPrefix("tos")){ //testing isPrefix
        std::cout << "Wrong prefix!" << std::endl;
    }
    if(myTrie.isPrefix("lol")){ //testing isPrefix
        std::cout << "Wrong prefix!" << std::endl;
    }

    myTrie.print();

    Trie myTrie3; // testing default constructor
    myTrie3.loadFromFile("test");
    myTrie3.print();

    if(myTrie3.wordCount() != 6){ // testing wordCount
        std::cout << "Wrong word count!" << std::endl;
    }

    if(!myTrie3.isWord("topsy")){ //testing isWord
        std::cout << "wrong!" << std::endl;
    }
    if(myTrie3.isWord("lol")){ //testing isWord
        std::cout << "wrong!" << std::endl;
    }

    if(!myTrie3.isPrefix("t")){ //testing isPrefix
        std::cout << "Wrong prefix!" << std::endl;
    }
    if(myTrie3.isPrefix("lol")){ //testing isPrefix
        std::cout << "Wrong prefix!" << std::endl;
    }

}