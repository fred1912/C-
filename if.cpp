/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   if.cpp
 * Author: fredzhao
 *
 * Created on 2017年2月12日, 下午1:11
 */

#include <iostream>

/*
 * 
 */
int main(int argc, char** argv) {

    std::cout << "Enter two numbers: " << std::endl;
    int v1,v2;
    std::cin >> v1 >> v2;
    int lower, upper;
    if (v1<=v2) {
        lower = v1;
        upper = v2;
    }
    else {
        lower = v2;
        upper = v1;
    }
    int sum = 0;
    int val=0;
    for (val=lower;val<=upper;++val)
        sum = sum+val;
    std::cout << "Sum of " << lower 
              <<  " to "   << upper
              << " inclusive is "
              << sum << std::endl;
    return 0;
}

