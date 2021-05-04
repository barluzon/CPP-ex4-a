#pragma once
#include "Player.hpp"
#include "City.hpp"
#include "Board.hpp"
#include "string"
using namespace std;

namespace pandemic{

    class Scientist : public Player{
        int n;
    public:
        Scientist(const Board &board, const City &city, const int n);
        string role();
        Player &discover_cure(const Color &color);
    };
}