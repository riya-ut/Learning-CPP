// Topic:   Name space 
#include <iostream>
using namespace std;

namespace jp {
    float dollarValue = 108;        //1 USD = 108 Japanese yen
    double toDollars(float currencyUnits) {
        return currencyUnits / dollarValue;
    }

}

namespace cn {
    float dollarValue = 7;       //1 USD = 7 Chinese yuan

    double toDollars(float currencyUnits) {
        return currencyUnits / dollarValue;
    }
}


int main() {

    cout << "1 USD = " << jp::dollarValue << " yen" << endl;
    cout << "1 USD = " << cn::dollarValue << " yuan" << endl;

    cout << "8960 yen = " << jp::toDollars(8960)<< " USD" << endl;
    cout << "610 yuan = " << cn::toDollars(610) << " USD" << endl;

    return 0;
}
