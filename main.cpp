#include <opencv2/opencv.hpp>
#include <iostream>
using namespace cv;

int main (int argc, char* argv[]) {
  std::string fileLocation = argv[1];
  Mat img = imread(fileLocation);
  imshow("", img);
  waitKey(0);
}
