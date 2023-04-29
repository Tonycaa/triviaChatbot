#include <iostream>
#include <fstream>
#include <string>
#include <vector>
#include <cstdlib>
using namespace std;

struct Question {
    string question;
    string answer;
};

void readQuestions(vector<Question>& questions, string filename) {
    ifstream file(filename);
    if (!file.is_open()) {
        cout << "Error: Could not open file " << filename << endl;
        return;
    }
    string line;
    int counter = 0;
    while (getline(file, line) && counter < 13) {
        size_t pos = line.find('@');
        if (pos == string::npos) {
            cout << "Error: Invalid line in file" << endl;
            continue;
        }
        Question q;
        q.question = line.substr(0, pos);
        q.answer = line.substr(pos + 1);
        questions.push_back(q);
        counter++;
    }
    file.close();
}

void askQuestions(const vector<Question>& questions, int numQuestions) {
    int score = 0;
    string answer;
    for (int i = 0; i < numQuestions; i++) {
        int index = rand() % questions.size();
        cout << questions[index].question << endl;
        cin >> answer;
        if (answer == questions[index].answer) {
            cout << "Correct!" << endl;
            score++;
        }
        else {
            cout << "Incorrect. The correct answer is " << questions[index].answer << endl;
        }
    }
    cout << "You scored " << score << " out of " << numQuestions << " questions." << endl;
}

int main() {
    srand(time(NULL));
    vector<Question> questions;
    readQuestions(questions, "TriviaQuestions.txt");
    askQuestions(questions, 13);
    return 0;
}
