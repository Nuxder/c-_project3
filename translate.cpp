
#include <iostream>
#include "string"

using namespace std;
struct Knoten{
    string Buchstabe;
    int Ebene;
    Knoten* left;
    Knoten* right;
};

void decode(string Text)
{
    Knoten Ende;
    Knoten* Null = &Ende;
    Knoten H;
    H.Buchstabe="H";
    H.Ebene=3;
    H.left=Null;
    H.right=Null;
    Knoten V;
    V.Buchstabe="V";
    V.Ebene=3;
    V.left=Null;
    V.right=Null;    
    Knoten F;
    F.Buchstabe="F";
    F.Ebene=3;
    F.left=Null;
    F.right=Null;
    Knoten L;
    L.Buchstabe="L";
    L.Ebene=3;
    L.left=Null;
    L.right=Null; 
    Knoten P;
    P.Buchstabe="P";
    P.Ebene=3;
    P.left=Null;
    P.right=Null;
    Knoten J;
    J.Buchstabe="J";
    J.Ebene=3;
    J.left=Null;
    J.right=Null;
    Knoten B;
    B.Buchstabe="B";
    B.Ebene=3;
    B.left=Null;
    B.right=Null;
    Knoten X;
    X.Buchstabe="X";
    X.Ebene=3;
    X.left=Null;
    X.right=Null;
    Knoten C;
    C.Buchstabe="C";
    C.Ebene=3;
    C.left=Null;
    C.right=Null;
    Knoten Y;
    Y.Buchstabe="Y";
    Y.Ebene=3;
    Y.left=Null;
    Y.right=Null;
    Knoten Z;
    Z.Buchstabe="Z";
    Z.Ebene=3;
    Z.left=Null;
    Z.right=Null;
    Knoten Q;
    Q.Buchstabe="Q";
    Q.Ebene=3;
    Q.left=Null;
    Q.right=Null;
    
    
    Knoten S;
    S.Buchstabe="S";
    S.Ebene=2;
    S.left=&H;
    S.right=&V;
    Knoten U;
    U.Buchstabe="U";
    U.Ebene=2;
    U.left=&F;
    U.right=Null;
    Knoten R;
    R.Buchstabe="R";
    R.Ebene=2;
    R.left=&L;
    R.right=Null;
    Knoten W;
    W.Buchstabe="W";
    W.Ebene=2;
    W.left=&P;
    W.right=&J;
    Knoten D;
    D.Buchstabe="D";
    D.Ebene=2;
    D.left=&B;
    D.right=&X;
    Knoten K;
    K.Buchstabe="K";
    K.Ebene=2;
    K.left=&C;
    K.right=&Y;
    Knoten G;
    G.Buchstabe="G";
    G.Ebene=2;
    G.left=&Z;
    G.right=&Q;
    Knoten O;
    O.Buchstabe="O";
    O.Ebene=2;
    O.left=Null;
    O.right=Null;
    
    
    Knoten I;
    I.Buchstabe="I";
    I.Ebene=1;
    I.left=&S;
    I.right=&U;
    Knoten A;
    A.Buchstabe="A";
    A.Ebene=1;
    A.left=&R;
    A.right=&W;
    Knoten N;
    N.Buchstabe="N";
    N.Ebene=1;
    N.left=&D;
    N.right=&K;
    Knoten M;
    M.Buchstabe="M";
    M.Ebene=1;
    M.left=&G;
    M.right=&O;
    
    Knoten E;
    E.Buchstabe="E";
    E.Ebene=0;
    E.left=&I;
    E.right=&A;
    Knoten T;
    T.Buchstabe="T";
    T.Ebene=0;
    T.left=&N;
    T.right=&M;
    Knoten Beginn;
    Beginn.left=&E;
    Beginn.right=&T;
    Knoten Anfang = Beginn;
    char chatText[Text.length()];
    for(int i=0; i<Text.length();i++)
    {
        chatText[i]=Text[i];
    }
    for(int i=0; i<Text.length();i++)
    {
        if(chatText[i]=='.')
        {
            Anfang=*Anfang.left;
        }
        else
        {
            if(chatText[i]=='-')
            {
                Anfang=*Anfang.right;
            }
            else
            {
                if(chatText[i]==' ' && chatText[i+1]==' ')
                {
                cout<< Anfang.Buchstabe;
                cout<<" ";
                Anfang=Beginn;
                }
                else
                {
                    cout<<Anfang.Buchstabe;
                    Anfang=Beginn;
                }
            }
        }
        
    }
    cout <<Anfang.Buchstabe;
    
}
int main()
{   
    string test = "-- .- .-..  ... -.-. .... .- ..- . -.  --- -...  -.. .- ...  ..-. ..- -. -.- - .. --- -. .. . .-. -";
    decode(test);
    return 0;
}

