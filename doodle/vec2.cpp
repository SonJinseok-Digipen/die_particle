
#include "vec2.h"
vec2::vec2(double x1, double x2) : x{x1}, y{x2} {};
vec2::vec2(double x1) : vec2(x1, x1){};
void vec2::addTo(vec2 b)
{ x = x + b.x;
  y = y + b.y;
}
void vec2::Multiplyby(double scale)
{
    x = x * scale;
    y = y * scale;
}

//vec2 Add(vec2 a, vec2 b)
//{
//    vec2 new_vec2(a.x + b.x, a.y + b.y);
//    return new_vec2;
//}
vec2 Multiply(vec2 a, double scale)
{
    vec2 new_vec2(a.x * scale, a.y * scale);
    return new_vec2;
}