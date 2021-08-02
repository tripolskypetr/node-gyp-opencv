
#include <nan.h>
#include <unistd.h>     // getuid
#include <pwd.h>        // getpwuid
#include <sys/types.h>  // uid_t

using namespace v8;

char* getuserinfo() {
   uid_t          user_id;
   struct passwd *user_pw;

   user_id  = getuid();             // 사용자 아이디를 구하고
   user_pw  = getpwuid( user_id);   // 아이디로 사용자 정보 구하기

   // printf( "user name      :%s\n", user_pw->pw_name  );
   // printf( "real name      :%s\n", user_pw->pw_gecos );
   return user_pw->pw_name;
}

void getInfoViaUnixFunction(const Nan::FunctionCallbackInfo<v8::Value>& info) {
    //  info.GetReturnValue().Set(Nan::New("world").ToLocalChecked());
    info.GetReturnValue().Set(Nan::New(getuserinfo()).ToLocalChecked());
}

void Init(v8::Local<v8::Object> exports) {
  exports->Set(Nan::New("hello").ToLocalChecked(),
               Nan::New<v8::FunctionTemplate>(getInfoViaUnixFunction)->GetFunction());
}

NODE_MODULE(hello, Init)
