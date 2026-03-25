#pragma once
#include "bits/stdc++.h"

class Core_MCU{
private:
    float cpu_speed;
    int memory;
    std::string os;
    std::string nama;
    int volt;

public:
    Core_MCU(float cpu_speed, int memory, std::string os, std::string nama, int volt);
    void showSpek();
    ~Core_MCU();
    void nambah_volt(int penambahan_voltase);
    void ganti_os(std::string new_os);
    std::string get_os();
};