#include <iostream>
#include "Bird.hpp"
using namespace std;

Bird::Bird() 
{
    airbone_= false;
    aquatic_= false;
}
Bird::Bird(string name, bool domestic, bool predator) 
{
   
    airbone_= false;
    aquatic_= false;
}

bool Bird::isAirborne() const
{
    return airbone_;
}
bool Bird::isAquatic() const
{
    return aquatic_;
}
void Bird::setAirborne()
{
    airbone_ = true;
}
void Bird::setAquatic()
{
    aquatic_ = true;
}
