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
     int score = 0;
    string user_Input;
    char tryAgain = 'y';
    // Set up the trivia questions
    vector<TriviaQuestion> trivia_questions = {
        {
            "How long is an Olympic swimming pool (in meters)?",
            {"45", "50", "100", "55"},
            1
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
      srand(time(NULL));
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
            score++;
        }
        else {
            cout << "Incorrect. The correct answer is: " << question.choices[question.correct_choice] << endl;
        }
        

        while (tryAgain=='y')
        {
            cout << "Would you like to try again? (yes/no) ";
            cin >> user_Input;

            if (user_Input=="No"|| user_Input=="no")
            {
                tryAgain = 'n';
               
                cout << endl;
            }
            else
            {
                srand(time(NULL));
                int random_question_index = rand() % trivia_questions.size();
                TriviaQuestion& question = trivia_questions[random_question_index];
                cout << "Thanks for playing! Goodbye." << endl;
                
            }

        }
  

    }
    return 0;
}
