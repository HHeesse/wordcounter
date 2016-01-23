// freq header file

#ifndef Frequency_H
#define Frequency_H

#include <map>
#include <string>
#include <iterator>

using namespace std;

class Frequency{
  private:
    map<string, int> freqMap;

  public:
  	Frequency ();
    void addFreq(string word);
};

#endif