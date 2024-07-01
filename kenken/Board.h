#pragma once

#include <vector>

// ��������� ��� ������������� ����� �����
struct Cell {
    Cell() = default;

    // �������� ������ ��� ��������� �����
    int board_value = 0;
    // �������� ������������ �� ����� ������� �����������
    int user_value =  0;

    // id ������, � ������� ����������� ������
    int group_id = 0;
    // ������� �������� � ������
    int target_value = 0;
    // �������������� �������� � ������
    char operation = '+';
};

/*
* ����� Board �������� �� ������������� � ���������� ���������� �������� ����
*/
class Board {
public:
    /*
    * ������������
    */

    Board(int size); // � ���������� �� ��������� - ������ ����

    /*
    * ��������������� �������
    */

    void swap(std::vector<std::vector<Cell>>& other);

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
    std::vector<std::vector<Cell>> board_;

    // ��������� ������ ������������ �����
    // ��� ������ �������� ��������������� ��� ������
    std::vector<std::vector<int>> groups_; // ��������, ������� ���������
};