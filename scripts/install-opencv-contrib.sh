rm -rf tmp
mkdir tmp && cd tmp
git clone --branch 3.4 --depth 1 https://github.com/opencv/opencv.git opencv-master
git clone --branch 3.4 --depth 1 https://github.com/opencv/opencv_contrib.git opencv_contrib-master
mkdir build
cd build
cmake \
    -DOPENCV_EXTRA_MODULES_PATH=../opencv_contrib-master/modules \
    ../opencv-master
cmake --build .
make -j8
make install
