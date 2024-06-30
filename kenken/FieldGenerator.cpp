#include "FieldGenerator.h"

#include <stdexcept>
#include <random>

#include <iostream>

FieldGenerator::FieldGenerator(int difficulty) : difficulty_(difficulty) {
    if (difficulty < 1 || difficulty > 3) {
        throw std::invalid_argument("Difficulty error"); // �� ������ ���������
    }
}

Board FieldGenerator::generateField(int size) const {
    if (size < 3 || size > 9) {
        throw std::invalid_argument("Field size error"); // �� ������ ���������
    }

    // �������������� ����
    Board board(size);

    fillNumbers(board);

    // ���������� ����������� �����
    return board;
}

int FieldGenerator::getDifficulty() const {
    return 0;
}

void FieldGenerator::fillNumbers(Board& board) const {
    // �������� ������ ����
    const int brd_size = board.getSize();

    std::vector<std::vector<int>> grid(brd_size, std::vector<int>(brd_size, 0));

    // ��������� ������ ���
    std::vector<int>& first_row = grid[0];
    for (int i = 0; i < brd_size; ++i) {
        first_row[i] = i + 1;
    }

    // ��������� ��������� ���� �� ���������
    for (int row = 1; row < brd_size; ++row) {
        for (int col = 0; col < brd_size; ++col) {
            grid[row][col] = (grid[0][col] + row) % brd_size;

            if (grid[row][col] == 0) {
                grid[row][col] = brd_size;
            }
        }
    }

    // �������������� ��������� ��������� �����
    std::random_device rd;
    std::mt19937 g_mt(rd());

    // ������������ ������
    std::shuffle(grid.begin(), grid.end(), g_mt);
    // ������������ �������
    // ������������ ����� �� 90 �������� �� ������� �������
    std::vector<std::vector<int>> rotated_grid(brd_size, std::vector<int>(brd_size));
    for (int i = 0; i < brd_size; ++i) {
        for (int j = 0; j < brd_size; ++j) {
            rotated_grid[i][j] = grid[brd_size - 1 - j][i];
        }
    }

    // ������������ ������ ���������� ����� (������ �������)
    std::shuffle(rotated_grid.begin(), rotated_grid.end(), g_mt);

    // ���������� ���������� board � grid
    board.swap(rotated_grid);

}

void FieldGenerator::createCages(Board& board) const {
}
