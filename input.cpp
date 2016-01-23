// input class

#include "input.hh"


  	Input::Input (string filepath){
  	  this->file_stream.open(filepath);	
  	}

  	string Input::getWords(int count) {
      mute.lock();
  	  for (int i = 0; i < count; i++){  
  	    file_stream >> str;
  	    words.append(str + " ");
  	  }
  	  return words;
      mute.unlock();
  	}
