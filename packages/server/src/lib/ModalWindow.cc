#include "ModalWindow.h"

void MainWindow::Init(Local<Object> target) {
  Nan::HandleScope scope;
  Nan::SetMethod(target, "viewImage", ViewImage);
}

NAN_METHOD(MainWindow::ViewImage) {
}
