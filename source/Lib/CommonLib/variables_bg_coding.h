#ifndef VARIABLES_BG_CODING_H
#define VARIABLES_BG_CODING_H

#include <string>  // Include string header

extern int myQP_bg;
extern int myQP_fg;
extern std::string imagePath;

int getmyQP_bg();
int getmyQP_fg();
void setmyQP_bg(int value);
void setmyQP_fg(int value);

std::string getImagePath();
void setImagePath(const std::string &path);

#endif 

// #ifndef VARIABLES_bg_CODING_H
// #define VARIABLES_bg_CODING_H

// #include <string>  
// #include <opencv2/opencv.hpp>

// extern int myQP_bg;
// extern cv::Mat image;  


// int getmyQP_bg();
// void setmyQP_bg(int value);

// cv::Mat getImage(); 
// void setImage(const std::string &imagePath);  

// #endif
