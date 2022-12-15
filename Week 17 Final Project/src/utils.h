//
//  utils.h
//  temp
//
//  Created by Pippo Pesic on 12/11/22.
//

#include <string>
#include <iomanip>
using namespace std;

    // Randomizes the order of words
    void shuffleArrayInPlace(string arr[], int size) {
        srand(time(0));
        for(int i = 0; i < size; i++){
            
            int lastIndex = size - i - 1;
            
            int randomIndex = rand() % (lastIndex + 1);
            //swap
            string temp = arr[lastIndex];
            arr[lastIndex] = arr[randomIndex];
            arr[randomIndex] = temp;
        }
    }
    
    // check if arr contains a value
    bool contains(string arr[], int size, string val) {
        for(int i = 0; i < size; i++){
            if(arr[i] == val){
                return true;
            }
        }
        return false;
    }
