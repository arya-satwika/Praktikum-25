#include <iostream>
using namespace std;

int main()
{
    int input, hasil=0;
    cout << "Masukkan angka: ";
    cin >> input;//898

    if (input > 999)
    {
        cout << "masukkan angka 3 digit" << endl;
    }
        //true          false
    if (input >= 100)
    {
        hasil = input / 100;//898/100 = 8 <- hasil
        input = input%100;  //898%100 = 98 <- input
        
    }
    if (input >=10)
    {
        //input = 98
        hasil = hasil + input/10;//98/10 = 9 + hasil <- 8 
        //8+9
        //      8+9     98%10=8
        hasil = hasil + input%10;
        // hasil = 8+9+8 = 25
    }
    if (hasil >= 10)
    {
        int temp = hasil;
        //      25/10 = 2
        hasil = temp/10;
        hasil = hasil+ temp%10;

    }
    cout << hasil << endl;
    
    
    

    return 0;
}
