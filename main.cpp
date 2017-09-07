#include <stdio.h>
#include <opencv2/opencv.hpp>

using namespace std;
using namespace cv;

int main() {
    VideoCapture cap(0);

    if(!cap.isOpened()) {
        cout << "Couldn't open video source";
        return -1;
    }

    int frameWidth = cap.get(CV_CAP_PROP_FRAME_WIDTH);
    int frameHeight = cap.get(CV_CAP_PROP_FRAME_HEIGHT);

    VideoWriter video("Output.avi", CV_FOURCC('M', 'J', 'P', 'G'), 24, Size(frameWidth, frameHeight));

    while(true) {
        Mat frame;

        cap >> frame;

        if(frame.empty()) {
            break;
        }
        video.write(frame);

        imshow("Cam", frame);

        char c = (char)waitKey(1);
        if(c == 27) {
            break;
        }
    }
    //remove("Output.avi");
    cap.release();
    video.release();

    destroyAllWindows();
    return 0;
}