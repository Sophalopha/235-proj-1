#include <iostream>
#ifndef BIRD_HPP // include guard
#define BIRD_HPP

//DERIVED CLASS

class Bird: public Animal
{
    public:
    Bird();
    Bird(std::string name, bool domestic = false, bool predator = false);
    bool isAirborne() const;
    bool isAquatic() const;
    void setAirborne();
    void setAquatic();

    private:
    bool airbone_;
    bool aquatic_;

};





#endif //BIRD_HPP
