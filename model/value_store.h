#ifndef _VALUE_H
#define _VALUE_H
#include "types.h"
#include "array.h"
#include "object.h"

namespace cjson {

union ValueStore {
    Number number;
    Boolean boolean;
    String string;
    Array *array;
    Object *object;
};

} // end of namespace

#endif