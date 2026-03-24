#include "mobil.hpp"

using namespace std;

// === Implementasi Class mobil ===

mobil::mobil(int kapasitas_mesin, string name, string merk, int top_speed, string bahan_bakar) {
    /* [TODO] : Inisialisasi atribut kapasitas_mesin, name, merk, top_speed, dan bahan_bakar
    dan menghasilkan output: <nama_mobil> keluar dari pabrik <merk> nih gaspol ah
    */
}

void mobil::jalan(int jarak) {
    /* [TODO] : Implementasikan fungsi ini agar menghasilkan output:
    Mobil <nama_mobil> sedang jalan sejauh <jarak> kilometer
    */
}

void mobil::pamer_mesin() {
    /* [TODO] : Implementasikan fungsi ini agar menghasilkan output:
    jika kapasitas_mesin < 2000 CC maka menghasilkan output:
    Yah <nama_mobil> kagak bisa ngeraung CC mesinnya kurang
    jika kapasitas_mesin >= 2000 CC maka menghasilkan output:
    WRAAAUR <nama_mobil> meraung dengan kerennya
    */
}

// Implementasi Penuh (Base Class) sebagai referensi
void mobil::cek_spesifikasi() {
    cout << "=== Spesifikasi Standar " << name << " ===" << endl;
    cout << "Merk: " << merk << " | Mesin: " << kapasitas_mesin << " CC" << endl;
    cout << "Top Speed: " << top_speed << " km/jam | BBM: " << bahan_bakar << endl;
}

mobil::~mobil() {
    /* [TODO] : Implementasikan fungsi ini agar menghasilkan output:
    BOOM <nama_mobil> Dihancurin
    */
}

// === Implementasi Class mobil_sport (Inheritance) ===

mobil_sport::mobil_sport(int kapasitas_mesin, string name, string merk, int top_speed, string bahan_bakar)
    : mobil(kapasitas_mesin, name, merk, top_speed, bahan_bakar) {
    /* [TODO] : Inisialisasi atribut turbo_aktif menjadi false */
}

// [TODO]: Implementasikan secara utuh fungsi jalan(int jarak) milik mobil_sport (Override)
// Output: Wuzzz! mobil_sport <nama_mobil> melesat sejauh <jarak> km!


void mobil_sport::cek_spesifikasi() {
    /* [TODO] : Implementasikan fungsi ini agar menghasilkan output spesifik:
    1. Baris pertama: === Spesifikasi High-Performance <nama_mobil> ===
    2. Baris kedua: Merk: <merk> | Mesin: <kapasitas_mesin> CC
    3. Baris ketiga: Kecepatan Maksimum: <top_speed> km/jam | BBM: <bahan_bakar>
    4. Baris keempat: Status Turbo: (Tampilkan "Aktif" jika turbo_aktif true, "Non-aktif" jika false)
    */
}

void mobil_sport::aktifkan_turbo() {
    /* [TODO] : Set turbo_aktif menjadi true dan berikan output konfirmasi bahwa turbo aktif */
}
