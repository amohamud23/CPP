//
//  main.cpp
//  raisepower
//
//  Created by Abdi Mohamud on 8/24/18.
//  Copyright © 2018 Abdi Mohamud. All rights reserved.
//

#include <iostream>
#include <math.h>
using namespace std;

int main(int argc, const char * argv[]) {

    int base;
    int exp;
    int result;
    cout << "Enter base number : ";
    cin >> base;
    cout << endl;
    cout << "Enter exponent: ";
    cin >> exp;
    cout << endl;
    
    result = pow(base, exp);
    
    cout << result << endl;
    
    return 0;
    
    
}
