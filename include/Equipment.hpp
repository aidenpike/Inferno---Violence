#ifndef EQUIPMENT_HPP
#define EQUIPMENT_HPP

#include <iostream>
#include <vector>
#include <map>
#include <memory>

namespace inferno {
    class Player {
        public:
            Player(int, int, int, int); //Health, defense, damage, mana
            
            void set_equipment(std::unique_ptr<Equipment> equipment);
        private:
            std::unique_ptr<Equipment> equipment;
    };

    class Equipment : public Player {
        public:
            ~Equipment();
    };
}; //Namespace inferno
#endif //EQUIPMENT_HPP