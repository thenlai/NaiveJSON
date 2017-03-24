#ifndef _VALUE_H
#define _VALUE_H
#include <string>

namespace cjson {

#define Number float;
#define Boolean bool;
#define String std::string;

enum class Type {
    number,
    boolean,
    string,
    object,
    array,
    null
};

}

#endif