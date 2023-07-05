#include <iostream>
using namespace std;
class MataKuliah {
private:
    float presensi;
    float activity;
    float exercise;
    float tugasAkhir;

public:
    MataKuliah() {
        presensi = 0;
        activity = 0;
        exercise = 0;
        tugasAkhir = 0;
    }

 
    virtual float hitungNilaiAkhir() {
        return 0;
    }

    virtual void cekKelulusan() {
        return;
    }

    virtual void input() {
        float nilai;

        cout << "Masukkan Nilai Presensi: ";
        cin >> nilai;
        setP(nilai);

        cout << "Masukkan Nilai Activity: ";
        cin >> nilai;
        setA(nilai);

        cout << "Masukkan Nilai Exercise: ";
        cin >> nilai;
        setE(nilai);

        cout << "Masukkan Nilai Tugas Akhir: ";
        cin >> nilai;
        setUA(nilai);
    }
	void setP(float p) {
		this->presensi = p;
	}
	float getP() {
		return presensi;
	}
	void setA(float a) {
		this->activity = a;
	}
	float getA() {
		return activity;
	}
	void setE(float e) {
		this->exercise = e;
	}
	float getE() {
		return exercise;
	}
	void setUA(float ua) {
		this->tugasAkhir = ua;
	}
	float getUA() {
		return tugasAkhir;
	}

    int Total(int q, int w, int r, int t) {
        return (q + w + r + t) / 4;
    }

    void display() {
        cout << "Nilai Presensi = " << getP() << endl;
        cout << "Nilai Activity = " << getA() << endl;
        cout << "Nilai Exercise = " << getE() << endl;
        cout << "Nilai Tugas Akhir = " << getUA() << endl;
        cout << "Selamat, Anda lulus mata kuliah Pemrograman dengan nilai akhir = " << getUA() << endl;
        cout << "Apakah anda ingin mengulang program ? Y/N " << endl;
    }
};

class Pemrograman : public MataKuliah {

  

};
int main() { 
	Pemrograman MK;
	MK.input();
	MK.display();

	return 0;
}