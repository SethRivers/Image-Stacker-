# Image-Stacker
This is the repository that ν-Types commits the Image Stacker assignment to. 

# Design Decisions:
We only used the minimum methods in the Stacker class for functionality - readPPMs, avgPPMs, and output.
readPPMs - Reads in initial data from whatever image the user wants, and then adds to that data depending on how many images are to be read in
avgPPMs - Averages the now too-large pixel data to an appropriate number that will eliminate the noisy-ness of the new PPM file
output - Outputs newly-stacked image for viewing
We created the struct within private variables for use in reading in new pixel data and to reduce clutter in methods by removing the need of a new struct in said methods.

# How To Run The Program:
Run the "stacker" executable
Enter the name of the image you wish to stack (JUST THE NAME from name_of_image/name_ofimage#.ppm)
Input number of images you want stacked together
Wait for message, then view the newly stacked PPM file

# Challenges:
At first, considering how to read in pixel data from every single ppm file into a vector AND being able to add that data together appropriately before averaging was the biggest challenge. We then realized that just reading in one PPM file's data and adding future values to that data and just averaging later was a much better route. 

During creation of the program, there was an issue where outputted images were too dark and STILL unfocused. We then realized we were continually overwriting the vector's contents with the final PPM file in a sequence's data AND averaging that data, making it still unfocused but also darker. We fixed this apparent issue by changing vector.reserve() to vector.resize(), which turned out much better for the situation in every aspect.

# How We Shared The Work:
Besides checking over code as we programmed and corrected each other's mistakes, we also bugfixed different methods that needed to be fixed at different intervals to allow for a fresh perspective and also take a break from staring at the same lines of code for too long. We regularly communicated on Discord, meticulously analyzing each other's code before all of us giving the okay, and having one of us push it to GitHub and move on, or double check things and see if it works, and if not, then we'd work on it more before messing with anything else. We did this to ensure that we get to a final resulting push of a properly working code that works with what is wanted, with some bug fixes after any additional found issues.

# Authors:
This program was developed by the ν-Types group, which consists of the following members:
Jacqueline Bybee,
Seth Rivers,
Xander Butler
