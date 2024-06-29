#pragma once

#include <vector>

// Cтруктура для представления клеток
struct Cage {
    // Вектор координат ячеек, входящих в клетку
    std::vector<std::pair<int, int>> cells;

    // Значение между клетками
    int target;
    // Арифметическая операция между клетками
    char operation;
};

class Board {
public:
    /*
    * Конструкторы
    */

    Board(); // По умолчанию

    Board(int size, int difficulty); // С параметрами по умолчанию - размер поля и сложность

    /*
    * Методы
    */
    
    int getSize() const;

private:
    // Размер игрового поля (N x N)
    int b_size_ = 0;
    // Сложность пазла
    int b_difficulty_ = 0;

    // Двумерный вектор для хранения значений (игровое поле)
    std::vector<std::vector<int>> board_;
    //
    std::vector<Cage> cages_;
};