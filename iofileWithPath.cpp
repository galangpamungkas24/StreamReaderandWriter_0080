 #include <fstream>
#include <iostream>
#include <string>
using namespace std;

int main(){
    string baris;
    string namaFile;

    cout << "masukan nama file: ";
    cin >> namaFile;

    //operasi file dalam mode nulis.
    ofstream outfile;
    //menunjuk ke sebuah nama file untuk membuka
    outfile.open(namaFile +".txt");

    cout << ">= Menulis file, \'q\' untuk keluar" << endl;
