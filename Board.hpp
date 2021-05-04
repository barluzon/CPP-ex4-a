#pragma once
#include <unordered_map>
#include <ostream>
#include "City.hpp"
#include "Color.hpp"

namespace pandemic{

    class Board{
        public:
        std::unordered_map<City, int> cities;
        int &operator[](City c);
        friend std::ostream &operator<<(std::ostream &out, const Board &board);
        static bool is_clean();
        void remove_cures();

    };
}
