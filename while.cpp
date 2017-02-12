/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   while.cpp
 * Author: fredzhao
 *
 * Created on 2017年2月12日, 下午12:49
 */

#include <iostream>


/*
 * 
 */
int main(int argc, char** argv) {

    int sum = 0, val = 1;
    while (val <= 10){
        sum += val ;
        ++val;
    }
    std::cout << "Sum of 1 to 10 inclusive is " 
              << sum << std::endl;
    return 0;
}

