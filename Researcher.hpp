#pragma once
#include "Player.hpp"
#include "City.hpp"
#include "string"
using namespace std;

namespace pandemic{

    class Researcher : public Player{
        public:
        Researcher(const Board &board, const City &city);
        string role();
        Player &discover_cure(const Color &color);
    };
}