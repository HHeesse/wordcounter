// word counter

#include <iostream>
#include "Input.hh"

int main(){
	Input *input = new Input("dataset.txt");
	std::cout << input->getWords(2) << std::endl;

	return 0;
};