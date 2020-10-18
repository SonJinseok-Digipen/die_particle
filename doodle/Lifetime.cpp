
#include "lifetime.h"
void lifetime::update(double delta_time)
{
    life = life - (delta_time*200 );
    if (life < 0)
    {
        Is_Dead = true;
    }
}
