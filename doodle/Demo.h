#pragma once
#include<vector>
#include"AmmoRound.h"

class Demo
{
        

public:
    AmmoRound              bullet{AmmoRoundType::Pistol};
    std::vector<AmmoRound> bullets;
    void Update();

};
