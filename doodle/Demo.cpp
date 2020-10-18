
#include "Demo.h"


void Demo:: Update() 
{ 
	for (const auto& b : bullets)
    b.Draw();
   for (auto& b : bullets)
    b.Update(doodle::DeltaTime);
   for (auto& b : bullets)
   {
       if(b.particle.life.Is_Dead==true)
       {
           bullets.pop_back();
       }
   }
   
  }
