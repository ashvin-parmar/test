#include <QImage>
#include <QColor>
#include <QtMath>
//double applyRec709Gamma(double value) {
//    // Improved gamma curve for better highlights and color accuracy
//    return (value <= 0.081) ? (value / 4.5) : pow((value + 0.099) / 1.099, 1 / 0.45);
//}

double applyRec709Gamma(double value) {
    // Advanced tone mapping: improves brightness, avoids excessive dimming
    if (value <= 0.081) {
        return value / 4.5;  // Better shadow detail
    } else {
        double gammaCorrected = pow((value + 0.099) / 1.099, 1 / 0.42);
        return gammaCorrected * 1.05;  // Slight boost for more vivid colors
    }
}

QRgb applyRec709(QRgb pixel) {
    // Extract and normalize RGB values
    double r = qRed(pixel) / 255.0;
    double g = qGreen(pixel) / 255.0;
    double b = qBlue(pixel) / 255.0;

    // Apply Rec. 709 gamma correction
    r = applyRec709Gamma(r);
    g = applyRec709Gamma(g);
    b = applyRec709Gamma(b);

    // Rec. 709 RGB transformation matrix (assuming input is sRGB)
    double r709 = 1.0 * r + 0.0 * g + 0.0 * b;
    double g709 = 0.0 * r + 1.0 * g + 0.0 * b;
    double b709 = 0.0 * r + 0.0 * g + 1.0 * b;

    // Convert back to 8-bit color
    int rFinal = qBound(0, static_cast<int>(r709 * 255), 255);
    int gFinal = qBound(0, static_cast<int>(g709 * 255), 255);
    int bFinal = qBound(0, static_cast<int>(b709 * 255), 255);

    return qRgb(rFinal, gFinal, bFinal);
}

QImage convertImageToRec709(const QImage &image) {
    QImage result = image;
    for (int y = 0; y < image.height(); ++y) {
        for (int x = 0; x < image.width(); ++x) {
            QRgb pixel = image.pixel(x, y);
            result.setPixel(x, y, applyRec709(pixel));
        }
    }
    return result;
}

// Example Usage
int main(int argc,char *argv[]) {
    if(argc!=3)
    {
        printf("Usage: [./rec709 input_file output_file]\n");
        return 0;
    }
    char *input_file=argv[1];
    char *output_file=argv[2];

    QImage inputImage(input_file);
    QImage outputImage = convertImageToRec709(inputImage);
    outputImage.save(output_file);
    return 0;
}

