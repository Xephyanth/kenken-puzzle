#pragma once

#include "Board.h"

class FieldGenerator {
public:
    /*
    * Конструкторы
    */
    
    FieldGenerator(int difficulty);

    /*
    * Методы
    */

    Board generateField(int size) const;

private:
    // Сложность пазла
    int difficulty_ = 0;

    /*
    * Методы
    */

    // ЗАполняет поле цифрами по правилам игры
    void fillNumbers(Board& board);
    // Разбивает поле на отдельные блоки
    void createCages(Board& board);

};