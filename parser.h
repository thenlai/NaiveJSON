#ifndef _PARSER_H
#define _PARSER_H
#include <string>

// structural characters
#define BEGIN_ARRAY     '['
#define END_ARRAY       ']'
#define BEGIN_OBJECT    '{'
#define END_OBJECT      '}'
#define NAME_SEPARATOR  ':'
#define VALUE_SEPARATOR ','

// value literals
#define TRUE_S          "true"
#define FALSE_S         "false"
#define NULL_S          "null"

// white space
#define SPACE           ' '
#define HORIZONTAL_TAB  '\t'
#define LINE_FEED       '\r'
#define CARRIAGE_RETURN '\n'

// numbers
#define DECIMAL_POINT   '.'
#define EXPONENT        'e'
#define EXPONENT_CAP    'E'
#define MINUS           '-'
#define PLUS            '+'
#define ONE             '1'
#define NINE            '9'
#define ZERO            '0'

// string
#define ESCAPE          '\\'

void parse(std::string json);
void parseValue(std::string value);

bool isWhiteSpace(char c);
void isTRUE(std::string v);
void isFALSE(std::string v);
void isNULL(std::string v);

bool isWhiteSpace(char c) {
  return (
    c == WS_SPACE ||
    c == WS_HORIZONTAL_TAB ||
    c == WS_LINE_FEED ||
    c == WS_CARRIAGE_RETURN);
}

#endif