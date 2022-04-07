#include <iostream>
#include <conio.h>
using namespace std;
 
int main() {
	
	struct tdata{
		float a, b, pilih, hasil;
        char ulang;
	}data;
  
  

  	awal:
  	cout << "PROGRAM CALCULATOR SEDERHANA" << endl;
  	cout << "\n";
  	cout << "1.perkalian\n";
  	cout << "2.pembagian\n";
    cout << "3.penambahan\n";
    cout << "4.pengurangan\n";

  	cout << "pilih operasi (1,2,3,4) :";
  	cin >> data.pilih;

  	cout << endl;
  
  	if(data.pilih == 1){
    cout << "masukan angka a =";
    cin >> data.a;
    cout << "masukan angka b =";
    cin >> data.b;
    data.hasil = data.a * data.b;
    cout << data.a << "x" << data.b << "=" << data.hasil;
    }

    else if(data.pilih == 2){
    cout << "masukan angka a =";
    cin >> data.a;
    cout << "masukan angka b =";
    cin >> data.b;
    data.hasil = data.a / data.b;
    cout << data.a << ":" << data.b << "=" << data.hasil;
    }

    else if(data.pilih == 3){
    cout << "masukan angka a =";
    cin >> data.a;
    cout << "masukan angka b =";
    cin >> data.b;
    data.hasil = data.a + data.b;
    cout << data.a << "+" << data.b << "=" << data.hasil;
    }
   
    else if(data.pilih == 4){
    cout << "masukan angka a =";
    cin >> data.a;
    cout << "masukan angka b =";
    cin >> data.b;
    data.hasil = data.a - data.b;
    cout << data.a << "-" << data.b << "=" << data.hasil;
    }

    else{
    	cout << "maaf pilih sesuai operasi";
    }
  
    cout << "\n\n";
    cout << "apakah anda ingi ulang (y/t) :";
    cin >> data.ulang;
  
    if(data.ulang == 'y'){
    goto awal;
    }
  
    else{
    cout << "terima kasih anda telah keluar";
    }
    getch();
    return 0;
}
