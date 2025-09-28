#include <iostream>
#include <algorithm>
using namespace std;

int main()
{
    string kategori;
    cout << "Masukkan Kategori Buku: ";
    cin >> kategori;

    transform(kategori.begin(), kategori.end(), kategori.begin(), ::tolower);
    cout << kategori << endl << endl;
    
    if (kategori == "komputer" || kategori == "sains" || kategori == "ilmu") 
    {
        cout << "000 Komputer, Sains, dan Ilmu" << endl;
        cout << "001 Sains Komputasi" << endl;
        cout << "002 Pemrograman" << endl;
    }
    else if (kategori == "enskilopedia" || kategori == "fakta")
    {
        cout << "010 Ensiklopedia Umum" << endl;
        cout << "011 Ensiklopedia Amerika" << endl;
        cout << "012 Ensiklopedia Jerman" << endl;
    }
    else if (kategori == "berita" || kategori == "majalah")
    {
        cout << "020 Jurnalisme Amerika" << endl;
        cout << "021 Jurnalisme British" << endl;
        cout << "022 Jurnalisme Jerman" << endl;
    }
    else {
        cout << "Kategori tidak ditemukan" << endl;
    }
    
    
    
    return 0;
}
