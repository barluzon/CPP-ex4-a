#pragma once
#include "City.hpp"
#include "Color.hpp"
#include "Board.hpp"
#include "string"
#include <stdio.h>

using namespace std;

namespace pandemic{

    class Player{
        City curCity;
        Board mainBoard;
    public:
        Player(const Board &board, const City &city);
        ~Player(){};
        Player &drive(const City &city);
        Player &fly_direct(const City &city);
        Player &fly_charter(const City &city);
        Player &fly_shuttle(const City &city);
        Player &build();
        Player &discover_cure(const Color &color);
        Player &treat(const City &city);
        virtual std::string role () = 0;
        Player &take_card(const City &city);
    };
}