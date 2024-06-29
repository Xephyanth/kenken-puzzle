/*
 * Copyright (c) 2024 Egor M.
 * Все права защищены
 */

#include "Board.h"
#include "FieldGenerator.h"

int main() {
    int size = 6;
    int diff = 2;

    FieldGenerator generator(diff);

    Board board = generator.generateField(size);

    board.displayBoard();

    return 0;
}