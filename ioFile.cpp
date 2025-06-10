 int main(){
    string baris;

    //operasi file dalam mode nulis.
    ofstream outfile;
    //menunjuk ke sebuah nama file untuk membuka
    outfile.open("contohfile.txt");

    cout << ">= Menulis file, \'q\' untuk keluar" << endl;
