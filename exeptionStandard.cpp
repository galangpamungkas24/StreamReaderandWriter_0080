 #include <iostream>
#include <exception>
//untuk objek exeption yang akan di gunakaan
#include <array>
//untuk objek array yang akan di gunakan
using namespace std;

int main (){
    cout << "Awal program" << endl; //penanda 1
    try {
        array<int,3> data = {1,2,3};
        //pesan array 3interger 3 elemen
        cout<<data.at(5)<<endl;
        //memanggil array elemen ke 5
    }
    catch (exception& e) {
        //penangkap menggunakan objek exception
        cout << e.what() << endl;
        /akan di eksekusi karena array hanya memiliki 3 elemen/
    }
    cout << "Baris program yang terakhir" <<endl;
    /penanda 2: bahwa program berjalantanpa berhenti meskipun terjadi kesalahan/

    return 0;    
}
