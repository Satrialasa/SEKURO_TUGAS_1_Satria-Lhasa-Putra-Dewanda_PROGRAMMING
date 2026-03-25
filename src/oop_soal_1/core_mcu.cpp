#include <iostream>
#include "core_mcu.hpp"
using namespace std;

Core_MCU::Core_MCU(float cpu_speed, int memory, std::string os, std::string nama, int volt){
    this->cpu_speed = cpu_speed;
    this->memory   = memory;
    this->os       = os;
    this->nama     = nama;
    this->volt     = volt;
    cout << "[Core_MCU] : MCU utama yang bernama " << nama << " telah dibuat" << endl;
    cout << "[SPEK DEVICE] : [NAMA_DEVICE]: " << nama
         << " | [CPU CLOCK] : " << cpu_speed
         << " | [MEMORY] : "    << memory
         << " | [OS] : "        << os << endl;
}

void Core_MCU::showSpek(){
    cout << "[SPEK DEVICE] : [NAMA_DEVICE]: " << nama
         << " | [CPU CLOCK] : " << cpu_speed
         << " | [MEMORY] : "    << memory
         << " | [OS] : "        << os << endl;
}

void Core_MCU::nambah_volt(int penambahan_voltase){
    volt += penambahan_voltase;
    cout << "[Core_MCU] : MCU utama yang bernama " << nama
         << " Telah ditambah voltasenya menjadi = " << volt << endl;
}

void Core_MCU::ganti_os(std::string new_os){
    os = new_os;
    cout << "[Core_MCU] : MCU utama yang bernama " << nama
         << " Telah diganti OS nya menjadi = " << new_os << endl;
}

std::string Core_MCU::get_os(){
    return os;
}

Core_MCU::~Core_MCU(){
    cout << "[Core_MCU] : MCU utama yang bernama " << nama << " telah dihapus" << endl;
}