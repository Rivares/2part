#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>
#include <QtGui>
#include <vector>

using namespace std;

#define N 100000
#define z 5
#define t1 1
#define Rp 0.004302
#define Rj 0.00001222
#define E 0.000000001


namespace Ui {
class MainWindow;
}

class MainWindow : public QMainWindow
{
    Q_OBJECT
    
public:
    explicit MainWindow(QWidget *parent = 0);
    ~MainWindow();

    void drawGraph(bool notEmpty = 0);
    void recountPixels();
    void getData();
    double f(double i, short j);
    double f1(double i, short j);

    
private slots:
    void on_exit_clicked();

    void on_clear_clicked();

    void on_draw_clicked();

    void on_save_clicked();

    void on_valTemper1_textChanged();

private:
    Ui::MainWindow *ui;

    vector <double> bmp;
    vector<vector<double> > x1;
    vector<vector<double> > y1;
    double Gamma1;
    double Gamma2;
    double buf1[z];
    double buf2[z];

    double leftX,rightX;
    double leftY,rightY;
    int pictWidth,pictHeight;
    double step;
    double onePixelX,onePixelY;
    double Ox,Oy;

};

#endif // MAINWINDOW_H
