#pragma once
#include "Player.hpp"
#include "City.hpp"
#include "string"
using namespace std;

namespace pandemic{

    class GeneSplicer : public Player{
        public:
        GeneSplicer(const Board &board, const City &city);
        string role();
        Player &discover_cure(const Color &color);
    };
}