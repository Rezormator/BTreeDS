#include "DataUnit.h"

DataUnit::DataUnit(const int key, const std::string& value) {
    this->key = key;
    this->value = value;
}

DataUnit::DataUnit() : key(0), value(" ") {
}

int DataUnit::getKey() const {
    return key;
}

std::string DataUnit::getValue() const {
    return value;
}

bool operator<(const DataUnit &lhs, const DataUnit &rhs) {
    return lhs.key < rhs.key;
}