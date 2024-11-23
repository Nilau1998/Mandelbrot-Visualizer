#include "mandelbrot_visualizer.h"
#include "ui_mandelbrot_visualizer.h"

MandelbrotVisualizer::MandelbrotVisualizer(QMainWindow *parent)
    : QMainWindow(parent),
      ui(new Ui::MandelbrotVisualizer()) {
    ui->setupUi(this);
}

MandelbrotVisualizer::~MandelbrotVisualizer() {
    delete ui;
}