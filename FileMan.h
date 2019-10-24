/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   FileMan.h
 * Author: alex
 *
 */

#ifndef FILEMAN_H
#define FILEMAN_H





#include <iostream>
#include <string>
#include <fstream>
#include <sys/stat.h>
#include <unistd.h>

using namespace std;

void CreateFile(string dest , string fileName,string fileType,string PutInside){
    string parse = fileName + '.'  + fileType;  
    ofstream ofs = dest.length()>0 ? ofstream(dest + '/' + parse):  ofstream(parse);   //ofstream(dest + '/' + parse);
    ofs<<PutInside<<endl;
    ofs.close();
}
void CreateDictionary(string Dest , string name){                                   //Creates dictionary only in LINUX!
    
  const int dir_err = Dest.length()>0 ? mkdir((Dest +'/'+name).c_str(), S_IRWXU | S_IRWXG | S_IROTH | S_IXOTH) : mkdir((name).c_str(), S_IRWXU | S_IRWXG | S_IROTH | S_IXOTH); 
  if (-1 == dir_err){
    printf("Error creating directory!n");
    exit(1);
}
}
void ChangeDirectory(string destination){
short changeDirError = chdir(destination.c_str());
   if(changeDirError!= 0 ){
    cout<<"error in changing Directory!"<<endl;
    exit(1);
}
}





#endif 
