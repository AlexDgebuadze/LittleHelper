/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   FileRWE.h
 * Author: alex
 *
 */

#ifndef FILERWE_H
#define FILERWE_H

#include <iostream>
#include <string>


using namespace std;


void WriteInFile(string fileDestWithName,string Pafter,string code){
    ifstream ifs = ifstream(fileDestWithName + ".html");
    cout<<fileDestWithName + ".html"<<endl;
     string part1;
    string part2;
    string text;
  while(!ifs.eof()){
        getline(ifs,text);
        part1 = part1 + '\n' + text;
        cout<<part1 <<endl;
      if(text == Pafter){
          cout<<part1<<endl;
              part2 = part1;
              part1="";
      }
   
  }
      ifs.close();
    
      cout<<part1<<endl;
      cout<<"-------------------"<<endl;
      cout<<part2<<endl;
   
      
      ofstream ofs = ofstream(fileDestWithName + ".html");
      ofs<<std::noskipws<<part2<<endl; 
      ofs<<std::noskipws<<code<<endl;
      ofs<<std::noskipws<<part1;
      ofs.close();
    
    
}






#endif /* FILERWE_H */

