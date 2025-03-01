#include <QCoreApplication>
#include <QImage>
#include <QColor>
#include <opencv2/opencv.hpp>
#include <iostream>

// Function to convert sRGB to Rec. 709
cv::Vec3b convertToRec709(const QColor &color) {
    double r = color.red() / 255.0;
    double g = color.green() / 255.0;
    double b = color.blue() / 255.0;

    // Apply Rec. 709 conversion matrix
    double y = 0.2126 * r + 0.7152 * g + 0.0722 * b;
    double u = (b - y) * 0.493;
    double v = (r - y) * 0.877;

    // Convert back to 8-bit RGB
    int rec709R = static_cast<int>((y + 1.14 * v) * 255);
    int rec709G = static_cast<int>((y - 0.394 * u - 0.581 * v) * 255);
    int rec709B = static_cast<int>((y + 2.032 * u) * 255);

    return cv::Vec3b(qBound(0, rec709B, 255), qBound(0, rec709G, 255), qBound(0, rec709R, 255)); // OpenCV stores in BGR order
}

int main(int argc, char *argv[]) {
    QCoreApplication a(argc, argv);

    int width = 800, height = 600;
    cv::Mat image(height, width, CV_8UC3);

    // Fill the image with Rec. 709 colors (Gradient Effect)
    for (int y = 0; y < height; y++) {
        for (int x = 0; x < width; x++) {
            QColor sRGBColor(x % 256, y % 256, (x + y) % 256); // Random sRGB color
            image.at<cv::Vec3b>(y, x) = convertToRec709(sRGBColor);
        }
    }

    // Save as PNG
    cv::imwrite("rec709_image.png", image);

    std::cout << "Rec. 709 image saved as rec709_image.png\n";

    return a.exec();
}

