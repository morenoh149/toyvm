//
// Created by Stefan on 18.02.2018.
//

#ifndef HUNGERBYTE_OPERAND2_H
#define HUNGERBYTE_OPERAND2_H

#include "definitions.h"

enum class OperandType : uint8_t {
    VALUE,
    REGISTER,
    ADDRESS,
};

class Operand {
private:
    OperandType operand_type;
    word_t operand_value;
public:
    Operand();
    Operand(OperandType, word_t);
    OperandType type() const;
    word_t val() const;
    sword_t sval() const;
};

inline Operand::Operand() : operand_type(OperandType::VALUE), operand_value(0) {}
inline Operand::Operand(OperandType t, word_t v) : operand_type(t), operand_value(v) {}
inline OperandType Operand::type() const { return operand_type; }
inline word_t Operand::val() const { return operand_value; }
inline sword_t Operand::sval() const { return static_cast<sword_t>(operand_value); }

#endif //HUNGERBYTE_OPERAND2_H