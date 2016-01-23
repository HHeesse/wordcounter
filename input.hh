// headerfile for input.cpp

#ifndef Input_H
#define Input_H

#include <string>
#include <fstream>
#include <mutex>

using namespace std;

class Input{
  private:
  	ifstream file_stream;
    string words;
    string str;
    int current;
  public:
  	Input (string filepath);
  	string getWords(int count);
  	mutex mute; 
};

#endif