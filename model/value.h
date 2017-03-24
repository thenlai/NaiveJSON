#ifndef _VALUE_H
#define _VALUE_H
#include "types.h"
#include "value_store.h"

namespace cjson {

struct Value {
    Type type;
    ValueStore data;
};

} // end of namespace

#endif