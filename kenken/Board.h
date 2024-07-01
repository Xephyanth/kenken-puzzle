#pragma once

#include <vector>

// ��������� ��� ������������� ����� �����
struct Cell {
    // �������� ������ ��� ��������� �����
    int board_value;
    // �������� ������������ �� ����� ������� �����������
    int user_value;

    // id ������, � ������� ����������� ������
    int group_id;
    // ������� �������� � ������
    int target_value;
    // �������������� �������� � ������
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

    Board(int size); // � ���������� �� ��������� - ������ ����

    /*
    * ��������������� �������
    */

    // ��������������� ������� ��� ������������� ����� ���������
    Cell createCell();

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