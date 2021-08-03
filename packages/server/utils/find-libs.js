const { resolve } = require('path');

// https://github.com/nodejs/node-gyp/issues/49
const BASE_PATH = '../../3rdparty/opencv/@3.4/lib';

const OPENCV_LIBS = [
    "libopencv_aruco.a",
    "libopencv_bgsegm.a",
    "libopencv_bioinspired.a",
    "libopencv_calib3d.a",
    "libopencv_ccalib.a",
    "libopencv_core.a",
    "libopencv_datasets.a",
    "libopencv_dnn.a",
    "libopencv_dnn_objdetect.a",
    "libopencv_dpm.a",
    "libopencv_face.a",
    "libopencv_features2d.a",
    "libopencv_flann.a",
    "libopencv_fuzzy.a",
    "libopencv_hfs.a",
    "libopencv_highgui.a",
    "libopencv_img_hash.a",
    "libopencv_imgcodecs.a",
    "libopencv_imgproc.a",
    "libopencv_line_descriptor.a",
    "libopencv_ml.a",
    "libopencv_objdetect.a",
    "libopencv_optflow.a",
    "libopencv_phase_unwrapping.a",
    "libopencv_photo.a",
    "libopencv_plot.a",
    "libopencv_reg.a",
    "libopencv_rgbd.a",
    "libopencv_saliency.a",
    "libopencv_shape.a",
    "libopencv_stereo.a",
    "libopencv_stitching.a",
    "libopencv_structured_light.a",
    "libopencv_superres.a",
    "libopencv_surface_matching.a",
    "libopencv_text.a",
    "libopencv_tracking.a",
    "libopencv_video.a",
    "libopencv_videoio.a",
    "libopencv_videostab.a",
    "libopencv_xfeatures2d.a",
    "libopencv_ximgproc.a",
    "libopencv_xobjdetect.a",
    "libopencv_xphoto.a",
];

OPENCV_LIBS.forEach((file) => {
    console.log(resolve(`${BASE_PATH}/${file}`))
});
