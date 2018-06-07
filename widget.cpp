#include "widget.h"
#include "ui_widget.h"

#include <QTimer>


double var_graph1 = 0;
double var_graph2 = 0;
double var_graph3 = 0;
double var_graph4 = 0;
double var_graph5 = 0;
double var_graph6 = 0;
double var_graph7 = 0;
double var_graph8 = 0;
double var_graph9 = 0;
double var_graph10 = 0;
double var_graph11 = 0;
double var_graph12 = 0;


QTimer *timer1 = new QTimer();

Widget::Widget(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::Widget)
{
    ui->setupUi(this);
    Widget::makePlot();
}

Widget::~Widget()
{
    delete ui;
}

void Widget::makePlot(){

    ui->customPlot->addGraph(); // blue line
    ui->customPlot->graph(0)->setPen(QPen(QColor(40, 110, 255)));

    QSharedPointer<QCPAxisTickerTime> timeTicker(new QCPAxisTickerTime);
    timeTicker->setTimeFormat("%h:%m:%s");
    ui->customPlot->xAxis->setTicker(timeTicker);
    ui->customPlot->axisRect()->setupFullAxesBox();
    ui->customPlot->yAxis->setRange(0.0 , 15.0);

    ui->customPlot->xAxis->setLabel("Time");
    ui->customPlot->yAxis->setLabel("Value");

    ui->customPlot->plotLayout()->insertRow(0);
    ui->customPlot->plotLayout()->addElement(0, 0, new QCPTextElement(ui->customPlot, "Graph1", QFont("sans", 12, QFont::Bold)));


    ui->customPlot_2->addGraph(); // blue line
    ui->customPlot_2->graph(0)->setPen(QPen(QColor(40, 110, 255)));

    //QSharedPointer<QCPAxisTickerTime> timeTicker(new QCPAxisTickerTime);
    timeTicker->setTimeFormat("%h:%m:%s");
    ui->customPlot_2->xAxis->setTicker(timeTicker);
    ui->customPlot_2->axisRect()->setupFullAxesBox();
    ui->customPlot_2->yAxis->setRange(0.0 , 15.0);

    ui->customPlot_2->xAxis->setLabel("Time");
    ui->customPlot_2->yAxis->setLabel("Value");

    ui->customPlot_2->plotLayout()->insertRow(0);
    ui->customPlot_2->plotLayout()->addElement(0, 0, new QCPTextElement(ui->customPlot_2, "Graph2", QFont("sans", 12, QFont::Bold)));



    ui->customPlot_3->addGraph(); // blue line
    ui->customPlot_3->graph(0)->setPen(QPen(QColor(40, 110, 255)));

    //QSharedPointer<QCPAxisTickerTime> timeTicker(new QCPAxisTickerTime);
    timeTicker->setTimeFormat("%h:%m:%s");
    ui->customPlot_3->xAxis->setTicker(timeTicker);
    ui->customPlot_3->axisRect()->setupFullAxesBox();
    ui->customPlot_3->yAxis->setRange(0.0 , 15.0);

    ui->customPlot_3->xAxis->setLabel("Time");
    ui->customPlot_3->yAxis->setLabel("Value");

    ui->customPlot_3->plotLayout()->insertRow(0);
    ui->customPlot_3->plotLayout()->addElement(0, 0, new QCPTextElement(ui->customPlot_3, "Graph3", QFont("sans", 12, QFont::Bold)));


    ui->customPlot_4->addGraph(); // blue line
    ui->customPlot_4->graph(0)->setPen(QPen(QColor(40, 110, 255)));

    //QSharedPointer<QCPAxisTickerTime> timeTicker(new QCPAxisTickerTime);
    timeTicker->setTimeFormat("%h:%m:%s");
    ui->customPlot_4->xAxis->setTicker(timeTicker);
    ui->customPlot_4->axisRect()->setupFullAxesBox();
    ui->customPlot_4->yAxis->setRange(0.0 , 15.0);

    ui->customPlot_4->xAxis->setLabel("Time");
    ui->customPlot_4->yAxis->setLabel("Value");

    ui->customPlot_4->plotLayout()->insertRow(0);
    ui->customPlot_4->plotLayout()->addElement(0, 0, new QCPTextElement(ui->customPlot_4, "Graph4", QFont("sans", 12, QFont::Bold)));


    ui->customPlot_5->addGraph(); // blue line
    ui->customPlot_5->graph(0)->setPen(QPen(QColor(40, 110, 255)));

    //QSharedPointer<QCPAxisTickerTime> timeTicker(new QCPAxisTickerTime);
    timeTicker->setTimeFormat("%h:%m:%s");
    ui->customPlot_5->xAxis->setTicker(timeTicker);
    ui->customPlot_5->axisRect()->setupFullAxesBox();
    ui->customPlot_5->yAxis->setRange(0.0 , 15.0);

    ui->customPlot_5->xAxis->setLabel("Time");
    ui->customPlot_5->yAxis->setLabel("Value");

    ui->customPlot_5->plotLayout()->insertRow(0);
    ui->customPlot_5->plotLayout()->addElement(0, 0, new QCPTextElement(ui->customPlot_5, "Graph5", QFont("sans", 12, QFont::Bold)));

    ui->customPlot_6->addGraph(); // blue line
    ui->customPlot_6->graph(0)->setPen(QPen(QColor(40, 110, 255)));

    //QSharedPointer<QCPAxisTickerTime> timeTicker(new QCPAxisTickerTime);
    timeTicker->setTimeFormat("%h:%m:%s");
    ui->customPlot_6->xAxis->setTicker(timeTicker);
    ui->customPlot_6->axisRect()->setupFullAxesBox();
    ui->customPlot_6->yAxis->setRange(0.0 , 15.0);

    ui->customPlot_6->xAxis->setLabel("Time");
    ui->customPlot_6->yAxis->setLabel("Value");

    ui->customPlot_6->plotLayout()->insertRow(0);
    ui->customPlot_6->plotLayout()->addElement(0, 0, new QCPTextElement(ui->customPlot_6, "Graph6", QFont("sans", 12, QFont::Bold)));


    ui->customPlot_7->addGraph(); // blue line
    ui->customPlot_7->graph(0)->setPen(QPen(QColor(40, 110, 255)));

    //QSharedPointer<QCPAxisTickerTime> timeTicker(new QCPAxisTickerTime);
    timeTicker->setTimeFormat("%h:%m:%s");
    ui->customPlot_7->xAxis->setTicker(timeTicker);
    ui->customPlot_7->axisRect()->setupFullAxesBox();
    ui->customPlot_7->yAxis->setRange(0.0 , 15.0);

    ui->customPlot_7->xAxis->setLabel("Time");
    ui->customPlot_7->yAxis->setLabel("Value");

    ui->customPlot_7->plotLayout()->insertRow(0);
    ui->customPlot_7->plotLayout()->addElement(0, 0, new QCPTextElement(ui->customPlot_7, "Graph7", QFont("sans", 12, QFont::Bold)));


    ui->customPlot_8->addGraph(); // blue line
    ui->customPlot_8->graph(0)->setPen(QPen(QColor(40, 110, 255)));

    //QSharedPointer<QCPAxisTickerTime> timeTicker(new QCPAxisTickerTime);
    timeTicker->setTimeFormat("%h:%m:%s");
    ui->customPlot_8->xAxis->setTicker(timeTicker);
    ui->customPlot_8->axisRect()->setupFullAxesBox();
    ui->customPlot_8->yAxis->setRange(0.0 , 15.0);

    ui->customPlot_8->xAxis->setLabel("Time");
    ui->customPlot_8->yAxis->setLabel("Value");

    ui->customPlot_8->plotLayout()->insertRow(0);
    ui->customPlot_8->plotLayout()->addElement(0, 0, new QCPTextElement(ui->customPlot_8, "Graph8", QFont("sans", 12, QFont::Bold)));


    ui->customPlot_9->addGraph(); // blue line
    ui->customPlot_9->graph(0)->setPen(QPen(QColor(40, 110, 255)));

    //QSharedPointer<QCPAxisTickerTime> timeTicker(new QCPAxisTickerTime);
    timeTicker->setTimeFormat("%h:%m:%s");
    ui->customPlot_9->xAxis->setTicker(timeTicker);
    ui->customPlot_9->axisRect()->setupFullAxesBox();
    ui->customPlot_9->yAxis->setRange(0.0 , 15.0);

    ui->customPlot_9->xAxis->setLabel("Time");
    ui->customPlot_9->yAxis->setLabel("Value");

    ui->customPlot_9->plotLayout()->insertRow(0);
    ui->customPlot_9->plotLayout()->addElement(0, 0, new QCPTextElement(ui->customPlot_9, "Graph9", QFont("sans", 12, QFont::Bold)));



    ui->customPlot_10->addGraph(); // blue line
    ui->customPlot_10->graph(0)->setPen(QPen(QColor(40, 110, 255)));

    //QSharedPointer<QCPAxisTickerTime> timeTicker(new QCPAxisTickerTime);
    timeTicker->setTimeFormat("%h:%m:%s");
    ui->customPlot_10->xAxis->setTicker(timeTicker);
    ui->customPlot_10->axisRect()->setupFullAxesBox();
    ui->customPlot_10->yAxis->setRange(0.0 , 15.0);

    ui->customPlot_10->xAxis->setLabel("Time");
    ui->customPlot_10->yAxis->setLabel("Value");

    ui->customPlot_10->plotLayout()->insertRow(0);
    ui->customPlot_10->plotLayout()->addElement(0, 0, new QCPTextElement(ui->customPlot_10, "Graph10", QFont("sans", 12, QFont::Bold)));



    ui->customPlot_11->addGraph(); // blue line
    ui->customPlot_11->graph(0)->setPen(QPen(QColor(40, 110, 255)));

    //QSharedPointer<QCPAxisTickerTime> timeTicker(new QCPAxisTickerTime);
    timeTicker->setTimeFormat("%h:%m:%s");
    ui->customPlot_11->xAxis->setTicker(timeTicker);
    ui->customPlot_11->axisRect()->setupFullAxesBox();
    ui->customPlot_11->yAxis->setRange(0.0 , 15.0);

    ui->customPlot_11->xAxis->setLabel("Time");
    ui->customPlot_11->yAxis->setLabel("Value");

    ui->customPlot_11->plotLayout()->insertRow(0);
    ui->customPlot_11->plotLayout()->addElement(0, 0, new QCPTextElement(ui->customPlot_11, "Graph11", QFont("sans", 12, QFont::Bold)));


    ui->customPlot_12->addGraph(); // blue line
    ui->customPlot_12->graph(0)->setPen(QPen(QColor(40, 110, 255)));

    //QSharedPointer<QCPAxisTickerTime> timeTicker(new QCPAxisTickerTime);
    timeTicker->setTimeFormat("%h:%m:%s");
    ui->customPlot_12->xAxis->setTicker(timeTicker);
    ui->customPlot_12->axisRect()->setupFullAxesBox();
    ui->customPlot_12->yAxis->setRange(0.0 , 15.0);

    ui->customPlot_12->xAxis->setLabel("Time");
    ui->customPlot_12->yAxis->setLabel("Value");

    ui->customPlot_12->plotLayout()->insertRow(0);
    ui->customPlot_12->plotLayout()->addElement(0, 0, new QCPTextElement(ui->customPlot_12, "Graph12", QFont("sans", 12, QFont::Bold)));



    connect(timer1,SIGNAL(timeout()),this,SLOT(realtimeDataSlot()));
    timer1->start(1000);
}

void Widget::realtimeDataSlot(){

    ui->label->setText("MPPT = String");

    var_graph1 = rand()%100;
    var_graph2 = rand()%10;
    var_graph3 = rand()%10;
    var_graph4 = rand()%10;
    var_graph5 = rand()%10;
    var_graph6 = rand()%10;
    var_graph7 = rand()%10;
    var_graph8 = rand()%10;
    var_graph9 = rand()%10;
    var_graph10 = rand()%10;
    var_graph11 = rand()%10;
    var_graph12 = rand()%10;

    static QTime time(QTime::currentTime());
    // calculate new data points:
    double key = time.elapsed()/1000.0; // time elapsed since start of demo, in seconds
    static double lastPointKey = 0;
    if (key-lastPointKey > 0.002) // at most add point every 2 ms
    {
      // add data to lines:
      ui->customPlot->graph(0)->addData(key, var_graph1);
      ui->customPlot_2->graph(0)->addData(key, var_graph2);
      ui->customPlot_3->graph(0)->addData(key, var_graph3);
      ui->customPlot_4->graph(0)->addData(key, var_graph4);
      ui->customPlot_5->graph(0)->addData(key, var_graph5);
      ui->customPlot_6->graph(0)->addData(key, var_graph6);
      ui->customPlot_7->graph(0)->addData(key, var_graph7);
      ui->customPlot_8->graph(0)->addData(key, var_graph8);
      ui->customPlot_9->graph(0)->addData(key, var_graph9);
      ui->customPlot_10->graph(0)->addData(key, var_graph10);
      ui->customPlot_11->graph(0)->addData(key, var_graph11);
      ui->customPlot_12->graph(0)->addData(key, var_graph12);
      // rescale value (vertical) axis to fit the current data:
      ui->customPlot->graph(0)->rescaleValueAxis();
      ui->customPlot_2->graph(0)->rescaleValueAxis();
      ui->customPlot_3->graph(0)->rescaleValueAxis();
      ui->customPlot_4->graph(0)->rescaleValueAxis();
      ui->customPlot_5->graph(0)->rescaleValueAxis();
      ui->customPlot_6->graph(0)->rescaleValueAxis();
      ui->customPlot_7->graph(0)->rescaleValueAxis();
      ui->customPlot_8->graph(0)->rescaleValueAxis();
      ui->customPlot_9->graph(0)->rescaleValueAxis();
      ui->customPlot_10->graph(0)->rescaleValueAxis();
      ui->customPlot_11->graph(0)->rescaleValueAxis();
      ui->customPlot_12->graph(0)->rescaleValueAxis();
      lastPointKey = key;
    }
    // make key axis range scroll with the data (at a constant range size of 8):
    ui->customPlot->xAxis->setRange(key, 8, Qt::AlignRight);
    ui->customPlot_2->xAxis->setRange(key, 8, Qt::AlignRight);
    ui->customPlot_3->xAxis->setRange(key, 8, Qt::AlignRight);
    ui->customPlot_4->xAxis->setRange(key, 8, Qt::AlignRight);
    ui->customPlot_5->xAxis->setRange(key, 8, Qt::AlignRight);
    ui->customPlot_6->xAxis->setRange(key, 8, Qt::AlignRight);
    ui->customPlot_7->xAxis->setRange(key, 8, Qt::AlignRight);
    ui->customPlot_8->xAxis->setRange(key, 8, Qt::AlignRight);
    ui->customPlot_9->xAxis->setRange(key, 8, Qt::AlignRight);
    ui->customPlot_10->xAxis->setRange(key, 8, Qt::AlignRight);
    ui->customPlot_11->xAxis->setRange(key, 8, Qt::AlignRight);
    ui->customPlot_12->xAxis->setRange(key, 8, Qt::AlignRight);

    ui->customPlot->replot();
    ui->customPlot_2->replot();
    ui->customPlot_3->replot();
    ui->customPlot_4->replot();
    ui->customPlot_5->replot();
    ui->customPlot_6->replot();
    ui->customPlot_7->replot();
    ui->customPlot_8->replot();
    ui->customPlot_9->replot();
    ui->customPlot_10->replot();
    ui->customPlot_11->replot();
    ui->customPlot_12->replot();

}
