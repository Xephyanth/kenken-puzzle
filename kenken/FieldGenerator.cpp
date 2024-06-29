#include "FieldGenerator.h"

#include <stdexcept>

FieldGenerator::FieldGenerator(int difficulty) : difficulty_(difficulty) {
	if (difficulty < 1 || difficulty > 3) {
		throw std::invalid_argument("Difficulty error"); // Не забудь придумать
	}
}

Board FieldGenerator::generateField(int size) const {
	if (size < 3 || size > 9) {
		throw std::invalid_argument("Field size error"); // Не забудь придумать
	}

	// Результирующее поле
	Board board(size);

	/*
	* Тут будет магия по заполнению поля
	*/

	// ВОзвращаем заполненную доску
	return board;
}
