/* 
 * File:   main.cpp
 * Author: alex
 *
 */

#include <iostream>
#include <string>


#include "addSASS.h"
#include "addJquery.h"


using namespace std;

string CreateCoreFiles(string DirectoryName ,string FileName,string dest);

int main() {
    string appDest = getenv("PWD");
    string projectName;
    string FileName;
    string dest;
    string prjDest;
    
    short in;
    string giveMeDest;
    
    
    cout<<"Create Project : 1"<<'\t'; cout<<"I Already Have : 2" <<endl; 
     
    cin>>in;
    if(in == 1){
    cout<<"project name (Directory) : " <<endl;
    cin>>projectName; 
    cout<<"HTML file name : " <<endl;
    cin>>FileName;
    cout<<"destination"<<endl;
    cin>>dest;
   
    prjDest = CreateCoreFiles(projectName,FileName,dest);
    in = 99;
    while(in != 0){
     cout<<"Add Sass : 1 "<<'\t';
     cout<<"Add Jquery(with Link) : 2"<<'\t';
     cout<<"Add Jquery : 3" <<endl;
     cin>>in;
     if(in==1){setupSASS(appDest,dest + '/' + projectName);}
     else if(in==2){addJQueryWithLink(dest + '/' + projectName,FileName);}
     else if(in==3){npmJQueryInstall(appDest);}}
    
  }else if(in == 2){
  //    while(in != 0){    
     cout<<"in second section "<<endl;
     cout<<"Add Sass : 1 "<<'\t';
     cout<<"Add Jquery(with Link) : 2"<<'\t';
     cout<<"Add Jquery : 3" <<endl;
     cin>>in;
     cout<<"give me directions!"<<endl;
     cin>>giveMeDest;
     if(in==1){setupSASS(appDest,giveMeDest);}
     else if(in==2){cout << "html file name : "<<endl; cin>>FileName; addJQueryWithLink(giveMeDest,FileName);}
     else{npmJQueryInstall(appDest);}}
  //}

  
   
  

            
    
    
    return 0;
}




string CreateCoreFiles(string DirectoryName ,string FileName,string dest){
    ChangeDirectory(dest);      
    CreateDictionary("",DirectoryName);
    ChangeDirectory(DirectoryName);
string firstCode = 
"<html lang=\"en\">   <head> <meta charset= \"UTF-8\"> <meta name=\"viewport\" content=\"width=device-width, initial-scale=1.0\"> <meta http-equiv=\"X-UA-Compatible\" content=\"ie=edge\">  <link rel=\"stylesheet\" href=\"styles/style.css\"> </head> <body> </body> </html>"  ;

CreateFile("",FileName,"html",firstCode);
   CreateDictionary("","styles");
   CreateDictionary("","Img");
   CreateDictionary("","Fonts");
   CreateDictionary("","JS");
   CreateFile(dest + "/" + DirectoryName + "/styles","style","css","");
   cout<<"Done!"<<endl;
   string prjDest = getenv("PWD");
   

   
   
 return prjDest; 
   
}
