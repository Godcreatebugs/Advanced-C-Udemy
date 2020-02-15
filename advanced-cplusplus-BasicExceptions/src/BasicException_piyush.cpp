//============================================================================
// Name        : BasicEception.cpp
// Author      :
// Version     :
// Copyright   :
// Description : File for the BAsic exception like try and except for the python file.
//============================================================================

#include<iostream>

void MightGoWrong(){
  bool mistake=true;
  if (mistake=true){
    throw 3; // program runs as we have just used the throw keyword
  }
}



int main(int argc, char const *argv[]) {
  /* code */
  //try (){
  /////----------TRY AND CATCH STATEMENT
  try{
    MightGoWrong();
  }
  catch(int e){ //if it catches any integer
    std::cout<<"eroor code is "<<e<<std::endl;
  }
  std::cout<<"But code is still running"<<std::endl;
  //}
// 

  return 0;
}
