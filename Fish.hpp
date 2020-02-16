#include <iostream>
#ifndef FISH_HPP // include guard
#define FISH_HPP

//DERIVED CLASS

class Fish: public Animal 
{
    public:
    Fish();
    Fish(std::string name, bool domestic = false, bool predator = false);
    bool isVenomous() const;
    void setVenomous();

    private:
    bool venomous_;

};



#endif //FISH_HPP
