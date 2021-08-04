# node-gyp-opencv

> Most basic example of adding an OpenCV C++ add-on into node.js

This example will help you to to get started with your computer vision project by linking OpenCV 3.4 with [Native Abstractions for Node.js](https://github.com/nodejs/nan). Includes "opencv_contrib" so SIFT and SURF are available

## Target platform

Tested on Ubuntu 18.04. The [tmp](./tmp) contains OpenCV 3.4 precompiled binaries in `build` zip archive. So if you are going to drive into development as fast as possible, you should

```
sudo apt update
sudo apt install unzip
unzip ../build.zip && cd build
sudo make install
sudo sh -c 'echo "/usr/local/lib" > /etc/ld.so.conf.d/opencv.conf' 
sudo ldconfig
```

## Usage

```
npm run install:opencv
cd packages/client
npm install
npm start
```

## SIFT becomes free

U.S. patents are valid for 20 years from the earliest filing date, but can be extended to 21 years if a Priority Date is used, and SIFT ([US6711293B1](https://patents.google.com/patent/US6711293B1/en)) was filed (with priority) on 1999-03-08. This means that usage of the SIFT algorithm is no longer requires a license for use.
    
[Source](https://piero.dev/2019/04/the-sift-patent-has-expired/)
