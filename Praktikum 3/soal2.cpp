#include <iostream>
using namespace std;

int main()
{
    int scoreMartin=0, scoreSore=0;
    string inputMartin, inputSore;
            //false             true
    while (scoreMartin != 2 && scoreSore != 2){
        cout << "Masukkan input Martin: ";
        cin >> inputMartin;
        cout << "Masukkan input Sore: ";
        cin >> inputSore;

        if((inputMartin == "batu" && inputSore == "gunting") || (inputMartin == "kertas" && inputSore == "batu") || (inputMartin == "gunting" && inputSore == "kertas")){
            cout << "martin menang" << endl;
            scoreMartin++;

        } else if ((inputSore == "batu" && inputMartin == "gunting") || (inputSore == "kertas" && inputMartin == "batu") || (inputSore == "gunting" && inputMartin == "kertas")) {
            cout << "sore menang" << endl;
            scoreSore++;
        } else if (inputMartin == inputSore)
        {
            cout << "seri" << endl;
        }
        else{
            cout << "input invalid" << endl;
        }
        cout << "score martin: " << scoreMartin << endl << "score sore: " << scoreSore << endl;
    }
    cout << "game berakhir" << endl;
   

    return 0;
}
