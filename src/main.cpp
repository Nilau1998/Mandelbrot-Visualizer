#include <QApplication>
#include <QPushButton>

#include "mandelbrot_visualizer.h"

int main(int argc, char *argv[]) {
    QApplication app(argc, argv); 

    MandelbrotVisualizer mandelbrotVisualizer;
    mandelbrotVisualizer.show();

    return app.exec();
}