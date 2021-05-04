#pragma once
#include "Player.hpp"
#include "City.hpp"
#include "string"
using namespace std;

namespace pandemic{

    class Medic : public Player{
        public:
        Medic(const Board &board, const City &city);
        string role();
        Player &treat(const City &city);
    };
}