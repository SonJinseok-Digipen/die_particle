
class vec2
{
  
 public:
    double x{0};
    double y{0};
    vec2() = default;
    vec2(double x1,double x2);
    vec2(double x1);
    void addTo(vec2 b);
    void Multiplyby(double);
    friend vec2 Add(vec2 a, vec2 b);
    friend vec2 Multiply(vec2 a, double scale);
};

//vec2 Add(vec2 a, vec2 b);


vec2 Multiply(vec2 a, double scale);


