//
//  main.cpp
//  findnumberVector
//
//  Created by Abdi Mohamud on 8/13/18.
//  Copyright © 2018 Abdi Mohamud. All rights reserved.
//

#include <iostream>
#include <vector>

using namespace std;

int main() {
    vector<int> myvector = {1,2,3,4,5,6,7,8};
    
    myvector.push_back(1);
    myvector.push_back(2);
    myvector.push_back(3);
    
    for ( vector<int>::iterator i = myvector.begin(); i != myvector.end(); ++i)
    {
        cout << *i;
    }
    
    return 0;
}
