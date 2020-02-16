#include <iostream>
#ifndef MAMMAL_HPP // include guard
#define MAMMAL_HPP

//DERIVED CLASS

class Mammal: public Animal 
{
    public:
    Mammal();
    Mammal(std::string name, bool domestic = false, bool predator = false); 
    bool hasHair() const;
    bool isAirborne() const;
    bool isAquatic() const; 
    bool isToothed() const;
    bool hasFins() const; 
    bool hasTail() const;
    int legs() const;
    void setHair();
    void setAirborne();
    void setAquatic(); 
    void setToothed();
    void setFins(); 
    void setTail();
    void setLegs(int legs);

    private:
    bool hair_;
    bool airborne_;
    bool aquatic_; 
    bool toothed_;
    bool fins_; 
    bool tail_;
    int legs_;
 
};




#endif // MAMMAL_HPP


