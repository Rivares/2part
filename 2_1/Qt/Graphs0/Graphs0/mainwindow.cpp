#include "mainwindow.h"
#include "ui_mainwindow.h"
#include <cmath>
#include <QDebug>
#include <QString>
#include <vector>
using namespace std;

MainWindow::MainWindow(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::MainWindow), buf1 {67.94, 67.94, 69.96, 72.04, 72.04}, buf2 {6.5, 6.5, 4.613, 2.78, 2.78}
{
    //----------------------------------

        Gamma1 = (0.07453 * t1) / 0.5;
        Gamma2 = (0.0002402 * t1) / 0.5;


        bmp.assign(z,0);

        for (int i = 0; i < N; i++)
        {
            x1.push_back(bmp);
        }

        for (int i = 0; i < N; i++)
        {
            y1.push_back(bmp);
        }


            for(int i = 0; i < N; i++)
            {
               x1[i][0] = 67.94;  // 2(1)
               x1[i][1] = 0; x1[i][2] = 0; x1[i][3] = 0;
               x1[i][z-1] = 72.04;
            }

            for(short i = 0; i < z; i++)  // 3(1)
            {
               x1[0][i] = buf1[i];
            }


           for(int i = 0; i < N; i++)
            {
               y1[i][0] = 6.5;  // 2(2)
               y1[i][1] = 0; y1[i][2] = 0; y1[i][3] = 0;
               y1[i][z-1] = 2.78;
            }

            for(short i = 0; i < z; i++) // 3(2)
            {
               y1[0][i] = buf2[i];
            }

            for(unsigned int i = 1; i < N; i++)   // n: t
            {
               for(short j = 1; j < (z-1); j++)  // i: z
               {
                  x1[i][j] = x1[i-1][j] * (-Gamma1 + 1 + (t1 * Rp)) + (Gamma1 * x1[i-1][j-1]) - (t1 * Rp * E * y1[i-1][(z-1)-j]);
                  y1[i][j] = y1[i-1][j] * (-Gamma2 + 1 + (t1 * Rj * E)) + (Gamma2 * y1[i-1][j-1]) -  (t1 * Rj * x1[i-1][(z-1)-j]);
               }
            }


    //----------------------------------

    ui->setupUi(this);
    ui->inputLeftX->setReadOnly(true);
    ui->inputLeftY->setReadOnly(true);
    pictHeight = 370;
    pictWidth = 540;
    step = 0.1;
    leftX = -100; rightX = 100;
    leftY = -100; rightY = 100;
    drawGraph();
}


MainWindow::~MainWindow()
{
    delete ui;
}

double MainWindow::f(double i, short j)
{
    return x1[(int)i][j];
}

double MainWindow::f1(double i, short j)
{
    return y1[(int)i][j];
}


void MainWindow::recountPixels()
{
    onePixelX = 540.0/(rightX-leftX);
    onePixelY = 370.0/(rightY-leftY);
    Ox = fabs(leftX); Oy = rightY;
}

void MainWindow::getData()
{
    leftX = ui->inputLeftX->text().toDouble();
    rightX = ui->inputRightX->text().toDouble();
    leftY = ui->inputLeftY->text().toDouble();
    rightY = ui->inputRightY->text().toDouble();
    step = 1.0/ui->inputAccuracy->text().toDouble();
}

void MainWindow::drawGraph(bool notEmpty)
{
    QPixmap graph(540,370);
    QPainter paint;
    paint.begin(&graph);
    paint.eraseRect(0,0,540,370);
    paint.drawLine(Ox*onePixelX,0,Ox*onePixelX,pictHeight);
    paint.drawLine(0,Oy*onePixelY,pictWidth,Oy*onePixelY);

    paint.setPen(QPen(Qt::black,3));
    for(double i = leftX;i<=rightX;i+=10.0)
        paint.drawPoint((i+Ox)*onePixelX,Oy*onePixelY);
    for(double i = leftY;i<=rightY;i+=10.0)
        paint.drawPoint(Ox*onePixelX,(Oy-i)*onePixelY);

    if(!notEmpty) {
        paint.end();
        ui->outputGraph->setPixmap(graph);
        return;
    }

    paint.setPen(QPen(Qt::green,1,Qt::SolidLine));
    paint.setRenderHint(QPainter::Antialiasing, true);
    QPainterPath path,p[3];
    bool first[2] = {1,1};

    double buff = step;
    for(short j = 1; j < (z-1); ++j)
    {
        for(double i = (double)leftX+step; (i <= (double)rightX); i+=step) {
             if(!isnan(f(i, j))) {
                if(first[0]) {
                    path.moveTo((i+Ox)*onePixelX,(Oy-f(i, j))*onePixelY);
                    first[0] = false;
                }
                else
                    path.lineTo((i+Ox)*onePixelX,(Oy-f(i, j))*onePixelY);
            }

            if(!isnan(f1(i, j))) {
                if(first[1]) {
                    p[0].moveTo((i+Ox)*onePixelX,(Oy-f1(i, j))*onePixelY);
                    first[1] = false;
                }
                else
                    p[0].lineTo((i+Ox)*onePixelX,(Oy-f1(i, j))*onePixelY);
                }

        }

        path.moveTo(Ox,(Oy-f(0, j+1))*onePixelY);
        p[0].moveTo(Ox,(Oy-f1(0, j+1))*onePixelY);
        step = buff;
    }


    if(ui->Tpar->isChecked()) {
        QString str = QString::number(x1[N-1][1]);
        ui->valTemper1->setText(str);

        str = QString::number(x1[N-1][2]);
        ui->valTemper2->setText(str);

        str = QString::number(x1[N-1][3]);
        ui->valTemper3->setText(str);
    }

    if(ui->Tjyd->isChecked()) {
        QString str = QString::number(y1[N-1][1]);
        ui->valTemper1->setText(str);

        str = QString::number(y1[N-1][2]);
        ui->valTemper2->setText(str);

        str = QString::number(y1[N-1][3]);
        ui->valTemper3->setText(str);
    }


    if(ui->Tpar->isChecked()) {
        paint.setPen(QPen(Qt::blue,1,Qt::SolidLine));
        paint.drawPath(path);
    }
    if(ui->Tjyd->isChecked()) {

        paint.setPen(QPen(Qt::green,1,Qt::SolidLine));
        paint.drawPath(p[0]);
    }

    paint.end();
    ui->outputGraph->setPixmap(graph);
    return;
}

void MainWindow::on_exit_clicked()
{
    this->close();
}

void MainWindow::on_clear_clicked()
{
    recountPixels();
    drawGraph();
}

void MainWindow::on_draw_clicked()
{
    getData();
    recountPixels();
    drawGraph(1);
}

void MainWindow::on_save_clicked()
{
    QTime time = QTime::currentTime();
    QDate date = QDate::currentDate();
    QString name;
   if(date.day()<10)
        name += "0";
    name += QString::number(date.day())+".";
    if(date.month()<10)
        name += "0";
    name += QString::number(date.month())+".";
    name += QString::number(date.year())+"_";
    if(time.hour()<10)
        name += "0";
    name += QString::number(time.hour())+"-";
    if(time.minute()<10)
        name += "0";
    name += QString::number(time.minute())+"-";
    if(time.second()<10)
        name += "0";
    name += QString::number(time.second());
    QFile file(name+".png");
    qDebug() << name;
    file.open(QIODevice::WriteOnly);
/*    QMessageBox msgBox;
    msgBox.setStandardButtons(QMessageBox::Ok);
    if(ui->outputGraph->pixmap()->save(&file,"PNG")) {
        msgBox.setText("Saved to program folder with name: "+name+".png");
        msgBox.setWindowTitle("Saved!");
    }
    else {
        msgBox.setText("Error saving.");
        msgBox.setWindowTitle("Error!");
    }
    msgBox.exec(); */
}


void MainWindow::on_valTemper1_textChanged()
{}
