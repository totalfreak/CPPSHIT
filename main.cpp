#include <stdio.h>
#include <opencv2/opencv.hpp>

using namespace cv;

int main(int argc, char** argv) {
    if(argc != 2) {
        printf("Usage: main.out <Image_Path>\n");
    }

    char* imageName = argv[1];
    Mat image;
    image = imread(imageName, 1);

    if(!image.data) {
        printf("No image data \n");
        return -1;
    }

    Mat gray_image;
    cvtColor(image, gray_image, COLOR_BGR2GRAY);

    imwrite("../../images/Gray_image.jpg", gray_image);
    
    namedWindow(imageName, WINDOW_AUTOSIZE);
    namedWindow("Gray image", WINDOW_AUTOSIZE);

    imshow(imageName, image);
    imshow("Gray image", gray_image);

    waitKey(0);

    return 0;
}