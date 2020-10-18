#include "particle.h"
#include<cmath>
#include<algorithm>
double particle::get_damping()
{ 
	return damping; 
}

void particle::set_damping(double value) 
{
	if (value<0)
    {
        value = std::abs(value);
        value = std::clamp(0.0, 1.0, value);
        damping = value;
    }
}
void particle::update(double deltatime)
{ 
    position.addTo(Multiply(velocity, deltatime));
    velocity.addTo(Multiply(acclerate, deltatime));
    velocity.Multiplyby(std::pow(damping, deltatime));
    life.update(doodle::DeltaTime);
    
}


