#pragma once

#include <QLabel>
#include <QResizeEvent>
#include <QImage>
#include <opencv2/opencv.hpp>

#include "xinar.h"

QImage Mat2QImage(cv::Mat const &src);

cv::Mat QImage2Mat(QImage const &src);

class ResizableQLabel : public QLabel {
public:
    xinar::Resize resizer;

    ResizableQLabel();

    void resizeEvent(QResizeEvent *event);

    void setPixmap(const QPixmap &pixmap);
};
