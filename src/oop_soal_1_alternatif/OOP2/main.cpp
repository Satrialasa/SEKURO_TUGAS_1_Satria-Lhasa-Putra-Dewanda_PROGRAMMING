#include "mobil.hpp"

using namespace std;

int main() {
    cout << "=== MOBIL LCGC ===" << endl;
    mobil mobil1(1200, "Sigra", "Daihatsu", 140, "Pertalite");
    mobil1.jalan(10);
    mobil1.pamer_mesin();
    mobil1.cek_spesifikasi();

    cout << "\n-----------------------------------------\n" << endl;

    cout << "=== mobil_sport ===" << endl;
    mobil_sport mobil2(3000, "Lancer", "Mitsubishi", 250, "Pertamax Turbo");
    mobil2.jalan(50);
    mobil2.pamer_mesin();
    mobil2.aktifkan_turbo();
    mobil2.cek_spesifikasi();

    cout << "\n-----------------------------------------\n" << endl;
    return 0;
}