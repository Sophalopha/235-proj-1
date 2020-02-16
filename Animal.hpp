#include <iostream>
#ifndef ANIMAL_HPP // include guard
#define ANIMAL_HPP
#include "Animal.hpp"


class Animal
{
    public:
    Animal();
    Animal(std::string name, bool domestic = false, bool predator = false);
    std::string getName() const;
    bool isDomestic() const; 
    bool isPredator() const;
    void setName(std::string name);
    void setDomestic(); 
    void setPredator();

    private:
    std::string name_;
    bool domestic_;
    bool predator_;
};


#endif //ANIMAL_HPP
