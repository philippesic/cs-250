//
//  colorPicker.h
//  Week 12 Prog 5
//
//  Created by Pippo Pesic on 11/3/22.
//

#ifndef colorPicker_h
#define colorPicker_h

class colorPicker {

private:

string colorArray[8];

public:

colorPicker() {

// Defalut Consructor assign values to array

// Use 8 assignment statements to assign each color to the color array

colorArray[0] ="Red";

colorArray[1] ="Green";

colorArray[2] ="Purple";

colorArray[3] ="Yellow";

colorArray[4] ="Orange";

colorArray[5] ="Indigo";

colorArray[6] ="Blue";

colorArray[7] ="Gray";

}

void printAllColors() {

// use for loop to print out all colors

for (int i = 0 ;i < 8; i++)

{ cout << colorArray[i] << endl;}

}

string randomColor() {

   srand((unsigned)time(0));

   // pick a random number between 0 and 7

   int i =0;

   i = rand()%7;

   return colorArray[i];

}

};

#endif /* colorPicker_h */
