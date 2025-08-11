#include <iostream>

using namespace std;

int main()
{

    string questions[] = {
        "1: What is the capital of France?",
        "2: Who wrote 'Romeo and Juliet'?",
        "3: What is the largest planet in our solar system?",
        "4: What is the chemical symbol for water?",
        "5: Who painted the Mona Lisa?"};

    string options[][4] = {
        {"A. Paris", "B. London", "C. Rome", "D. Berlin"},
        {"A. Charles Dickens", "B. William Shakespeare", "C. Jane Austen", "D. Mark Twain"},
        {"A. Earth", "B. Jupiter", "C. Mars", "D. Saturn"},
        {"A. H2O", "B. CO2", "C. O2", "D. NaCl"},
        {"A. Vincent van Gogh", "B. Pablo Picasso", "C. Leonardo da Vinci", "D. Claude Monet"}};

    char answersKeys[] = {'A', 'B', 'B', 'A', 'C'};
    char guess;
    int score = 0;

    int rowQuestions = sizeof(questions) / sizeof(questions[0]);
    int columnOptions = sizeof(options[0]) / sizeof(options[0][0]);

    for (int i = 0; i < rowQuestions; i++)
    {

        cout << "+++++++++++++++++++++++++\n";
        cout << questions[i] << endl;
        cout << "+++++++++++++++++++++++++\n";

        for (int j = 0; j < columnOptions; j++)
        {
            cout << options[i][j] << endl;
        }

        cout << endl;
        cin >> guess;
        guess = toupper(guess);

        if (guess == answersKeys[i])
        {
            cout << "CORRECT." << endl;
            score++;
        }
        else
        {
            cout << "WRONG." << endl;
            cout << "ANSWER: " << answersKeys[i];
        }
    }

    cout << "Total score: " << score;
    return 0;
}