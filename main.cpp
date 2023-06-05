#include <iostream>
using namespace std;

#include "student.h"

int main(int argc, char* argv[]) {
  int n= (argc-1)/3;
  student *pt_std=new student[n];
  int i;
  //./aout monkey 20 3.5 Art 15 2.5
  //*Try to finish  OOPIntro-with-array-and-pointer
  //(Assignment 5--> similar to 4
  for(i=1;i<argc;i+=3)   {
      (*pt_std).set_all(argv[i],atoi(argv[i+1]),atof(argv[i+2]));
      pt_std++;
   }
  
  pt_std -= n;

  student max;
  
  for(int i = 0; i < n; i++){
    if(i == 0){
      max = pt_std[i];
    }
    if(pt_std[i].get_score() > max.get_score()){
        max = pt_std[i];
    }
  }

  for(int i = 0; i < n; i++){
    if(max.get_score() == pt_std[i].get_score()){
      pt_std[i].print_all();
    }
  }
}
  
  


