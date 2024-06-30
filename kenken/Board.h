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

/*
* Класс Board отвечает за представление и управление состоянием игрового поля
*/
class Board {
public:
    /*
    * Конструкторы
    */

    Board(); // По умолчанию

    Board(int size); // С параметром по умолчанию - размер поля

    /**/

    void swap(std::vector<std::vector<int>>& other);

    /*
    * Методы
    */
    
    // Получить размер игрового поля
    int getSize() const;

    // Установить значение в ячейку (ввод пользователя)
    void setValue(int row, int col, int value);
    // Получить значение в ячейке (редактирование)
    int getValue(int row, int col) const;
    
    // Отобразить игровое поле
    void displayBoard() const;

private:
    // Размер игрового поля (N x N)
    int b_size_ = 0;

    // Двумерный вектор для хранения значений (игровое поле)
    std::vector<std::vector<int>> board_;
    // Вектор объединенных пар ячеек
    std::vector<Cage> cages_;
};