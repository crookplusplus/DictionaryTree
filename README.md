# Dictionary Tree
This project parses a text file to construct a trie data structure containing the words found within the file. Subsequently, it processes another text file, utilizing the created trie to efficiently determine the number of words for which the searched term serves as a prefix.

## Purpose
The purpose of this project showcase familiarity with object-oriented programing, command line argument parsing, complex data structures, reading files, writing files and the use pointers in C++. 

## Development Environment
- **<u>Operating System:</u>** [Ubuntu 20.04.5 LTS on Windows Subsystem for Linux.](https://ubuntu.com/tutorials/install-ubuntu-on-wsl2-on-windows-10#1-overview)
- **<u>IDE: </u>**[Visual Studio Code (VS Code)](https://code.visualstudio.com/download)
- **<u>Compiler:</u>** [g++ (GNU C++ Compiler)](https://gcc.gnu.org/)
- **<u>C++ Standard:</u>** C++11 (extension in VS Code)
- **<u>Build Tool:</u>** GNU Make 4.2.1 (extension in VS Code)

## Features
 - **<u>Trie Data Structure:</u>** This program implements a Trie (prefix tree) for constructing the dictionary
 - **<u>Pointer Utilization:</u>** The extensive use of pointers in C++ demonstrates memory management and manipulation, illustrating how to work with complex data structures efficiently
 - **<u>File I/O Operations:</u>** - Read Files: Program reads input from two seperate files .txt files for flexibility. - Write Files: Writes a output to a .txt file to evaluate program functionality
 - **<u>Command-Line Argument Parsing:</u>** - The program offers user-friendly command-line interface functionality for building and running the program. Additionally it makes it easy for the user to change the .txt files for the program to use.


## Getting Started
     Later versions of this program rely on POSIX libraries, making the choice of the operating system less significant at this stage. However, as the project progresses with future builds, the importance of the operating system will become more pronounced.

### Prerequisites

    Before you can run this program, make sure you have the following:
    - GNU Make 4.2.1 or newer: required to build using the Makefile and make commands
    - g++ Compiler: The GNU compiler is used to build and run the program. The compiler must support C++11.

### Installation
    Download the following files into the same folder:**
    - 'Makefile' : Used for building the program
    - 'dictionary.h' and 'dictionary.cpp' :Contain implementation for the Trie data structure.
    - 'countprefix.cpp' : Contains main program logic for colunting prefixes
    - 'testfile1.txt' and 'vocabulary.txt' : Sample text files for test the program.
## Usage
    This project is built and operated through the command line interface.
 - Open a terminal window and navigate to the folder that contains the project files. 
 - Run the following command to build the program:
    make ./countprefx
- Run the following command to run the program:
    ./countprefix vocabulary.txt testfile1.txt


