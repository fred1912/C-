/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   pow.cpp
 * Author: fredzhao
 *
 * Created on 2017年2月12日, 下午5:52
 */

#include <iostream>

/*
 * 
 */
int main(int argc, char** argv) {
    
    int value = 2;
    int pow = 1;
    int result = 1;
    for (int cnt = 0; cnt != pow;++cnt)
        result *=value;
    std::cout << value 
              << " raised to the power of "
              << pow << ": \t"
              << result << std::endl;
    return 0;
}

