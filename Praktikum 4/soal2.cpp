#include <iostream>
using namespace std;

int main() {
    const int SIZE = 7;
    int bilangan[SIZE];
    
    cout << "Masukkan 7 bilangan:" << endl;
    
    // Input 7 bilangan
    for (int i = 0; i < SIZE; i++) {
        cout << "Bilangan " << (i + 1) << ": ";
        cin >> bilangan[i];
    }
    
    // Tampilkan urutan asli
    cout << "\nUrutan asli: ";
    for (int i = 0; i < SIZE; i++) {
        cout << bilangan[i];
        if (i < SIZE - 1) cout << " ";
    }
    
    // Tampilkan urutan terbalik
    cout << "\nUrutan terbalik: ";
    for (int i = SIZE - 1; i >= 0; i--) {
        cout << bilangan[i];
        if (i > 0) cout << " ";
    }
    cout << endl;
    
    return 0;
}