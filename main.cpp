//
//  main.cpp
//  C++ PROGRAMS
//
//  Created by Eshita Kalsi on 07/04/19.
//  Copyright © 2019 Eshita Kalsi. All rights reserved.
//

#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;

vector<string> split_string(string);

// Complete the miniMaxSum function below.
void miniMaxSum(vector<int> arr) {
    sort(arr.begin(),arr.end());
    long int sum1=0,sum2=0;
    for(int i=1;i<arr.size();i++)
    {
        sum1+=arr[i];
    }
    for(int i=arr.size()-2;i>=0;i--)
    {
        sum2+=arr[i];
    }
    
    cout<<sum2<<" "<<sum1;
    
    
}

