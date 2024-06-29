#include "Board.h"

/*
* Конструкторы
*/

// Конструктор по умолчанию
// Устанавливает минимальные значения, которые необходимы для генерации поля
Board::Board() : board_(3, std::vector<int>(3, 0)) {
    // Размер игрового поля
    b_size_ = 3;
    // Сложность пазла
    b_difficulty_ = 1;
}

// Конструктор
Board::Board(int size, int difficulty) : b_size_(size), b_difficulty_(difficulty), board_(size, std::vector<int>(size, 0)) {}

/*
* Методы
*/

int Board::getSize() const { return b_size_; }
