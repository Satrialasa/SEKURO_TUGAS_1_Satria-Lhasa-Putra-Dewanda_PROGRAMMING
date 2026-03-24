#pragma once

#include "mcu.hpp"

class mcu_cam_controller:public MCU{
private:
    std::string obj_detected;
public:
    static int count_detected_obj;
    mcu_cam_controller(float cpu_speed,int memory,std::string os,std::string nama,int volt,std::string obj_detected);
    void detect_other_object(std::string other, bool moving) ;
    void showSpek();
    void nambah_volt(int penambahan_voltase);
    void ganti_os(std::string new_os);
    ~mcu_cam_controller();
};