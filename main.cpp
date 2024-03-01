/**
 * @file main.cpp
 * @authors V-Types
 * @date 2024-02-27
 * @brief The main file for Image Stacker 
 * 
 * 
 */


#include <iostream>
#include "stacker.h"

using namespace std;

int main() {
  string imageName = "";
  int numImages = 0;
  Stacker imgToStack;
  
  cout << "Please enter the image you wish to stack: ";
  cin >> imageName;

  cout << "Please enter the number of images: ";
  cin >> numImages;

  imgToStack.readPPMs(imageName, numImages);
  imgToStack.avgPPMs(numImages);
  imgToStack.output(imageName);
  
  return 0;
}
