#include <iostream>
#include <iomanip>

int main() {
    double amountUSD{0.0};
    double exchangeRate{0.0};
    double amountKES{0.0};
    std::cout <<"Enter the amount you have in USD: "<<std::endl;
    std::cin >>amountUSD;

    std::cout <<"How much is one dollar in kenyan shillings(KES): "<<std::endl;
    std::cin >>exchangeRate;

    amountKES = amountUSD * exchangeRate;
    std::cout <<"Total: "<<std::fixed<<std::setprecision(2)<<amountKES<<std::endl;
    return 0;

}