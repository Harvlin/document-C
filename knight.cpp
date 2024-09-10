#include<iostream>
#include<vector>
#include<iomanip>
#define N 8
using namespace std;

int dx[8] = {1, 2, 2, 1, -1, -2, -2, -1};
int dy[8] = {2, 1, -1, -2, -2, -1, 1, 2};

// Fungsi untuk memeriksa apakah posisi (x, y) valid dalam matriks
bool isValid(int x, int y, vector<vector<int>> &board) {
    return (x >= 0 && y >= 0 && x < N && y < N && board[x][y] == -1);
}

// Fungsi rekursif untuk menyelesaikan masalah langkah kuda
bool solveKnightTour(int x, int y, int moveCount, vector<vector<int>> &board) {
    // Jika semua sel sudah terisi
    if (moveCount == N * N) {
        return true;
    }
    
    // Coba semua kemungkinan gerakan kuda
    for (int i = 0; i < N; i++) {
        int nextX = x + dx[i];
        int nextY = y + dy[i];
        
        if (isValid(nextX, nextY, board)) {
            board[nextX][nextY] = moveCount;
            if (solveKnightTour(nextX, nextY, moveCount + 1, board)) {
                return true;
            }
            // Backtracking
            board[nextX][nextY] = -1;
        }
    }
    return false;  // Kembalikan false jika tidak ada solusi
}

// Fungsi untuk memulai langkah kuda
bool knightTour() {
    // Inisialisasi papan NxN dengan nilai - 1
    vector<vector<int>> board(N, vector<int>(N, -1));
    
    // Posisi awal kuda (0, 0)
    board[0][0] = 0;
    
    // Panggil fungsi rekursif untuk menyelesaikan masalah langkah kuda
    if (!solveKnightTour(0, 0, 1, board)) {
        cout << "Solusi tidak ditemukan";
        return false;
    } else {
        // Cetak solusi
        for (int i = 0; i < N; i++) {
            for (int j = 0; j < N; j++) {
                cout << setw(3) << board[i][j] << "  ";
            }
            cout << endl;
        }
    }
    return true;
}

int main() {
    knightTour();
    return 0;
}
