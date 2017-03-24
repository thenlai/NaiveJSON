#ifndef _OBJECT_H
#define _OBJECT_H
#include <map>
#include <string>
#include "value.h"

namespace cjson {

#define Key std::string;
#define Object std::map<Key, Value*>;
Object *newObject();

Object *newObject() {
    Object *pObj = new Object;
    return pObj;
};

} // end of namespace


#endif