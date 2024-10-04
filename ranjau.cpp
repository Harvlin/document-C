#include <bits/stdc++.h>
using namespace std;

void letakAngka(vector<vector<char>> &matrix, short barisRandom, short kolomRandom, short baris, short kolom) {
	for (short i = -1; i <= 1; i++) {
		for (short j = -1; j <= 1; j++) {
			short barisBaru = barisRandom + i;
			short kolomBaru = kolomRandom + j;
			
			if ((barisBaru >= 0 && barisBaru < baris) && (kolomBaru >= 0 && kolomBaru < kolom) && matrix[barisBaru][kolomBaru] != '*') {
				if (matrix[barisBaru][kolomBaru] == '.')
					matrix[barisBaru][kolomBaru] = '1';
				else
					matrix[barisBaru][kolomBaru] = matrix[barisBaru][kolomBaru] + 1;
			}
		}
	}
}

void letakRanjau(vector<vector<char>> &matrix, int baris, int kolom, int jumlahRanjau) {
    for(short i = 0; i < jumlahRanjau; i++) {
        short barisRandom = rand() % baris;
        short kolomRandom = rand() % kolom;
        
        if (matrix[barisRandom][kolomRandom] == '*') {
        	i--;
        	continue;
		} else matrix[barisRandom][kolomRandom] = '*';

		letakAngka(matrix, barisRandom, kolomRandom, baris, kolom);
    }
    
}

void tampilkan(const vector<vector<char>> &matrix, short baris, short kolom) {
    for (short i = 0; i < baris; i++) {
        for (short j = 0; j < kolom; j++)
            cout << setw(3) << matrix[i][j];
        cout << endl;
    }
}

int main() {
    short baris, kolom, jumlahRanjau;
    cin >> baris >> kolom >> jumlahRanjau;

    vector<vector<char>> matrix(baris, vector<char>(kolom, '.'));
	
    letakRanjau(matrix, baris, kolom, jumlahRanjau);
    tampilkan(matrix, baris, kolom);

    return 0;
}
