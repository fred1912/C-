/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   iostream.cpp
 * Author: fredzhao
 *
 * Created on 2017年2月12日, 下午12:29
 */

#include <iostream>

/*
 * 
 */
int main(int argc, char** argv) {

    std::cout << "Enter two numbers:" << std::endl;
    int v1, v2;
    std::cin >> v1 >> v2;
    std::cout << "The sum of " << v1 << " and " << v2
              << " is " << v1+v2 << std::endl;
    return 0;
}

