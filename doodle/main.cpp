// Name       : TODO
// Assignment : TODO
// Course     : TODO
// Term & Year: TODO

#include <doodle/doodle.hpp>
#include"particle.h"
#include<vector>
#include"AmmoRound.h"
#include"Demo.h"
using namespace doodle;


Demo                   d1;

int main(void)
{  
   
    create_window(480, 360);
    set_rectangle_mode(RectMode::Center);
    while (!is_window_closed())
    {
        update_window();
        clear_background(220);
        d1.Update();
       
    }
    return 0;
}



void on_key_released(KeyboardButtons button)
{
    if (button == KeyboardButtons::Escape)
        close_window();

    if (button == KeyboardButtons::_1)
    {
        d1.bullets.push_back(AmmoRound{AmmoRoundType::Pistol});
               
    }
    else if (button == KeyboardButtons::_2)
    {
        d1.bullets.push_back(AmmoRound{AmmoRoundType::Artillery});
    }
    else if (button == KeyboardButtons::_3)
    {
        d1.bullets.push_back(AmmoRound{AmmoRoundType::Fireball});
    }
    else if (button == KeyboardButtons::_4)
    {
        d1.bullets.push_back(AmmoRound{AmmoRoundType::Laser});
    }
}
