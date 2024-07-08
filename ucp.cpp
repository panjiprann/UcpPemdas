#include <iostream>
using namespace std;

class MasukUniversitas {
private:
int uangPendaftaran;
int uangSemesterPertama;
int uangBangunan;
int totalBiaya;
public:
 MasukUniversitas() {
 uangPendaftaran = 0;
 
 }
 virtual void namaJalurMasuk() { return; }
 virtual void namaJalurMasuk() 
 {
    cout << "1.SNBT" << endl;
    cout << "2.SNBP" << endl;
    cout <<"keluar" << endl; 
 }
 
 void setUangPendaftaran(int nilai) {
 this->uangPendaftaran = nilai;
 }
 float getUangPendaftaran() {
 return uangPendaftaran;
 }
 // isi setter dan getter variable yang dibutuhkan di bawah ini
};

class SNBT : public MasukUniversitas {
 public: 
 void namaJalurMasuk(){
    cout << "function dari SNBT";
 }
};

class SNBP : public MasukUniversitas {
public:
void namaJalurMasuk(){
    cout << "function";
}
};

int main() {
  MasukUniversitas;

}