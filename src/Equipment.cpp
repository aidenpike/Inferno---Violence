#include "../include/Equipment.hpp"

namespace inferno {
    int Equipment::return_line_count(std::string file_name){
        std::ifstream o_equipment; 
        int line_count = 0;

        o_equipment.open(file_name, std::ios::in);

        if (o_equipment.is_open()){
            while (!o_equipment.eof()){
                line_count++;
            }
        }
        else {
            std::cout << "Error: return_line_count() could not open file \"" << file_name << "\".\n";
        }

        o_equipment.close();

        return line_count;
    }

    int Equipment::return_random_int(int minimum, int maximum){
        std::random_device random_seed;
        std::mt19937 gen(random_seed());
        std::uniform_int_distribution<> generate_random_int(minimum, maximum);

        return generate_random_int(random_seed);
    }
};