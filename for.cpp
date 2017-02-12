/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   for.cpp
 * Author: fredzhao
 *
 * Created on 2017年2月12日, 下午1:02
 */

#include <iostream>

/*
 * 
 */
int main(int argc, char** argv) {
    int sum = 0;
    for (int val =1; val<=10;++val)
        sum += val;
    std::cout << "The sum of 1 to 10 inclusive is "
              << sum << std::endl;
    return 0;
}

