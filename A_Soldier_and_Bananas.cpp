#include <iostream>

int main() {
    int k, n, w;
    std::cin >> k >> n >> w;

   
    int totalCost = k * (w * (w + 1) / 2);

   
    int borrowedMoney = std::max(0, totalCost - n);

    std::cout << borrowedMoney << std::endl;

    return 0;
}
