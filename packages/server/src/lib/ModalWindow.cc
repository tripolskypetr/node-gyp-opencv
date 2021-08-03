#include "ModalWindow.h"

void MainWindow::Init(Local<Object> target) {
  Nan::HandleScope scope;
  Nan::SetMethod(target, "viewImage", ViewImage);
}

NAN_METHOD(MainWindow::ViewImage) {
    std::cout << "here";
    cv::Mat output = cv::Mat::zeros( 120, 350, CV_8UC3 );
    cv::imwrite("hello-world.png", output);
}
