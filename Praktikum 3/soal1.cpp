#include <iostream>
using namespace std;

int main()
{
    int angka, counter=0,i=1;

    cout << "masukkan angka ";
    cin >> angka;


    while ((i<=angka || counter < 3)){
        if (i % 7 == 0)
        {
            cout << "siuuu" << endl;
            counter++;
        }else if (i %10 == 0)
        {
            cout << "gaksiuuu"<<endl;
        }else if (counter >= 3)
        {
            break;
        }
        else{
            cout << i << endl;
        }
        i++;
    }

    for (i=1; (i<=angka || counter < 3); i++){
        if (i % 7 == 0)
        {
            cout << "siuuu" << endl;
            counter++;
        }else if (i %10 == 0)
        {
            cout << "gaksiuuu"<<endl;
        }else if (counter >= 3)
        {
            break;
        }
        else{
            cout << i << endl;
        }
        
    }
    cout << "monolog" << endl;

    return 0;
}
