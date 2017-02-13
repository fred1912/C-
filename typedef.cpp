/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   typedef.cpp
 * Author: fredzhao
 *
 * Created on 2017年2月13日, 下午2:02
 */

#include <iostream>

/*
 * 
 */
int main(int argc, char** argv) {
    typedef double wages;
    typedef int exam_score;
    typedef wages salary;
    
    wages hourly,weekly;
    salary monthly;
    
    hourly = 1.5e2;
    monthly = 2.8e10;
    
    std::cout << hourly << " "
              << monthly << " " << std::endl;
    return 0;
}

