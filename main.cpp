#include <iostream>
#include <fstream>
#include <string>

using namespace std;

void countLine(char* pName) {
    ifstream data;
    data.open(pName);
    string s = "";
    int lines = 0;
    while (!data.eof()) {
        getline(data, s);
        lines++;
    }
    cout << lines << " Lines" << endl;
}

void countChar(char* pName) {
    ifstream data;
    data.open(pName);
    string s = "";
    int chars = 0;
    while (!data.eof()) {
        getline(data, s);
        chars += s.length();
    }
    cout << chars << " Characters" << endl;
}

int main(int argc, char** argv) {
    if (argc < 2) {
//        countLine("Ohio University");
//        countChar("Athens");
    } else {
        char* fname = argv[0];
        if (fname != NULL){
            ifstream data;
            data.open(fname);
            
        }
    }
    
}
