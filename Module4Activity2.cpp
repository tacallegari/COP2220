// Tahlia Callegari
//2428774
// COP2220 Fall 2020

#include <iostream>
#include <string>
#include <iomanip>
using namespace std;

//Function ask user for Judge Score
void getJudgeData(double &judgeScore) {

    //User input question
    const string inputQuestion = "What is the judge's score? ";

    //Ask user for input
    cout << inputQuestion; 
    cin >> judgeScore;
    
    //Verify input
    if (judgeScore <= 0 || judgeScore > 10) {
        cout << "Error. Please try again." << endl;
        cout << inputQuestion;
        cin >> judgeScore;
    }
}
//Function findest lowest score
int findLowest(double score1, double score2, double score3, double score4, double score5) {
    
    //Define & temporary assign variable
    double lowestScore = score1;

    //If loops filter through scores to findest lowest
    if (score2 < lowestScore) {
        lowestScore = score2;
    }
    if (score3 < lowestScore) {
        lowestScore = score3;
    }
    if (score4 < lowestScore) {
        lowestScore = score4;
    }
    if (score5 < lowestScore) {
        lowestScore = score5;
    }

    //Display results
    cout << "Lowest Score: " << lowestScore << endl;

    //Return varible
    return lowestScore;
}

//Function finds highest score
int findHighest(double score1, double score2, double score3, double score4, double score5) {
    
    //Define and temporary assign variable
    double highestScore = score1;

    //If loops filter through scores to find highest
    if (score2 > highestScore) {
        highestScore = score2;
    }
    if (score3 > highestScore) {
            highestScore = score3;
    }
    if (score4 > highestScore) {
        highestScore = score4;
    }
    if (score5 > highestScore) {
        highestScore = score5;
    }

    //Display results
    cout << "Highest Score: " << highestScore << endl;
    
    //Return variable
    return highestScore;

}
//Function calculates final score
void calcScore(double score1, double score2, double score3, double score4, double score5) {
    
    //Define instance variables
    double lowestScore, highestScore;

    //Get values for instance variables
    lowestScore = findLowest(score1, score2, score3, score4, score5);
    highestScore = findHighest(score1, score2, score3, score4, score5);
    
    //Sum of scores - highest and lowest score
    double sum = score1 + score2 + score3 + score4 + score5 - lowestScore - highestScore;

    //Average of 3 median scores
    double average = sum / 3;

    //Display results with precision of 1 decimal
    cout << "Final score is: " << fixed << setprecision(1) << average << endl;

}


//Main
int main()
{
    //Define variables
    double score1, score2, score3, score4, score5;

    //Get score values
    getJudgeData(score1);
    
    getJudgeData(score2);
    
    getJudgeData(score3);
    
    getJudgeData(score4);
    
    getJudgeData(score5);
    
    //Call on function
    calcScore(score1, score2, score3, score4, score5);
}
