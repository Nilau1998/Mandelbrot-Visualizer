#pragma once

#include <QMainWindow>

namespace Ui {
    class MandelbrotVisualizer;
}

class MandelbrotVisualizer : public QMainWindow {

    public:
        explicit MandelbrotVisualizer(QMainWindow *parent = nullptr);
        ~MandelbrotVisualizer();

    private:
        Ui::MandelbrotVisualizer *ui;
};