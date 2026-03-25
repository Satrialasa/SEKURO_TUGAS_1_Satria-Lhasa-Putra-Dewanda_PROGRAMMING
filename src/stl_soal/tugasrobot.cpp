#include <iostream>
#include <vector>
#include <map>
#include <algorithm>
using namespace std;

int main(){
    int n;
    cin >> n;

    vector<pair<int,int>> paket(n);

    for(int i = 0; i < n; i++) cin >> paket[i].first;  
    for(int i = 0; i < n; i++) cin >> paket[i].second; 

    sort(paket.begin(), paket.end());

    map<int, bool> sudah_diambil;

    int total = 0;

    for(auto& p : paket){
        int koordinat = p.first;
        int kategori  = p.second;

        if(sudah_diambil.count(kategori) == 0){
            sudah_diambil[kategori] = true;
            total++;
        }
    }

    cout << total << endl;

    return 0;
}