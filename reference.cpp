/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   reference.cpp
 * Author: fredzhao
 *
 * Created on 2017年2月13日, 下午1:05
 */

#include <iostream>

/*
 * 
 */
int ival = 1024;
int &refVal = ival;

int i = 43;
const int &r = 42;
const int &r2 = r + i;
double dval = 3.14;
const int &ri = dval;

int main(int argc, char** argv) {

    refVal += 2;
    i = 100;
    std::cout << ival << " " 
              << r    << " "
              << r2   << " "
              << ri << std::endl;
    return 0;
}

