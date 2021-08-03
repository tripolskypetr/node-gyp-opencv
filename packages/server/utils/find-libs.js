const { resolve } = require('path');

// https://github.com/nodejs/node-gyp/issues/49
const BASE_PATH = '../../3rdparty/opencv/@3.4/lib';

const OPENCV_LIBS = [
    'libopencv_core.a',
];

OPENCV_LIBS.forEach((file) => {
    console.log(resolve(`${BASE_PATH}/${file}`))
});
