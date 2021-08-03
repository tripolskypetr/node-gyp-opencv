mkdir -p 3rdparty/opencv
rm -rf tmp
mkdir tmp
cd tmp
rm -rf opencv-master
rm -rf opencv_contrib-master
git clone --branch 3.4 --depth 1 https://github.com/opencv/opencv.git opencv-master
git clone --branch 3.4 --depth 1 https://github.com/opencv/opencv_contrib.git opencv_contrib-master
mkdir build
cd build
cmake \
    -DCMAKE_INSTALL_PREFIX="$(pwd)/../../3rdparty/opencv\@3.4" \
    -DBUILD_SHARED_LIBS=OFF \
    -DWITH_WEBP=OFF \
    -D WITH_ITT=OFF \
    -DENABLE_PRECOMPILED_HEADERS=YES \
    -DOPENCV_EXTRA_MODULES_PATH=../opencv_contrib-master/modules \
    ../opencv-master
cmake --build .
make install
