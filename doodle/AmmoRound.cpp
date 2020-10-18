#include"AmmoRound.h"
#include<doodle/doodle.hpp>
#include<iostream>

AmmoRound::AmmoRound(AmmoRoundType ammo_type)
{ 
	type              = ammo_type;
    particle.position = vec2(-doodle::Width / 2.0, 0.0);
    switch (type)
    {
        case AmmoRoundType::Pistol:
            particle.velocity  = vec2{50, 0};
            particle.acclerate = vec2{0, -10};
         break;
        case AmmoRoundType::Artillery:
            particle.velocity  = vec2{500, 250};
            particle.acclerate = vec2{0, -100};
            break;
        case AmmoRoundType::Fireball:
            particle.velocity  = vec2{100, 0};
            particle.acclerate = vec2{0, 10};
            particle.set_damping(0.85);
            break;
        case AmmoRoundType::Laser:
            particle.velocity  = vec2{1500, 0};
            particle.acclerate = vec2{0, 0};
            particle.set_damping(1.0);
            break;
    }
}
void AmmoRound::Update(double delta_time) { 
    particle.update(delta_time);
    if(particle.life.Is_Dead==true)
    {
        std::cout << "im dead" << std::endl;
    }
}

void AmmoRound::Draw() const
{
    using namespace doodle;
    push_settings();
    switch (type)
    {
        case AmmoRoundType::Pistol:
            set_fill_color(240, 230, 0);
            set_rectangle_mode(RectMode::Center);
            draw_rectangle(particle.position.x, particle.position.y, 100, 25);
            break;
        case AmmoRoundType::Artillery:
            set_fill_color(40, 30, 200);
            draw_ellipse(particle.position.x, particle.position.y, 50, 50);
            break;
        case AmmoRoundType::Fireball:
            set_fill_color(240, 30, 20);
            draw_ellipse(particle.position.x, particle.position.y, 100, 100);
            break;
        case AmmoRoundType::Laser:
            set_fill_color(255, 0, 0);
            no_outline();
            draw_rectangle(particle.position.x, particle.position.y, 200, 10);
            break;
    }
    pop_settings();
}
