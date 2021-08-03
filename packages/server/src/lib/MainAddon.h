#ifndef APPLICATION_H
#define APPLICATION_H

#include <nan.h>

#include <opencv2/opencv.hpp>

using namespace v8;
using namespace node;

class MainAddon: public Nan::ObjectWrap {
public:
  static void Init(Local<Object> target);
  static NAN_METHOD(CreateImage);
};

#endif // APPLICATION_H
