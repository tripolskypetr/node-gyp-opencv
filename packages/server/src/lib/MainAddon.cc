#include "MainAddon.h"

void MainAddon::Init(Local<Object> target) {
  Nan::HandleScope scope;
  Nan::SetMethod(target, "createImage", CreateImage);
}

NAN_METHOD(MainAddon::CreateImage) {
    cv::Mat output = cv::Mat::zeros( 120, 350, CV_8UC3 );
    putText(
      output,
      "Hello World :)",
      cvPoint(15,70),
      cv::FONT_HERSHEY_PLAIN,
      3,
      cvScalar(0,255,0),
      4
    );
    cv::imwrite("hello-world.png", output);
}
