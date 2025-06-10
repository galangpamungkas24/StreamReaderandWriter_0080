 #include <fstream>
#include <iostream>
#include <string>
using namespace std;

int main(){


    //operasi file dalam mode nulis.
    ofstream outfile;
    //menunjuk ke sebuah nama file untuk membuka
    outfile.open("contohfile.txt");

    cout << ">= Menulis file, \'q\' untuk keluar" << endl;

//unlimited loop untuk menulis
    while (true){
        cout << "-";
        //mendapatakan setiap karakter dalam satu baris
        getline(cin, baris);
        //loop akan berhenti jika anda memasukkan karakter q
        if (baris == "q") break;
        // menulis dan memasukan nilai dari 'baris' ke  dalam file
        outfile << baris << endl;
    }
    //selesai dalam menulis sekarang tutup filenya
    outfile.close(); 

    //operasi file dalam mode membaca
    ifstream infile;
    //menunjuk ke sebuah file untuk membuka
    infile.open("contohfile.txt");

    cout << endl << ">= Membuka dan membaca file" << endl;
    // jika file ada maka
    if (infile.is_open())
    {
        //melakukan perulangan setiap baris
        while (getline(infile,baris))
        {
            //dan tampilka disini
            cout << baris << '\n';
        }
        //tutup file tersebut setelah selesai
        infile.close();
    }
    //jika tidak ditemukan file maka akan menampilkan ini
    else cout << "unable to open file";
    return 0;
}












































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