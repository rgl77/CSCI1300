#include <iostream>
#include <iomanip>
#include <fstream>
using namespace std;


int howManyLines (string filename)
{
    ifstream file;
    file.open(filename.c_str());
    string line;
    double lineNumber;
    if (!file.is_open())
    {
        cout << "Error" <<endl;
    }
    while (getline(file,line))
    {
        lineNumber++;
    }
    file.close();
    cout << "Number of lines: " << setw(7) <<lineNumber << endl;
    return lineNumber;
}

int countMatchingRecords (string filename, float Hscore, float Lscore)
{
    string line;
    ifstream file;
    file.open(filename.c_str());
    if (!file.is_open())
    {
        cout << "Error" <<endl;
    }
    double NumberMatches;
    int lineNumber = 0;
    while (getline(file,line))
    {
        lineNumber++;
        if (lineNumber%3 == 0)
        {
            int score = atoi(line.c_str());
            if ((score <= Hscore) && (score >= Lscore))
            {
                NumberMatches++;
            }
        }
    }
    cout << "Number of records: " << setw(7) << NumberMatches << endl;
    return NumberMatches;
}

string gradeFromScore(int score)
{
  string lettergrade;
  if((score <= 100) && (score >= 90))
  {
     lettergrade = "A";
  }
  if ((score < 90) && (score >= 80))
  {
      lettergrade = "B";
  }
  if ((score < 80) && (score >= 70))
  {
      lettergrade = "C";
  }
  if ((score < 70) && (score >= 60))
  {
      lettergrade = "D";
  }
  if ((score < 60) && (score <= 0))
  {
      lettergrade = "F";
  }
  return lettergrade;
}
int convertToLetterGrade(string filename, string outfilename)
{
    string line;
    ifstream infile;
    infile.open(filename.c_str());
    if (infile.is_open() == false)
    {
        cout << "Error" <<endl;
    }
    ofstream outfile;
    outfile.open(outfilename.c_str());
    if (outfile.is_open() == false)
    {
        cout << "Error 2" <<endl;
    }
    int lineNumber = 0;
    string firstname, lastname;
    string lettergrade;
    int linesprocessed = 0;
    while (getline(infile, line))
    {
        lineNumber++;
        if (lineNumber%1 == 0)
        {
            firstname = line;
        }
        else if (lineNumber%2 == 0)
        {
            lastname = line;
        }
        else if (lineNumber%3 == 0)
        {
            int score = atoi(line.c_str());
            lettergrade = gradeFromScore(score);
            outfile << lastname << "," << firstname << endl;
            outfile << score <<endl;
            outfile << lettergrade << endl;
        }
        linesprocessed++;
    }
    int gradesprocessed = linesprocessed/3;
    cout << "Number of grades: " << setw(7) << gradesprocessed << endl;
    return gradesprocessed;
}

int main ()
{
  //Part One
  string filename;
  cout << "Enter a file name path" <<endl;
  cin >> filename;
  howManyLines(filename);
  //Part Two
  cout << "Enter a file name path" <<endl;
  cin >> filename;
  int Hscore;
  int Lscore;
  cout << "Please enter the high score." << endl;
  cin >> Hscore;
  cout << "Please enter the low score." << endl;
  cin >> Lscore;
  countMatchingRecords(filename, Hscore, Lscore);
  //Part 3
  cout << "Please enter a file name." <<endl;
  cin >> filename;
  string outfilename;
  cout << "Please enter the name of the file you want to create." << endl;
  cin >> outfilename;
  convertToLetterGrade (filename, outfilename);

}


