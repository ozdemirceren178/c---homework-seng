#include <iostream>

class NumberArray {
private:
    int size;
    double *arr;

public:
    NumberArray(int s) : size(s) {
        arr = new double[size];
    }
    ~NumberArray() {
        delete[] arr;
    }

    void storeNumber(int index, double value) {
        if (index >= 0 && index < size)
            arr[index] = value;
        else
            std::cout << "Index out of range." << std::endl;
    }

  
    double retrieveNumber(int index) {
        if (index >= 0 && index < size)
            return arr[index];
        else {
            std::cout << "Index out of range." << std::endl;
            return 0.0; 
    }

   
    double getHighest() {
        double highest = arr[0];
        for (int i = 1; i < size; ++i) {
            if (arr[i] > highest)
                highest = arr[i];
        }
        return highest;
    }

    double getLowest() {
        double lowest = arr[0];
        for (int i = 1; i < size; ++i) {
            if (arr[i] < lowest)
                lowest = arr[i];
        }
        return lowest;
    }

   
    double getAverage() {
        double sum = 0.0;
        for (int i = 0; i < size; ++i) {
            sum += arr[i];
        }
        return sum / size;
    }
};

int main() {
    NumberArray arr(5);

  
    arr.storeNumber(0, 10.5);
    arr.storeNumber(1, 20.3);
    arr.storeNumber(2, 15.7);
    arr.storeNumber(3, 12.9);
    arr.storeNumber(4, 18.2);

    cout << "Number at index 0: " << arr.retrieveNumber(0) << endl;
    cout << "Number at index 3: " << arr.retrieveNumber(3) << endl;

    cout << "Highest value: " << arr.getHighest() << endl;
    cout << "Lowest value: " << arr.getLowest() << endl;
    cout << "Average value: " << arr.getAverage() << endl;

    return 0;
}
