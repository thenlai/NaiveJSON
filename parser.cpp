#include <iostream>
#include <fstream>
#include "parser.h"

bool isWhiteSpace(char& c) {
  return (
    c == WS_SPACE ||
    c == WS_HORIZONTAL_TAB ||
    c == WS_LINE_FEED ||
    c == WS_CARRIAGE_RETURN);
}

void parse(std::string& json) {
  bool inString = false; 
  for (char& c : json) {
    if (isWhiteSpace(c) && inString) continue;
    if (c == QUOTE) {
      inString = !inString;
    }
  }
}

bool isTRUE(std::string& v) {
  return v.compare(TRUE_S) == 0;
}

bool isFALSE(std::string& v) {
  return v.compare(FALSE_S) == 0;
}

bool isNULL(std::string& v) {
  return v.compare(NULL_S) == 0;
}