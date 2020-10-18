#pragma once
#include"vec2.h"
#include"Lifetime.h"
class particle
{
public:
    vec2 position;
    vec2 velocity;
    vec2 acclerate;
    lifetime life;

private:
    double damping{0.98};

 public:
    double get_damping();
    void set_damping(double );
    void update(double);
    
 






};
