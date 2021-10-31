#include <iostream>
using namespace std;
char response;
bool playerDies(); // activates if certain condtions are met
void Text(); // this will hold all the text, with do while statements 

// main() will hold the beginning
int main() {

  char start[5];

  cout << "Welcome to Life, a totally original game! Type in 'start' to start. Type in 'quit' to leave Life\n";
  cin >> start;
  Text();
  
  }
