#include<iostream>
#include<vector>
#include<map>
using namespace std;
int main() {
      vector <string> namaSiswa;
      map<string, int> nilai;
      string nama;
      int nilaiSiswa;

      cin >> nama;
      cin >> nilaiSiswa;
      namaSiswa.push_back(nama);
      nilai[nama] = nilaiSiswa; 

      cout << endl;
      for (const auto& pair : namaSiswa) {
            cout << pair << " ";
      }
      cout << endl << endl;
      for (const auto& pair : nilai) {
            cout << pair.first << " ";
      }
      cout << endl << endl;
      for (const auto& pair : nilai) {
            cout << pair.second << " ";
      }
      cout << endl << endl;
      for (const auto& pair : namaSiswa) {
            cout << "Nama: " << pair << " Nilai: " << nilai[pair] << "\n"; // nama dari vector dan nilai dari map
      }
      return 0;
}