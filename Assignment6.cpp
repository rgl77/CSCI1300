// Orgil Sugar wednesday 10AM recitation TA: Vipra Gupta
#include <iostream>
#include <fstream>
#include <iomanip>
#include <string>
using namespace std;
// part 1 *****************************************************************************************************************//
int howManyLines(string filename)
{
    ifstream file;
    string line;
    file.open(filename.c_str());
    int numberOfLines=0;
    if (!file.is_open())
    {
        cout << "error" << endl;
    }
    while(getline(file,line))
    {
        numberOfLines ++;

    }

return numberOfLines;
cout << "number of lines:" << setw(7) << numberOfLines;
file.close();
}


//part2 ***********************************************************************************************************************//
int countMatchingRecords(string filename, float Lscore, float Hscore)
{
fstream file;
string line;
int NumberOfLines = 0,match = 0;

file.open(filename.c_str());
if (!file.is_open())
{
    cout << "error";
}

while (getline (file,line))
{
    NumberOfLines++;
    if(NumberOfLines % 3 == 0)
    {
    int scores = atoi(line.c_str());
    if ((Hscore >= scores)&&( Lscore <= scores))
    {
        match++;
    }

    }
}

return match;
file.close();
}

//part3 ******************************************************************************************************************//
string gradeFromScore(int scores)
{

  string letterGrade;
  if((scores <= 100) && (scores >= 90))
  {
     letterGrade = "A";
  }
  if ((scores < 90) && (scores >= 80))
  {
      letterGrade = "B";
  }
  if ((scores < 80) && (scores >= 70))
  {
      letterGrade = "C";
  }
  if ((scores < 70) && (scores >= 60))
  {
      letterGrade = "D";
  }
  if ((scores < 60) && (scores >= 0))
  {
      letterGrade = "F";
  }
  return letterGrade;
}

int convertToLetterGrade(string filename, string outfilename)
{
    ifstream initialFile;
    ofstream secondFile;
    string line;
    int lineNumber = 0 ;
    int lines = 0;
    string firstName, lastName, letterGrade;
    initialFile.open(filename.c_str());
    if(!initialFile.is_open())
    {
        cout << "Error" << endl;
    }

    secondFile.open(outfilename.c_str());
    if(!secondFile.is_open())
    {
        cout << "Error" << endl;
    }
    while (getline(initialFile,line))
    {
        lineNumber += 1;
        if(lineNumber % 3 == 1)
        {
            firstName = line;
        }
        else if(lineNumber % 3 == 2)
        {
            lastName = line;
        }
        else if(lineNumber % 3 == 0)
        {
            int score = atoi(line.c_str());
            letterGrade = gradeFromScore(score);
            secondFile << lastName << "," << " " << firstName << endl;
            secondFile << score << endl;
            secondFile << letterGrade << endl;
        }
        lines += 1;
    }
    int totalGrades = lines / 3;
    return totalGrades;
    secondFile.close();
    initialFile.close();
}



int main()
{
    string filename;
    cin >> filename;
    cout << howManyLines(filename) << setw(7) << endl;
/*****************************************************************************************************************************/
    float Lscore, Hscore;

    cin  >>  Lscore;

    cin  >>  Hscore;
    cout << countMatchingRecords(filename,Lscore,Hscore) << setw(7) << endl;
/*****************************************************************************************************************************/
    string outfilename;

    cin  >> outfilename;
    cout << setw(7) << convertToLetterGrade (filename, outfilename) << endl;

}




