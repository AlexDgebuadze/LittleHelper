/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   addJquery.h
 * Author: alex
 *
 */

#ifndef ADDJQUERY_H
#define ADDJQUERY_H





#include <iostream>
#include <fstream>
#include "FileMan.h"
#include "FileRWE.h"
using namespace std;

void addJQueryWithLink(string prjDest,string htmlFile){ //Jquery version 3.4.1
    string code =  "<script src=\"https://ajax.googleapis.com/ajax/libs/jquery/3.4.1/jquery.min.js\"></script>";
    
    cout<<"changing to : "<<prjDest<<endl;
     ChangeDirectory(prjDest);
     
    WriteInFile(htmlFile,"</html>",code); 
}
void npmJQueryInstall(string appDest){
    ChangeDirectory(appDest);
    const short checkInstallError = system("./InstallJquery.sh");
    checkInstallError == -1? cout<<"error in JQuery Install!"<<endl : cout<<"Jquery intalled succesfuly"<<endl;   
}      



#endif /* ADDJQUERY_H */
