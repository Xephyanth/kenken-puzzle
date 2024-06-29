#pragma once

#include "Board.h"

class FieldGenerator {
public:
    /*
    * ������������
    */
    
    FieldGenerator(int difficulty);

    /*
    * ������
    */

    Board generateField(int size) const;

private:
    // ��������� �����
    int difficulty_ = 0;

    /*
    * ������
    */

    // ��������� ���� ������� �� �������� ����
    void fillNumbers(Board& board);
    // ��������� ���� �� ��������� �����
    void createCages(Board& board);

};