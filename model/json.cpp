#include "json.h"

namespace cjson {

    JSON::JSON() {
        this->root = nullptr;
    }

    JSON::~JSON() {
        if (this->root != nullptr) {
            
        }
    }
}