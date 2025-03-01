#include <opencv2/opencv.hpp>

cv::Mat img(600, 800, CV_8UC3, cv::Scalar(0, 0, 255)); // Red in BGR format

// Convert BGR (sRGB) to YUV Rec. 709
cv::Mat img_rec709;
cv::cvtColor(img, img_rec709, cv::COLOR_BGR2YUV);

cv::imwrite("rec709_image.png", img_rec709);

