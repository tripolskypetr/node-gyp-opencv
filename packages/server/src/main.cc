
#include <nan.h>

#include "lib/ModalWindow.h"

using namespace v8;

extern "C" void init(Local<Object> target) {
  MainWindow::Init(target);
}

NODE_MODULE(server, init)
