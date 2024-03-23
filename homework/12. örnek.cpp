#include <iostream>
#include <cstdlib> 
#include <ctime>  
#include<string>
class Coin {
private:
    string sideUp;

public:
    Coin() {
        toss(); 
}
    void toss() {
    
        int randomNum = rand() % 2;
        if (randomNum == 0)
            sideUp = "heads";
        else
            sideUp = "tails";
    }
    string getSideUp() const {
        return sideUp;
    }
};

int main() {
    srand(time(0));

    Coin coin;

    std::cout << "Initially facing up: " << coin.getSideUp() << std::endl;

    int headsCount = 0;
    int tailsCount = 0;

    for (int i = 0; i < 20; ++i) {
        coin.toss(); 
        cout << "Toss " << i + 1 << ": " << coin.getSideUp() << endl;

        if (coin.getSideUp() == "heads")
            headsCount++;
        else
            tailsCount++;
    }

    cout << "Heads count: " << headsCount << std::endl;
    cout << "Tails count: " << tailsCount << std::endl;

    return 0;
}

