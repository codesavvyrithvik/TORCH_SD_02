#include <iostream>
#include <ctime>
#include <random>

using namespace std;

int main() {
  //Generate a random number 
  srand(time(NULL));
  int random = rand() % 1000000 + 1;
  
  //Initialize the guess variable
  int userInput;
  cout<< "Enter your guess (between 1 and 1000000 ) : "<<endl;
  cin >> userInput;

  //Initializing the number of guesses
  int numGuesses = 1;
  
  //Check if the guess is correct
  while (userInput != random){
    if (userInput > random){
      cout<<"Too high!"<<endl;
    }
    else{
      cout<<"Too low!"<<endl;
    }
    numGuesses +=1;
    
    cout<< "Enter a new guess: "<<endl;;
    cin >> userInput;
    
  }
  cout<< "You got it in "<<numGuesses<<" guesses!"<<endl;

  
}