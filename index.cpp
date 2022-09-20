#include <iostream>
#include <string>

using namespace std;

int main() {

  string userName; // For users name input
  string candyAnswer; // For candy question input
  string sportsAnswer; // For sports question input
  string shoeAnswer; // For shoe question input
  string foodAnswer; // For food question input
  
  string undefine1; // Not gonna use this string for anything
  
// Greeting 
  
  cout << "Hello user, what is your name?" << endl;
    cin >> userName; // Give the string "userName" the value of what the user inputed into the program

  cout << "Thank you, " << userName << endl; // Thanking the user


// Question #1
  
  cout << userName << ", do you like candy?" << endl;
    cin >> candyAnswer;
  
  if(candyAnswer == "yes") { // Checking what is inputed
    
    cout << "Yikes you really like candy " + userName << " I heard that candy is bad for your body thats why I don't like it." << endl;

  cout << "Why do you even like candy " + userName << "... Nevermind don't tell me I don't care."<< endl;
  }
  else if(candyAnswer == "no") { // Checking what is inputed
    
  cout << "I don't like candy either " + userName << ", I'd rather eat fruits and vegtables rather than candy." << endl;
  }
  else { // If something besides normal answers is inputed 
    cout << "What kind of answer is that " + userName << "." << endl;
  }

// Question #2

  cout << userName + ", do you watch sports?" << endl;
   cin >> sportsAnswer;

  if(sportsAnswer == "yes") { // Checking to see what the answer was to the sports question
    cout << "Me too " + userName << ", I like watching basketball what do you watch?" << endl;
      cin >> undefine1;
    
    if(undefine1 == "basketball") { // Checking to see if the input is basketball
      cout << "You like basketball too " + userName << ", thats awsome!" << endl;
      }
    else {
      cout << "Nice, but basketball is better tho." << endl;
    }
  }
  else if(sportsAnswer == "no") { // Checking to see if the input entered is no
    cout << "Your lame " + userName << ", you should watch some type of sport whenever you can." << endl;  
  }
  else { // If the answer is not "no" or "yes" outputs this
    cout << "You should really think of a better answer next time " + userName << "." << endl;
  }
  
// Question #3

  cout << userName +", Do you like Nike shoes?" << endl;
    cin >> shoeAnswer;

  if(shoeAnswer == "yes") { // Checking to see if the input is yes
    cout << "That's awsome," + userName << " I like Nike shoes too... You think you can buy me some?.. You know what nevermind your too broke." << endl;
  }
  else if(shoeAnswer == "no") { // Checking to see if the input is no
    cout << "What is wrong with you " + userName << " everybody likes Nike shoes." << endl;
  }
  else { // if the answer is not "yes" or "no" outputs this
    cout << userName << ", you need to learn how to answer questions when I ask them." << endl;
  }

// Question #4
  cout << userName << ", whats you favorite meal?" << endl;
  // Asking the user for input and then assigning it to foodAnswer
    getline(cin, foodAnswer);
    getline(cin, foodAnswer);

  // Whatever was inputed it outputed 
  cout << "Ewwww " + userName << " why do you like " + foodAnswer << " that is disgusting!" << endl;

// Closing
  cout << "Goodbye " + userName + "!" << " It wasn't nice talking to you.";
  
return 0;
   
}
