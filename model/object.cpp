#inluce "object.h"

namespace cjson {

Object *newObject() {
    Object *pObj = new Object;
    return pObj;
};

}