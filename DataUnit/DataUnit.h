#pragma once

#include <string>
#include "../Utils.h"

class DataUnit {
    friend bool operator<(const DataUnit &lhs, const DataUnit &rhs);
private:
    int key;
    std::string value;
public:
    DataUnit(int key, const std::string& value);
    DataUnit();
    NODISCARD int getKey() const;
    NODISCARD std::string getValue() const;
};
