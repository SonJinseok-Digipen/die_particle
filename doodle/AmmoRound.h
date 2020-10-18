#pragma once
#include "particle.h"
enum  class AmmoRoundType
{
	Pistol,
	Artillery,
	Fireball,
	Laser
};

class AmmoRound
{
    AmmoRoundType type{AmmoRoundType::Pistol};
    

public:
    AmmoRound(AmmoRoundType type);
    particle particle{};
	void Update(double delta_time);
    void Draw() const;

};