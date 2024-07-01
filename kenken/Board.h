#pragma once

#include <vector>

// Структура для представления ячеек сетки
struct Cell {
    // Значение ячейки при генерации пазла
    int board_value;
    // Значение пользователя во время решения головоломки
    int user_value;

    // id группы, к которой принадлежит ячейка
    int group_id;
    // Целевое значение в группе
    int target_value;
    // Арифметическая операция в группе
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

    Board(int size); // С параметром по умолчанию - размер поля

    /*
    * Вспомогательные функции
    */

    // Вспомогательная функция для инициализации полей структуры
    Cell createCell();

    void swap(std::vector<std::vector<Cell>>& other);

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
    std::vector<std::vector<Cell>> board_;

    // Двумерный вектор объединенных ячеек
    // где индекс является идентификатором для группы
    std::vector<std::vector<int>> groups_; // Операция, целевой результат
};