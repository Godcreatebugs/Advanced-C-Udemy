//============================================================================
// Name        : BasicEception.cpp
// Author      :
// Version     :
// Copyright   :
// Description : File for the BAsic exception like try and except for the python file.
//============================================================================

#include<iostream>

void MightGoWrong(){
  bool error1=false;
  bool error2=true;
  bool error3=true;
  if (error1)
    throw 3; // program runs as we have just used the throw keyword
  if (error2)
    throw "This is constant character error";
  if (error3)
    throw std::string("This is a string Error");

//EVEN AFTER ONE IF STATEMENT EXECUTED THE FUNCTION IS EXITED AND YOU CAN EVEN MAKE A NESTED FUNCTION.
    }



int main() {
  /* code */
  //try (){
  /////----------TRY AND CATCH STATEMENT
  try{
    MightGoWrong();
  }
  catch(int e){ //if it catches any integer
    std::cout<<"eroor code is "<<e<<std::endl;
  }
  catch(char const* e){
    std::cout << "Eroor is character error" << '\n';
}
  catch (std::string e){
    std::cout<< "This is a string error"<<"\n";
  }
  std::cout<<"But code is still running"<<std::endl;
  //}
//

  return 0;
}
