#ifndef APPLICATION_H
#define APPLICATION_H

#include <nan.h>

using namespace v8;
using namespace node;

class MainWindow: public Nan::ObjectWrap {
public:
  static void Init(Local<Object> target);
  static NAN_METHOD(ViewImage);
};

#endif // APPLICATION_H
