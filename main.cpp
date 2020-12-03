#include <iostream>
#include <stdlib.h>
#include <fstream>
using namespace std;
class Generator{ 
  public: 
  int n;
  void screenPrint(){ 
    cout<<"\nP\ta\ts\ts\tw\to\tr\td\tG\te\tn\te\tr\ta\tt\to\tr\n";
    cout<<"\n..type the length of password : ";
    cin>>n;
    cout<<"\n..saved to password.txt\n";
  }

  void passCreator(){ 
   ofstream data;
   data.open("password.txt");
   char letters[] = "abcdefghijklmnopqrstuvwxyzABCDEFGHIJKLMNOPQRSTUVWXYZ1234567890";
   for(int i=0;i<n;i++){
   char x = letters[rand()%62];
   data<<x;
   }
   data.close();
}  
};

int main(){ 
    Generator call; 
    call.screenPrint();
    call.passCreator();
 return 0; 
}
