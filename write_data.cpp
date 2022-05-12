#include <iostream>
#include <fstream>

using namespace std;

int write_data(const string& text, string name){
    fstream output_fstream;

    output_fstream.open(name, std::ios_base::out);
    if (!output_fstream.is_open()) {
        cerr << "Failed to open " << name << '\n';
    } else {
        output_fstream << text << endl;
    }

}

/*int main(){
    string text("UNSER MORSECODE ADASWBJBDWJKWF         JBAFJABWFBWAJBFJWKAFJWABFWAJBKFWABJFAWJKFAWJKFBWAWFAJK"
                "wdwadwadawdwadwadwadwawdadawawdawdwadawd");
    write_data(text);
}*/