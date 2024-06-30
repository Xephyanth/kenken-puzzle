#include "Board.h"

#include <iostream>

/*
* Конструкторы
*/

// Конструктор по умолчанию
// Устанавливает минимальные значения, которые необходимы для генерации поля
Board::Board() : board_(3, std::vector<int>(3, 0)) {
    // Размер игрового поля
    b_size_ = 3;
}

// Конструктор
Board::Board(int size = 3) : b_size_(size), board_(size, std::vector<int>(size, 0)) {}

/*
* Методы
*/

int Board::getSize() const { return b_size_; }

void Board::setValue(int row, int col, int value) {
    board_[row][col] = value;

    //displayBoard();
}

int Board::getValue(int row, int col) const {
    return board_[row][col];
}

void Board::displayBoard() const {
    for (const auto& cols : board_) {
        for (const auto& cell : cols) {
            std::cout << cell << ' ';
        }
        std::cout << '\n';
    }
}