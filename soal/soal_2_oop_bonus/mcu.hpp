#pragma once
#include "bits/stdc++.h"

/*[TODO]: Implementasikanlah class berikut didalam file robot.cpp agar main.cpp dapat dijalankan */
class MCU{
//[TODO]: Buatlah atribute atribute dalam class ini
private:
protected:
public:
    MCU(float cpu_speed,int memory,std::string os,std::string name,int volt);
    virtual void showSpek();
    virtual ~MCU();
    virtual void nambah_volt(int penambahan_voltase);
    virtual void ganti_os(std::string new_os);
};

