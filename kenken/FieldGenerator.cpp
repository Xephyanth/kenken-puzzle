#include "FieldGenerator.h"

#include <stdexcept>

FieldGenerator::FieldGenerator(int difficulty) : difficulty_(difficulty) {
    if (difficulty < 1 || difficulty > 3) {
        throw std::invalid_argument("Difficulty error"); // Не забудь придумать
    }
}

Board FieldGenerator::generateField(int size) const {
    if (size < 3 || size > 9) {
        throw std::invalid_argument("Field size error"); // Не забудь придумать
    }

    // Результирующее поле
    Board board(size);

    fillNumbers(board);

    // ВОзвращаем заполненную доску
    return board;
}

void FieldGenerator::fillNumbers(Board& board) const {
    // Получаем размер поля
    const int brd_size = board.getSize();

    std::vector<std::vector<int>> grid(brd_size, std::vector<int>(brd_size, 0));

    // Заполняем первый ряд
    std::vector<int>& first_row = grid[0];
    for (int i = 0; i < brd_size; ++i) {
        first_row[i] = i + 1;
    }

    // Заполняем остальные ряды со смещением
    for (int row = 1; row < brd_size; ++row) {
        for (int col = 0; col < brd_size; ++col) {
            grid[row][col] = (grid[0][col] + row) % brd_size;

            if (grid[row][col] == 0) {
                grid[row][col] = brd_size;
            }
        }
    }

    // Обмениваем содержимое board с grid
    board.swap(grid);

}

void FieldGenerator::createCages(Board& board) const {
}
