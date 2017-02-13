/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   enum.cpp
 * Author: fredzhao
 *
 * Created on 2017年2月13日, 下午2:57
 */

#include <iostream>

/*
 * 
 */
int main(int argc, char** argv) {
    enum open_modes {
        input,output,append
    };
    open_modes Input = input;
    std::cout << Input << std::endl;
    return 0;
}

