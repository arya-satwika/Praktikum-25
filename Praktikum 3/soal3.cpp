#include <iostream>
using namespace std;

int main(){
    int lapis;
    cout << "masukkan brp lapis ";
    cin >> lapis;

    for (int i = 1; i <= lapis; i++)
    {
        for (int spasi = 0; spasi < lapis - i; spasi++){
            cout << " ";
        }
        for (int bintang = 0; bintang < i; bintang++)
        {
            cout << "* ";
        }
        cout << endl;
    }
    

    return 0;
}
