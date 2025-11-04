#include <iostream>
using namespace std;

int main()
{
    string username, pass, email;
    bool isValid;
    cout << "Masukkan username: ";
    cin >> username;
    for (char ch : username)
    {
        if (ch == toupper(ch))
        {
            isValid = false;
            break;
        }
        
    }
    if (isValid)
    {
        cout << "Masukkan password: ";
        cin >> pass;
        cout << "Masukkan email: ";
        cin >> email;
        cout << "Akun berhasil dibuat" << endl;
    }
    else{
        cout << "Username harus huruf kecil semua" << endl;
    }
    
    

    return 0;
}
