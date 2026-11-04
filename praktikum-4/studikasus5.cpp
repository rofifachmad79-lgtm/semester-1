#include <iostream>
#include <string>
using namespace std;

int main () {
    double tmakanan=0, ttransportasi=0, thiburan=0, tlain=0;
    double pmingguan=0, pengeluaran;
    string kategori;

    for (int i = 1;i<=7;i++){
        cout <<"masukkan kategori pengeluaran hari ke-"<< i << "(makanan/transportasi/hiburan/lain-lain)";
        cin >> kategori;
        cout <<"masukkan jumlah pengeluaran hari ke-" << i << ":";
        cin >> pengeluaran;

        pmingguan += pengeluaran;
    
    if (kategori == "makanan") {
        tmakanan += pengeluaran;
    }
    else if (kategori == "transportasi") {
        ttransportasi += pengeluaran;
    }
    else if (kategori == "hiburan") {
        thiburan += pengeluaran;
    }
    else if (kategori == "lain-lain") {
        tlain += pengeluaran;
    }
}
    int pengeluaranterbesar = tmakanan;
    string kategorip = "makanan";
    if (ttransportasi > pengeluaranterbesar){
        pengeluaranterbesar = ttransportasi;
        kategorip = "transportasi";
    }
    if (thiburan > pengeluaranterbesar) {
        pengeluaranterbesar = thiburan;
        kategorip = "hiburan";
    }
    if (tlain > pengeluaranterbesar) {
        pengeluaranterbesar = tlain;
        kategorip = "lain-lain";
    }

    cout <<"total pengeluaran makanan: " << tmakanan << endl;
    cout <<"Total pengeluaran Transportasi: " <<ttransportasi << endl;
    cout <<"Total pengeluaran hiburan: " <<thiburan << endl;
    cout <<"total pengeluaran lain-lain: " <<tlain << endl;
    cout << "total pengeluaran dalam seminggu: " << pmingguan << endl;
    cout <<"pengeluaran terbesar: " << pengeluaranterbesar << " pada kategori: " << kategorip; 
    


    return 0;
}