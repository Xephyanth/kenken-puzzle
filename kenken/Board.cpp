#include "Board.h"

/*
* ������������
*/

// ����������� �� ���������
// ������������� ����������� ��������, ������� ���������� ��� ��������� ����
Board::Board() : board_(3, std::vector<int>(3, 0)) {
    // ������ �������� ����
    b_size_ = 3;
    // ��������� �����
    b_difficulty_ = 1;
}

// �����������
Board::Board(int size, int difficulty) : b_size_(size), b_difficulty_(difficulty), board_(size, std::vector<int>(size, 0)) {}

/*
* ������
*/

int Board::getSize() const { return b_size_; }
