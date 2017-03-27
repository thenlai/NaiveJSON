#ifndef _JSON_H
#define _JSON_H

#include "value.h"

namespace cjson {

class JSON {
private:
    VALUE *root;
public:
    JSON();
    ~JSON();
};

}

#endif
