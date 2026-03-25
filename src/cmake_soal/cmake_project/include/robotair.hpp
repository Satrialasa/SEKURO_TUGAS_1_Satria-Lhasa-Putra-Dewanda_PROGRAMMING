#pragma once 

#include "robot.hpp"

class RobotAir:public Robot{
private:
    static float kedalaman;
    int berat;
public:
    RobotAir(int id, std::string jenis, int speed, float awal);

    void show_spec();
    void Komunikasi_Robot()override;
    ~RobotAir();
};