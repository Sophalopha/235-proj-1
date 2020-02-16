#include <iostream>
#include "Fish.hpp"
using namespace std;

Fish::Fish() 
{
    venomous_= false;
}

Fish::Fish(string name, bool domestic, bool predator) 
{
    venomous_=false;
}


bool Fish::isVenomous() const
{
    return venomous_;
}
void Fish::setVenomous()
{
    venomous_= true;
}









