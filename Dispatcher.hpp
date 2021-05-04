#pragma once
#include "Player.hpp"
#include "City.hpp"
#include "string"
using namespace std;

namespace pandemic{

    class Dispatcher : public Player{
        public:
        Dispatcher(const Board& board, const City &city);
        string role();
        Player &fly_direct(const City &city);
    };
}