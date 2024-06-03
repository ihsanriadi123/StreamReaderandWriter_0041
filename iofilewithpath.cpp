#include <fstream>
#include <iostream>
#include <string>
using namespace std;

int main() {
    string baris;
	string namafile;

	cout << "masukan nama file : ";
	cin >> namafile;

    //membuka file dalam mode menulis.
	ofstream outfile;
	//menunjuk ke sebuah nama file
	outfile.open(namafile + ".txt" ,ios::out);

    cout << ">= menulis file, \'q\' untuk keluar" << endl;

    //unlimited loop untuk menulis
    while (true) {
        cout << "- ";
        //mendapatkan setiap karakter dalam satu baris
        getline(cin, baris);
        //loop akan berhenti jika anda memasukkan karakter q
        if (baris == "q") {
            break;
        }
        //menulis  dan memasukkan nilai dari 'baris' ke dalamn file
        outfile << baris << endl;
    }

    //selesai dala menulis sekarang tutup filenya
    outfile.close();
   

   //membuka file dalam mode memabaca
   ifstream infile;

   //menunjuk ke sebuah nama file
   infile.open(namafile + ".txt", ios::in);

    cout << endl << ">= membuka dan membaca file " << endl;
    //jika file ada maka
    if (infile.is_open()) 
    {
        //melakukan perulangan setiap baris
        while (getline(infile, baris)) 
        {
            cout << baris << '\n';
        }
        //tutup file tersebut setelah selesai
        infile.close();
    }

    //jika tidak ditemukan file maka akan menampilkan ini
    else cout << "unable to open file";
    return 0;
}
