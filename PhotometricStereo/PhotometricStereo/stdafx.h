#pragma once

#ifdef realloc
#undef realloc
#endif 

#include "opencv2/core/core_c.h"
#include "opencv2/core/core.hpp"
#include "opencv2/flann/miniflann.hpp"
#include "opencv2/imgproc/imgproc_c.h"
#include "opencv2/imgproc/imgproc.hpp"
#include "opencv2/video/video.hpp"
#include "opencv2/features2d/features2d.hpp"
#include "opencv2/objdetect/objdetect.hpp"
#include "opencv2/calib3d/calib3d.hpp"
#include "opencv2/ml/ml.hpp"
#include "opencv2/highgui/highgui_c.h"
#include "opencv2/highgui/highgui.hpp"
#include "opencv2/contrib/contrib.hpp"

   #ifdef NDEBUG
 #pragma comment(lib, "opencv_core247.lib")
 #pragma comment(lib, "opencv_highgui247.lib")
 #pragma comment(lib, "opencv_features2d247.lib")
 #pragma comment(lib, "opencv_imgproc247.lib")
 #pragma comment(lib, "qtmain.lib")
 #pragma comment(lib, "Qt5Core.lib")
 #pragma comment(lib, "Qt5Gui.lib")
 #pragma comment(lib, "Qt5OpenGL.lib")
 #pragma comment(lib, "Qt5Widgets.lib")
 #else
 #pragma comment(lib, "opencv_core247d.lib")
 #pragma comment(lib, "opencv_highgui247d.lib")
 #pragma comment(lib, "opencv_features2d247d.lib")
 #pragma comment(lib, "opencv_imgproc247d.lib")
 #pragma comment(lib, "qtmaind.lib")
 #pragma comment(lib, "Qt5Cored.lib")
 #pragma comment(lib, "Qt5Guid.lib")
 #pragma comment(lib, "Qt5OpenGLd.lib")
 #pragma comment(lib, "Qt5Widgetsd.lib")
#endif

#pragma comment(lib, "libmx.lib")
#pragma comment(lib, "libmat.lib")
#pragma comment(lib, "PhotometricStereoMath.lib")
#pragma comment(lib, "mclmcrrt.lib")
#pragma comment(lib, "cuda.lib")
#pragma comment(lib, "cudart.lib")

using namespace std;

#include <QString>
#include <QImage>
#include <QSize>
#include <QRect>
#include <QImage>
#include <QImageReader>
#include <QtWidgets/QApplication>
#include <QtWidgets/QFileDialog>
#include <QtWidgets/QMessageBox>
#include <QThread>
#include <QTime>

#include <vector>
#include <memory>
#include <fstream>
#include <sstream>
#include <unordered_map>
#include <queue>
#include <functional>
#include <algorithm>
#include <iterator>

#ifdef MEMORY_LEAK_DEBUG
#define _CRTDBG_MAP_ALLOC
//#include <stdlib.h>
#include <crtdbg.h>
#define DEBUG_NEW new(_NORMAL_BLOCK, __FILE__, __LINE__) 
#define new DEBUG_NEW
#endif

// NO_INIT macro suppress the global matlab initialization, the programe can not preform any matlab mathods.
// Use this macro to start up quickly to debug UI setting.
//#define NO_INIT