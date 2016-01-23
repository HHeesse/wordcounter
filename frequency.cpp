// freq luokka
#include "frequency.hh"

  Frequency::Frequency (){}

  void Frequency::addFreq(string word){
  	map<string, int>::iterator it = freqMap.find(word);
   	if (it != freqMap.end()) {
	  it->second += 1;
    }	
    else {
      freqMap.insert (pair<string, int>(word, 1) );	
    }
  }  