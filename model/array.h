#ifndef _VALUE_H
#define _VALUE_H
#include <vector>
#include "value.h"

namespace cjson {

#define Array std::vector<Value>;

Array *newArray() {
    Array *pObj = new Array;
    return tpObj;
}

}

#endif