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

void findnumber(vector<int> arr, int k)
{
//
    int i = 0;
    int a = 0;
    
    //myvector.push_back(1);
    //myvector.push_back(2);
    //myvector.push_back(3);
    
    for ( vector<int>::iterator i = arr.begin(); i != arr.end(); ++i)
    {

        if (k == *i)
        {

            a = 1;
        }

        }
    if (a == 1)
        cout << "YES" << endl;
    else
        cout << "NO" << endl;
    
    
};

int main() {
   vector<int> myvector = {1,2,3,4,5,6,7,8};
    findnumber(myvector, 5);
   
    
    
    
    return 0;
}
