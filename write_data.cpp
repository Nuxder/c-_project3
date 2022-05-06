#include <iostream>
#include <fstream>

using namespace std;

int write_data(const string& text, string name){
    string filename(name);

    FILE *o_file = fopen(filename.c_str(), "w+");
    if (o_file){
        fwrite(text.c_str(), 1, text.size(), o_file);
    }

}

/*int main(){
    string text("UNSER MORSECODE ADASWBJBDWJKWF         JBAFJABWFBWAJBFJWKAFJWABFWAJBKFWABJFAWJKFAWJKFBWAWFAJK"
                "wdwadwadawdwadwadwadwawdadawawdawdwadawd");
    write_data(text);
}*/