#pragma once

#include <QMainWindow>

#include "ui_mandelbrot_visualizer.h"

class MandelbrotVisualizer : public QMainWindow {
    Q_OBJECT
    public:
        explicit MandelbrotVisualizer(QMainWindow *parent = nullptr);

    private slots:
        void on_pushButton_clicked();

    private:
        Ui::MandelbrotVisualizer ui;
};