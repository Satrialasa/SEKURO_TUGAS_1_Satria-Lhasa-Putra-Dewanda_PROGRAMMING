#include "bits/stdc++.h"
#include "robot.hpp"
#include "robotair.hpp"

using namespace std;

float RobotAir::kedalaman = 0;
int main(){

    Robot* robot_1 = new RobotAir(1, "Submarine-V2", 200, 50.0);
    for (int i=0;i<3;i++){
        robot_1->Komunikasi_Robot();
    }
    delete robot_1;
}