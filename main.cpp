#include <iostream>

int main() {
    int residents, floor_res, sum = 0;
    int res[5];
    std::size_t size_res = sizeof(res) / sizeof(int);
    std::cout << "Input total number of residents in the building: ";
    std::cin >> residents;
    std::cout << "Input number of residents on each floor: ";
    std::cin >> floor_res;
    for (int i = 0; i < size_res; ++i) {
        res[i] = floor_res;
    }
    for (int i = 0; i < size_res; ++i) {
        sum += res[i];
    }
    int percent = sum * 100 / residents;
    std::cout << "People on self-isolation: " << percent << "%";
    return 0;
}
