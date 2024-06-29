#pragma once

#include <vector>

// C�������� ��� ������������� ������
struct Cage {
    // ������ ��������� �����, �������� � ������
    std::vector<std::pair<int, int>> cells;

    // �������� ����� ��������
    int target;
    // �������������� �������� ����� ��������
    char operation;
};

class Board {
public:
    /*
    * ������������
    */

    Board(); // �� ���������

    Board(int size, int difficulty); // � ����������� �� ��������� - ������ ���� � ���������

    /*
    * ������
    */
    
    int getSize() const;

private:
    // ������ �������� ���� (N x N)
    int b_size_ = 0;
    // ��������� �����
    int b_difficulty_ = 0;

    // ��������� ������ ��� �������� �������� (������� ����)
    std::vector<std::vector<int>> board_;
    //
    std::vector<Cage> cages_;
};