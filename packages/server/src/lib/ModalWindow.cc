#include "ModalWindow.h"

void MainWindow::Init(Local<Object> target) {
  Nan::HandleScope scope;
  Nan::SetMethod(target, "viewImage", ViewImage);
}

NAN_METHOD(MainWindow::ViewImage) {
    std::cout << "here";
    namedWindow("Output",1);
    Mat output = Mat::zeros( 120, 350, CV_8UC3 );
    putText(output,
            "Hello World :)",
            cvPoint(15,70),
            FONT_HERSHEY_PLAIN,
            3,
            cvScalar(0,255,0),
            4);
    imshow("Output", output);
    waitKey(0);
}
