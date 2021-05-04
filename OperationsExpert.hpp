#pragma once
#include "Player.hpp"
#include "City.hpp"
#include "string"
using namespace std;

namespace pandemic{

    class OperationsExpert : public Player{
        public:
        OperationsExpert(const Board &board, const City &city);
        string role();
        Player &build();
    };
}