apt update
apt install -y cmake gcc bison pkg-config autoconf python3 python3-distutils gperf libx11-dev libxft-dev libxext-dev libtool libglfw3 libgles2-mesa-dev libxrandr-dev libxi-dev libxcursor-dev libxinerama-dev libxxf86vm-dev
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
sh -c 'echo "/usr/local/lib" > /etc/ld.so.conf.d/opencv.conf' 
ldconfig
