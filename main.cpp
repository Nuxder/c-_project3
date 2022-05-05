#include "read.cpp"
#include <getopt.h>
#include "translate.cpp"
#include "write_data.cpp"

int main(int argc, char *argv[]) {
    int i;
    int optindex;
    string test;
    string opt_o = "Ausagabe.txt";
    string opt_d;
    string opt_e;

    const struct option longopts[] =
            {
                    {"output", required_argument, nullptr, 'o'},
                    {"encode", required_argument, nullptr, 'e'},
                    {"decode", required_argument, nullptr, 'd'},
                    {"help",   no_argument,       nullptr, 'h'},
                    {"man",   no_argument,       nullptr, 'h'},
            };

    while ((i = getopt_long(argc, argv, "ho:e:d:t:", longopts, &optindex)) >= 0)
        switch (i) {
            case 'h': //help
                cout << "Manual-page für diesen Morse De-/Encoder \n"
                        "Die Übergabeparameter für dieses Tool sind:\n"
                        "-o/-output: Legt den Namen für die Ausgabedatei fest, welcher als Parameter übergeben wird.\n"
                        "Wird dieser Übergabeparameter verwendet, muss er vor dem Aufruf der De-/Enkodierung angegeben werden.\n"
                        "-e/-encode: Ruft die Kodierfunktion de Tools auf, als zusätzlichen Parameter\n"
                        "wird der Name der zu codierenden Funktion benötigt.\n"
                        "-h/-help/-man: Gibt diese Manual-Page aus\n"<< endl;
            case 'o': //output
                opt_o = optarg;
            case 'e': //encode
                
            case 'd': //decode
                write_data(decode(read_data(optarg)));
            case 't': //test
                test = read_data(optarg);
                cout << test << endl;
            default:
                break;
        }
}
