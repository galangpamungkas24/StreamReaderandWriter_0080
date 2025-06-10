 #include <iostream>
using namespace std;

int main(){
    try {
        cout << "selamat belajar di Ti umy" << endl;
        throw 0,5; //melempar sebuah interger maka
        cout << "pernyataan tidak akan di eksekusi" << endl;
    }
    catch (int a){
        //blok ini akan di eksekusi
        cout << "pengecualian akan di eksekusi" << endl;
    }
    catch (...) {
        /jika selain integer maka blok ini akan di eksekusi/
        cout << "default pengecualian dieksekusi" << endl;
    }
    return 0;
}














































  
    