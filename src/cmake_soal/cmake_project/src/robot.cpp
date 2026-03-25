
#include "bits/stdc++.h"
#include "robot.hpp"

using namespace std;

void Robot::Komunikasi_Robot(){
    cout << "Robot Normal Beraksi" << endl;
}

Robot::Robot(int id){
    this->id = id;
    this->jenis_robot = "NONE";
    this->top_speed = 0;
    cout << "Membuat Robot" << endl;
}
Robot::~Robot(){
    cout << "Robot dihancurkan" << endl;
}
