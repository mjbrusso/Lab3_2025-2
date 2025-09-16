#pragma once
#include <string>

class pet {
protected:
    std::string name_;

public:
    // constructor
    pet(const std::string& name)
        : name_ { name }
    {
    }

    // Setter
    void name(const std::string& name) { name_ = name; }
    // Getter
    std::string name() const { return name_; }

    // Other public methods
    void speak() const;
};
