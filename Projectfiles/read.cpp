#include <string>
#include <iostream>
#include <fstream>

using namespace std;

string read_data(const string& path) {
    string text;
    string line;
    fstream file;
    file.open(path, ios::in);
    while (!file.eof()) {
        getline(file, line);
        if(!line.empty()){
            text += line+" ";
        }
    }
    file.close();
    return text;
}