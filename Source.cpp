#include <iostream>
#include <string>
#include <vector>
#include<ctime>
#include<cstdlib>
#include<time.h>

using namespace std;
struct TriviaQuestion {
    string question;
    vector<string> choices;
    int correct_choice;
}; string user_Input;

int main() {

    char tryAgain = 'y';
    // Set up the trivia questions
    vector<TriviaQuestion> trivia_questions = {
        {
            "How long is an Olympic swimming pool (in meters)?",
            {"45", "50", "100", "55"},
            0
        },
        {
            "What geometric shape is generally used for stop signs?",
            {"Octagon", "Hexogon", "Pentogon", "Decogon"},
            0
        },
        {
            "What is cynophobia?",

            {"fear of cats", "fear of cows", "fear of dogs", "fear of crabs"},
            0
        }
    };

    //  random number generator
    srand(unsigned(time(0)));



    // Welcome the user to the chatbot
    cout << "Hello! I'm a trivia bot. What's your name?" << endl;
    getline(cin, user_Input);

    cout << "Nice to meet you, " << user_Input << endl;
   
    
    while (true) {
        // Choose a random question from the list of trivia questions
        int random_question_index = rand() % trivia_questions.size();
        TriviaQuestion& question = trivia_questions[random_question_index];

        // Print the question and choices
        cout << question.question << endl;
        for (int i = 0; i < question.choices.size(); i++) {
            cout << i + 1 << ") " << question.choices[i] << endl;
        }

        // Ask the user for their answer
        int user_choice;
        cout << "Enter your answer (1-" << question.choices.size() << "): ";
        cin >> user_choice;

        // Check if the answer is correct
        if (user_choice == question.correct_choice + 1) {
            cout << "Correct! Well done." << endl;
        }
        else {
            cout << "Incorrect. The correct answer is: " << question.choices[question.correct_choice] << endl;
        }
        // Ask the user if they want to play again
        while (tryAgain == 'y')
        {
            cout << "Would you like to try again? ";
            cin >> user_Input;
            if (user_Input == "n" || user_Input == "N")
            {
                tryAgain = 'n';
                cout << endl;
            }

        }
        cout << "Thanks for playing! Goodbye." << endl;
        cout << endl;



    }
    return 0;
}
