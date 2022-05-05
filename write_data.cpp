#include <iostream>
#include <fstream>

using std::cout; using std::ofstream;
using std::endl; using std::string;

int write_data(string text){
    string filename("Ausgabe.txt");

    FILE *o_file = fopen(filename.c_str(), "w+");
    if (o_file){
        fwrite(text.c_str(), 1, text.size(), o_file);
        cout << "Datei wurde erstellt!" << endl;
    }

}

/*int main(){
    string text("UNSER MORSECODE ADASWBJBDWJKWF         JBAFJABWFBWAJBFJWKAFJWABFWAJBKFWABJFAWJKFAWJKFBWAWFAJK"
                "wdwadwadawdwadwadwadwawdadawawdawdwadawd");
    write_data(text);
}*/