#include <iostream>
#include <string>

using namespace std;

int main() {
    //declarations
    string answer = "";
    int score = 0;
    //get user input

    //Question 1 (Q1)
    cout << "How long is an Olympic swimming pool (in meters) ? \n";
    cin >> answer;
    if (answer == "50")
    {
        cout << "Correct! \n";
        score += 1;
    }
       
    else
        cout << "Incorrect. The answer is 50. \n";

    cin.ignore();
    //Q2
    cout << "Name one country made up the original Axis powers in World War II? \n";
    cin >> answer;
    if (answer == "Germany" || answer == "Italy" || answer == "Japan") {
        cout << "Correct! \n";
        score += 1;
    }
        
    else
        cout << "Incorrect. The answer is either Germany, Italy or Japan. \n";
    answer = "";
    cin.ignore();


    //Q3
    cout << "What is the name of the World's largest ocean? \n";
    cin >> answer;
    if (answer == "Pacific Ocean") {
        cout << "Correct! \n";
        score += 1;
    }
    else
        cout << "Incorrect. The answer is Pacific Ocean. \n";
    answer = "";
    cin.ignore();

    //Q4 
    cout << "Which Disney Princess talks to the most animals? \n";
    cin >> answer;
    if (answer == "Snow White") {
        cout << "Correct \n";
        score += 1;
    }
        
    else
        cout << "Incorrect. The answer is Snow White. \n";
    answer = "";
    cin.ignore();


    //Q5
    cout << " 'Stars and Stripes' is the nickname of the flag of which country ? \n";
    cin >> answer;
    if (answer == "The United States of Americas" || answer == "The U.S of America") {
        cout << "Correct \n";
        score += 1;
    }
       
    else
        cout << "Incorrect. The answer is The United States of Americas. \n";
    
    cin.ignore();

    //output
    cout << "You have scored totally " << score << " out of 5" << endl;

    return 0;
}
