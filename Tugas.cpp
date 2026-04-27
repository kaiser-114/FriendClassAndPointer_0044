//Buatlah sebuah program berisi 2 class dimana terdapat class layang-layang, belah ketupat'
//Di setiap class nya berisikan luas dan keliling serta input dan output.
//Setiap variable memiliki akses privat, BangunDatar belah ketupat merupakan friend function keliling dari layang-layang, dan
//Semua class hanya dapat diakses menggunakan object.

#include <iostream>
#include <cmath>

using namespace std;

class BelahKetupat;
class LyanagLayang {
    private:
    //Lengkapi disini

    public:

    double hitungLuas() {
        return 0.5 * d1 * d2;
    }
    //Lengkapi disini
};

class BelahKetupat {
    private:
    //Lengkapi disini

    public:
    void inputData() {
        //Lengkapi disini
    }
    double hitungLuas() {
        return 0.5 * d1 * d2;
    }

    //Lengkapi disini
};

void tampilkankeliling() //Lengkapi disini
{
    //Lengkapi disini
}

int main() {
    //Lengkapi disini

    cout << "\n--- Hasil luas ---" << endl;
    cout << "Luas Layang-Layang     : " << ObjectLayang.hitungLuas() << endl;
    cout << "Luas Belah Ketupat     : " <<ObjectBelah.hitunngLuas() <<endl;

    //Lengkapi disini
}