
#include "robotair.hpp"
using namespace std;
RobotAir:: RobotAir(int id, string jenis, int speed, float awal) : Robot(id) {
    this->jenis_robot = jenis;
    this->top_speed = speed;
    kedalaman = awal;
    cout << "Membuat Sistem Robot Air" << endl;
}

void RobotAir::show_spec(){
    cout << "=== Spesifikasi Robot Air ===" << endl;
    cout << "Jenis     : " << jenis_robot << endl; // Akses atribut protected
    cout << "Top Speed : " << top_speed << " knots" << endl; // Akses atribut protected
    cout << "Berat     : " << berat << " ton" << endl;
    cout << "Kedalaman : " << kedalaman << " meter" << endl;
    cout << "----------------------------" << endl;
}
void RobotAir::Komunikasi_Robot(){
    if (kedalaman<100){
        kedalaman ++;
        cout << " Robot Air Berenang Terus menyelam" << endl;
        show_spec();
    }
    else cout << " Robot Air sudah berenang terlalu jauh" << endl;
}
RobotAir::~RobotAir(){
    cout << "Robot Air dihancurkan" << endl;
}