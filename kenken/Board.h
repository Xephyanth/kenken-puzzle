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

/*
* ����� Board �������� �� ������������� � ���������� ���������� �������� ����
*/
class Board {
public:
    /*
    * ������������
    */

    Board(); // �� ���������

    Board(int size); // � ���������� �� ��������� - ������ ����

    /**/

    void swap(std::vector<std::vector<int>>& other);

    /*
    * ������
    */
    
    // �������� ������ �������� ����
    int getSize() const;

    // ���������� �������� � ������ (���� ������������)
    void setValue(int row, int col, int value);
    // �������� �������� � ������ (��������������)
    int getValue(int row, int col) const;
    
    // ���������� ������� ����
    void displayBoard() const;

private:
    // ������ �������� ���� (N x N)
    int b_size_ = 0;

    // ��������� ������ ��� �������� �������� (������� ����)
    std::vector<std::vector<int>> board_;
    // ������ ������������ ��� �����
    std::vector<Cage> cages_;
};