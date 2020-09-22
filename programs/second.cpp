#include <iostream>
#include <string>
using namespace std;

int main() {
  string combo = "abcdefghijklmnopqrstuvwxyz";
  string key;
  cout<<"Input key\n";
  cin>>key;

  if (key.size() == 4){
    //cout<<"Program working\n";
    if (key[0] == combo[13]){
      //cout<<"Program working\n";
      if (key[1] == combo[11]){
          if (key[2] == combo[10]){
              if (key[3] == combo[13]){
                  cout<<"Access Granted\n";
                  cout<<key<<endl;
              }  else{
    cout<<"No Access\n";
  }
          }
  else{
    cout<<"No Access\n";
  }
      }
  else{
    cout<<"No Access\n";
  }
    }
  else{
    cout<<"No Access\n";
  }
  }
  else{
    cout<<"No Access\n";
  }
  return 0;
}
