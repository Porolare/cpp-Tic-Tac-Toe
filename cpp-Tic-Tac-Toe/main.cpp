#include <iostream>
#include <string>
using namespace std;

string Sfeld[3][3] = {
{"[ ]","[ ]","[ ]"},
{"[ ]","[ ]","[ ]"},
{"[ ]","[ ]","[ ]"}
};
int rowP1;
int lneP1;
int rowP2;
int lneP2;
bool gewinncheck1;
bool gewinncheck2;
void win1(){
    if (Sfeld[0][0] == "[X]" && Sfeld[0][1] == "[X]" && Sfeld[0][2] == "[X]"
        || Sfeld[1][0] == "[X]" && Sfeld[1][1] == "[X]" && Sfeld[1][2] == "[X]"
        || Sfeld[2][0] == "[X]" && Sfeld[2][1] == "[X]" && Sfeld[2][2] == "[X]"
        || Sfeld[0][0] == "[X]" && Sfeld[1][0] == "[X]" && Sfeld[2][0] == "[X]"
        || Sfeld[0][1] == "[X]" && Sfeld[1][1] == "[X]" && Sfeld[2][1] == "[X]"
        || Sfeld[0][2] == "[X]" && Sfeld[1][2] == "[X]" && Sfeld[2][2] == "[X]"
        || Sfeld[0][0] == "[X]" && Sfeld[1][1] == "[X]" && Sfeld[2][2] == "[X]"
        || Sfeld[2][0] == "[X]" && Sfeld[1][1] == "[X]" && Sfeld[0][2] == "[X]"
        )
        gewinncheck1 = true;
}
void win2(){
    if (Sfeld[0][0] == "[O]" && Sfeld[0][1] == "[O]" && Sfeld[0][2] == "[O]"
        || Sfeld[1][0] == "[O]" && Sfeld[1][1] == "[O]" && Sfeld[1][2] == "[O]"
        || Sfeld[2][0] == "[O]" && Sfeld[2][1] == "[O]" && Sfeld[2][2] == "[O]"
        || Sfeld[0][0] == "[O]" && Sfeld[1][0] == "[O]" && Sfeld[2][0] == "[O]"
        || Sfeld[0][1] == "[O]" && Sfeld[1][1] == "[O]" && Sfeld[2][1] == "[O]"
        || Sfeld[0][2] == "[O]" && Sfeld[1][2] == "[O]" && Sfeld[2][2] == "[O]"
        || Sfeld[0][0] == "[O]" && Sfeld[1][1] == "[O]" && Sfeld[2][2] == "[O]"
        || Sfeld[2][0] == "[O]" && Sfeld[1][1] == "[O]" && Sfeld[0][2] == "[O]"
        )
        gewinncheck2 = true;
}
void prtSfeld(){
for (int i = 0; i < 3; i++ ){
    for (int j = 0; j < 3; j++){
        cout << Sfeld[i][j];
    }
cout << "\n";
    }}

void trnP1(){
void prtSfeld();
    cout << "Spieler 1 gib die REIHE und SPALTE fuer dein X ein:";
    cin >> rowP1;
    cin >> lneP1;
Sfeld[rowP1-1][lneP1-1]= "[X]";
rowP1=0;
lneP1=0;
}

void trnP2(){
void prtSfeld();
    cout << "Spieler 2 gib die REIHE und SPALTE fuer dein O ein:";
    cin >> rowP2;
    cin >> lneP2;
Sfeld[rowP2-1][lneP2-1]= "[O]";
rowP2=0;
lneP2=0;
}

int main()
{
    cout << "Willkommen zu Tic Tac Toe! \nDas ist das Spielfeld: \n";
prtSfeld();
    cout << "Spieler 1 und Spieler 2 platzieren abwechselnd ihr Symbol. \nDer Erste mit 3 nebeneinander gewinnt." << endl;

while (!gewinncheck1 && !gewinncheck2) {
    trnP1();
    prtSfeld();
    win1();
    if(gewinncheck1){
            cout << "Spieler 1 gewinnt!";
            break;
        return 0;
    }
    trnP2();
    prtSfeld();
    win2();
    if(gewinncheck2){
            cout << "Spieler 2 gewinnt!";
            break;
        return 0;
    }
}
    return 0;
}
