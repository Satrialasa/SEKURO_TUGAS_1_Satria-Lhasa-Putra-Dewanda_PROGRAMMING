#pragma once
#include "bits/stdc++.h"
/*[TODO]: Implementasikanlah class berikut didalam file core_mcu.cpp agar main.cpp dapat dijalankan */
class Core_MCU{
private:
    //[TODO]: Buatlah atribute atribute dalam class ini
public:
    Core_MCU(float cpu_speed,int memory,std::string os,std::string nama,int volt);
    void showSpek();
    ~Core_MCU();
    void nambah_volt(int penambahan_voltase);
    void ganti_os(std::string new_os);
    std::string get_os();
};

