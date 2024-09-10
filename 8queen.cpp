#include<iostream>
#include<vector>
#define N 8
using namespace std;

// Fungsi untuk memerikasi penempatan ratu aman
bool isSafe(vector<vector<int>> &board, int row, int col) {
	// Cek baris di sebelah kiri
	for (int i = 0; i < col; i++) {
		if (board[row][i])
			return false;
	}
	
	// Cek diagonal kiri atas
	for (int i = row, j = col; i >= 0 && j >=0; i--, j--) {
		if (board[i][j])
			return false;
	}
	
	// Cek diagonal kiri bawah
	for (int i = row, j = col; i < N && j >= 0; i++, j--) {
		if (board[i][j])
			return false;
	}
	return true;
}

// Funsi untuk menempatkan ratu menggunakan backtracking
bool solveQueens(vector<vector<int>> &board, int col) {
	// Baris jika semua ratu sudah ditempatkan
	if (col >= N)
		return true;
		
	for (int i = 0; i < N; i++) {
		if (isSafe(board, i, col)) {
			// Tempatkan ratu
			board[i][col] = 1;
			
			// Rekursi untuk menempatkan ratu di kolom berikutnya
			if (solveQueens(board, col + 1))
				return true;
				
			// Hapus ratu(Backtrack)
			board[i][col] = 0;
		}
	}
	// Jika ratu tidak bisa ditempatkan di kolom ini, kempalikan false
	return false;
}

void printBoard(const vector<vector<int>> &board) {
	for (int i = 0; i < N; i++) {
		for (int j = 0; j < N; j++) {
			cout << (board[i][j] ? "Q " : ".");
		}
		cout << endl;
	}
}
int main() {
	vector<vector<int>> board(N, vector<int>(N, 0)); // Inisialisasi papan 8x8 dengan 0
	if (solveQueens(board, 0))
		printBoard(board);
	else
		cout << "Tidak ada solusi";
	return 0;
}