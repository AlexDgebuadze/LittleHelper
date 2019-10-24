/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   CREATE.h
 * Author: alex
 *
 * Created on September 25, 2019, 12:55 AM
 */

#ifndef CREATE_H
#define CREATE_H





#include<iostream>

using namespace std;


string CreateDiv(string className){
    
   string code = "<div class=\"" + className + "\"></div> "; 
   return code;
}
string CreateP(string className){
   string code = "<p class=\"" + className + "\"></p> "; 
   return code;
}
string CreateP(string className,string input){
   string code = "<p class=\"" + className + "\">" + input + "</p>"; 
   return code;
}
string CreateH(string className){
   string code = "<h4" + "class=\"" + className + "\"></h4> "; 
   return code;
}
string CreateH(string className,string input){
   string code = "<h4" + "class=\"" + className + "\">" + input + "</h4>"; 
   return code;
}
#endif /* CREATE_H */
