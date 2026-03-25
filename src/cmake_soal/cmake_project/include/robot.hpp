#pragma once
#include "bits/stdc++.h"

class Robot{
private:
    int id;
protected:
    std::string jenis_robot;
    int top_speed;
public :
   Robot(int id);

   virtual void Komunikasi_Robot();
   virtual ~Robot();
};