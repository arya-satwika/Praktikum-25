#include <iostream>
using namespace std;

int main()
{
    string email, password, passConfirm;
    cout << "Masukkan Email: ";
    cin >> email; 
    cout << "Masukan Password: ";
    cin >> password;// ini123
    cout << "Konfirmasi Password: ";
    cin >> passConfirm; // ini123
    if (password == passConfirm)
    {
        cout << "Konfirmasi Password ke 2: ";
        cin >> passConfirm;
        if (password == passConfirm)
        {
            cout << "Konfirmasi Berhasil...\n";
        }
        else{
            cout << "Konfirmasi kedua salah...\n";
        }
    }
    else{
        cout << "Konfirmasi pertama gagal...\n";
    }

    

    return 0;
}
