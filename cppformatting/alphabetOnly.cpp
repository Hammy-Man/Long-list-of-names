#include <iostream>
#include <string>
#include <fstream>
#include "IsAlphabetical"
using namespace std;
int main(void)
{
  string curLine;
  fstream f("convchunks.txt");
  fstream o("outchunks.txt");
  while (getline(f, curLine))
  {
    if (isAlphabet(curLine[0]))
      o << curLine[0];

    for (int i = 1; i < curLine.size(); i++)
    {
      if (isAlphabet(curLine[i]))
      {
        if (isupper(curLine[i]))
        {
          o << "\n"
            << curLine[i];
        }
        else
        {
          o << curLine[i];
        }
      }
      else
        continue;
    }

    o << "\n";
  }
}