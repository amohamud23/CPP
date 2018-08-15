//
//  main.cpp
//  vectorsorting
//
//  Created by Abdi Mohamud on 8/15/18.
//  Copyright © 2018 Abdi Mohamud. All rights reserved.
//

#include <iostream>
#include <vector>
using namespace std;
int main() {
    // insert code here...
    
    vector<int> myvector = {12,22,34,4,5,6,7,8};
    sort(myvector.begin(), myvector.end());
    
    for(vector<int>::iterator i = myvector.begin(); i != myvector.end(); ++i)
    {
        cout << *i;
    }
    
    return 0;
}
