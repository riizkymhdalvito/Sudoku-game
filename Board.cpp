#include "Board.h"
#include <iostream>
#include <ctime>
#include <cstdlib>

Board::Board() {
    grid = std::vector<std::vector<int>>(9, std::vector<int>(9, 0));
}

void Board::initialize(int difficulty) {
    // Implementasi inisialisasi papan berdasarkan tingkat kesulitan
}

void Board::display() {
    // Implementasi tampilan papan
}

bool Board::isValidMove(int row, int col, int num) {
    // Implementasi validasi langkah
}

// Implementasi fungsi lainnya
