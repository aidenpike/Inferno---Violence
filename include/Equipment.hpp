#ifndef EQUIPMENT_HPP
#define EQUIPMENT_HPP

#include <iostream>
#include <fstream>
#include <random>
#include <sstream>

namespace inferno {
    class Equipment {
        public:
            int return_line_count(std::string); //Returns amount of lines in specified file
            int return_random_int(int, int); //Min, max
            
            std::string* tokenize_string(const std::string&, char);
            std::string get_equipment(int, std::string, int); //Creates an object and returns an attribute based on a number provided, the specified file, and an int denoting the index of the attribute

            class Armor {
                public:
                    Armor(std::string, int, int); //Name, Defense Added, Mana Boost

                    std::string get_name();
                    int get_defense();
                private:
                    std::string m_name;
                    int m_defense;
                    int m_mana_boost;
            };
            
            class Weapon {
                public:
                    Weapon(std::string, int, int); //Name, Damage Added, Mana Use

                    std::string get_name();
                    int get_damage();
                    int get_mana_use();
                private:
                    std::string m_name;
                    int m_damage;
                    int m_mana_use;
            };
    };
}; //Namespace inferno
#endif //EQUIPMENT_HPP