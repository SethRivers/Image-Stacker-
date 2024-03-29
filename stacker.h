/**
 * @file stacker.h
 * @author V-Types
 * @date 2024-02-27
 * @brief The .h file for the Image Stacker assignment. Here, everything that is utilized in the .CPP
 * file is organized and initialized for use.
 * 
 * 
 */

#ifndef STACKER_H
#define STACKER_H

#include <vector>

class Stacker {
 private:
  std::string magic_number;
  int width;
  int height;
  int max_color;
  struct pixel { // RGB data values for individual pixels
    int red;
    int green;
    int blue;
  };
  pixel p;
  std::vector<pixel> pixels; // vector of pixels 
  
 public:


/**
 * Default constructor for Stacker class. Initializes everything to blank / zero
 *
 * @post All variables, the pixel struct, and vector of pixels are initialized to zero, blank, etc.
 * 
 */
  Stacker();


/**
 * Destructor for Stacker class. Sets all variables to blank/zero and clears the vector
 *
 * @pre object of Stacker class goes out of scope
 * @post All variables set to zero / blank, vector cleared
 * 
 */
  ~Stacker();
  
/**
 * Reads in PPM data from however many images the user asks for and adds them together to later be averaged
 *
 * @param string nameImg Name of the PPM files the user wishes to have Stacked
 * @param int numImg The number of images they wish to stack
 * @return Nothing
 * @post PPM data read into appropriate variables, pixels vector filled with pixel structs from the PPM files, etc.
 * 
 */
  void readPPMs(std::string nameImg, int numImg);

/**
 * Averages pixel data from all read-in PPM files within pixels vector
 *
 * @param int numPPM Number of images that need to be stacked
 * @pre Data has been read in through use of the readPPMs method and added on top of each other
 * @return Nothing
 * @post vector pixels now only contains averaged pixel data for new PPM
 * 
 */
  void avgPPMs(int numPPM);

/**
 * Outputs averaged/stacked image file for viewing
 *
 * @param string outputName name of the PPM file to be outputted
 * @pre Data from multiple PPM files must be averaged and stored in vector pixels
 * @return Nothing, only outputs new PPM file of averaged data
 * 
 */
  void output(std::string outputName);
          
};

#endif //STACKER_H
