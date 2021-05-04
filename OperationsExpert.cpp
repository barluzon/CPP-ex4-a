#include "OperationsExpert.hpp"
#include "Player.hpp"
#include "string"
using namespace std;

namespace pandemic{
    OperationsExpert::OperationsExpert(const Board &board, const City &city): Player(board, city){}

    string OperationsExpert::role() {
        return "Name:";
    }
    Player &OperationsExpert::build() {
        return *this;
    }
}