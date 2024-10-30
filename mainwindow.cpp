#include "mainwindow.h"
#include "./ui_mainwindow.h"

MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent), ui(new Ui::MainWindow) {
    ui->setupUi(this);

    // move the 'connect to robot' toolbar action to the bottom
    // by inserting an expanding invisible widget in the toolbar
    QWidget* empty = new QWidget();
    empty->setSizePolicy(QSizePolicy::Expanding,QSizePolicy::Expanding);
    ui->toolBar->insertWidget(ui->actionConnect_to_the_robot, empty);

}

MainWindow::~MainWindow() { delete ui; }

void MainWindow::on_actionExit_triggered()
{
    exit(0);
}



void MainWindow::on_actionVisual_programming_triggered()
{
    ui->modes->setCurrentIndex(0);
}


void MainWindow::on_actionFace_editor_triggered()
{
    ui->modes->setCurrentIndex(1);
}


void MainWindow::on_actionDialogue_Editor_triggered()
{
    ui->modes->setCurrentIndex(2);
}

