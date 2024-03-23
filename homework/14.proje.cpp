#include <iostream>
#include <cstdlib>
#include <ctime>
using namespace std;

class Die {
private:
    unsigned int seed;

public:
    Die() {
        seed = time(0);
    }

    int roll() const {
        return (rand_r(&seed) % 6) + 1;
    }
};

int main() {
    Die die;
    int totalpoints = 0 ;
    char choice;

    do {
    
        cout << "Do you want to contiune fishing? (y/n): ";
        cin >> choice;

        if (choice == 'y') {
        	int rollresult = die.roll() ;
        	cout <<" you caught item number " << rollresult << endl ;
        	
        	switch (rollresult) {
        		case 1 :
        			totalpoints +=10 ;
        			break ;
        		case 2 :
        			totalpoints +=5 ;
        			break ;
        		case 3 :
        			totalpoints +=1;
        			break ;
        		default :
        			cout << "you  caught nothing values " ;
			}
       	}
            
        }
    while (choice == 'y');

    cout << "Total points : " << totalpoints << endl;

    if (totalpoints > 20 ) {
        cout << "You are a master of fishing " << endl;
    } else if (totalpoints >=10) {
        cout << "it is not bad" << endl;
    } else {
        cout << "you make keep practising!" << endl;
    }




    return 0;
}
