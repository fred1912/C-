/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   read_unknownQuantity.cpp
 * Author: fredzhao
 *
 * Created on 2017年2月12日, 下午1:29
 */

#include <iostream>


/*
 * 
 */
int main(int argc, char** argv) {
    int sum=0, value;
    while (std::cin >> value)
        sum += value;
        std::cout << "Sum is: " << sum << std::endl;
        return 0;
    
    return 0;
}

