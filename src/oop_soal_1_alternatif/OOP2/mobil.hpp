#pragma once
#include "bits/stdc++.h"
using namespace std;

/*[TODO]: Implementasikanlah class berikut didalam file mobil.cpp agar main.cpp dapat dijalankan */
class mobil {
protected: 
    int kapasitas_mesin;
    string name;
    string merk;
    int top_speed;      
    string bahan_bakar; 

public:
    mobil(int kapasitas_mesin, string name, string merk, int top_speed, string bahan_bakar);
    virtual void jalan(int jarak);
    void pamer_mesin();
    virtual void cek_spesifikasi(); 
    virtual ~mobil();
};

class mobil_sport : public mobil {
private:
    bool turbo_aktif;

public:
    mobil_sport(int kapasitas_mesin, string name, string merk, int top_speed, string bahan_bakar);
    void jalan(int jarak) override;
    void cek_spesifikasi() override;
    void aktifkan_turbo();
};