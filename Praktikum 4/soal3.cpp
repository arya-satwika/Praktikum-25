#include <iostream>
using namespace std;

int main()
{
    string input;
    bool counted = false;
    cout << "Masukkan sebuah string: ";
    cin >> input;
    char characters[input.length()];
    int frequencies[input.length()] = {0};
    int i = 0;
    int countedLength=0;
    for (char currentChar : input){
        currentChar = tolower(currentChar);
        for (int j=0; j<countedLength; j++){
            char check = characters[j];
            if (currentChar == check){
                counted = true;
                break;
            }
        }
        if (!counted){
            characters[i] = currentChar;
            for (char count : input){
                count = tolower(count);
                if (currentChar == count){
                    frequencies[i]++;
                }
            }
            countedLength++;
            i++;
        }
        counted = false;
    }
    for (int i=0; i<countedLength; i++){
            cout << characters[i]  << " Muncul "<< frequencies[i] << " kali" << endl;
    }
    return 0;
}
