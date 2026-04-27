//Buatlah sebuah program berisi 2 class dimana terdapat class layang-layang, belah ketupat'
//Di setiap class nya berisikan luas dan keliling serta input dan output.
//Setiap variable memiliki akses privat, BangunDatar belah ketupat merupakan friend function keliling dari layang-layang, dan
//Semua class hanya dapat diakses menggunakan object.

#include <iostream>
#include <cmath>

using namespace std;

class BelahKetupat;

class LayangLayang {
    private:
    double d1, d2; // diagonal
    double s1, s2; // sisi

    public:
    double hitungLuas() {
        return 0.5 * d1 * d2;
    }
    
    void inputData() {
        cout << "Input Layang-Layang\n";
        cout << "Diagonal 1 : "; cin >> d1;
        cout << "Diagonal 2 : "; cin >> d2;
        cout << "Sisi 1     : "; cin >> s1;
        cout << "Sisi 2     : "; cin >> s2;
    }
        friend void tampilkanKeliling(LayangLayang &l);
};

class BelahKetupat {
    private:
    double d1, d2; // diagonal
    double sisi;

    public:
    void inputData() {
        cout << "\nInput Belah Ketupat\n";
        cout << "Diagonal 1 : "; cin >> d1;
        cout << "Diagonal 2 : "; cin >> d2;
        cout << "Sisi       : "; cin >> sisi;
    }
    double hitungLuas() {
        return 0.5 * d1 * d2;
    }

    double hitungKeliling() {
        return 4 * sisi;
    }
};

void tampilkanKeliling(LayangLayang &l)
{
    cout << "Keliling Layang-Layang : " << 2 * (l.s1 + l.s2) << endl;
}

int main() {
    LayangLayang ObjectLayang;
    BelahKetupat ObjectBelah;

    ObjectLayang.inputData();
    ObjectBelah.inputData();

    cout << "\n--- Hasil luas ---" << endl;
    cout << "Luas Layang-Layang     : " << ObjectLayang.hitungLuas() << endl;
    cout << "Luas Belah Ketupat     : " <<ObjectBelah.hitungLuas() <<endl;
    cout << "\n--- Hasil Keliling ---" << endl;
    tampilkanKeliling(ObjectLayang); 
    cout << "Keliling Belah Ketupat : " << ObjectBelah.hitungKeliling() << endl;

    return 0;
}