#include "mainwindow.h"
#include "ui_mainwindow.h"
#include<QString> //Bookstore for the use of text strings
#include<cmath>  //Library for use of mathematical function


MainWindow::MainWindow(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::MainWindow)
{
    ui->setupUi(this);

    // Connections of the buttons to use.
    // each button with its corresponding name to be able to perform the manipulation of these.
    connect(ui->Metodo,SIGNAL(clicked()),this,SLOT(metodo()));
    connect(ui->limpiar,SIGNAL(clicked()),this,SLOT(limpiar()));
    connect(ui->salir,SIGNAL(clicked()),this,SLOT(close()));

}

MainWindow::~MainWindow()
{
    delete ui;
}
void MainWindow::metodo (){
     QString temp,temp2,temp3,temp4,temp5; //Temporary use text strings. this strings serve to display on the screen the messages we say.
   double a1=ui->a1->value();               // for example, display the results in a text box.
   double a2=ui->a2->value();
   double a3=ui->a3->value();
   double a4=ui->a4->value();
   double b1=ui->b1->value();              // double b2=ui->b2->value();. These expressions serve to make the connection of the elements of the grafuca interface with the code.
   double b2=ui->b2->value();
   double b3=ui->b3->value();
   double b4=ui->b4->value();
   double c1=ui->c1->value();
   double c2=ui->c2->value();
   double c3=ui->c3->value();
   double c4=ui->c4->value();
   double d1=ui->d1->value();
   double d2=ui->d2->value();
   double d3=ui->d3->value();
   double d4=ui->d4->value();
   double e1=ui->e1->value();
   double e2=ui->e2->value();
   double e3=ui->e3->value();
   double e4=ui->e4->value();

   // Initialization of the variables all landed to zero, together with the constants. This is done to determine the value of a literal.
   double x1=0.0, x2=0.0, x4=0.0, x3=0, const1=0.00, const2=0.00, const3=0.00, const4=0.00, const5=0.00, const6=0.00;




       const1=(a2/a1);            // When splitting row 2 of matrix between row 1, the second element of the first column is deleted and zeroed.
       a2=a2-(a1*(a2/a1));        // So for the other elements.
       b2=b2-(b1*(const1));
       c2=c2-(c1*(const1));
       d2=d2-(d1*(const1));
       e2=e2-(e1*(const1));

       const2=(a3/a1);             // We landed the third element in (0)
       a3=a3-(a1*(a3/a1));
       b3=b3-(b1*(const2));
       c3=c3-(c1*(const2));
       d3=d3-(d1*(const2));
       e3=e3-(e1*(const2));

       const3=(a4/a1);
       a4=a4-(a1*(a4/a1));
       b4=b4-(b1*(const3));
       c4=c4-(c1*(const3));
       d4=d4-(d1*(const3));
       e4=e4-(e1*(const3));

       const4=(b3/b2);
       b3=b3-(b2*(b3/b2));
       c3=c3-(c2*(const4));
       d3=d3-(d2*(const4));
       e3=e3-(e2*(const4));

       const5=(b4/b2);
       b4=b4-(b2*(b4/b2));
       c4=c4-(c2*(const5));
       d4=d4-(d2*(const5));
       e4=e4-(e2*(const5));

       const6=(c4/c3);
       c4=c4-(c3*(c4/c3));
       d4=d4-(d3*(const6));
       e4=e4-(e3*(const6));

       // The value of x4 is found because the other literals are placed, at the moment of operating the equations, they are annulled.
       // This allows to find the value of variable 4.
       x4=e4/d4;

    // con estas ecuaciones podemos encontrar los valores de x1, x2 y x3
       x3=((e3-(d3*x4))/c3);
       x2=((e2-(x3*c2)-(x4*d2))/b2);
       x1=((e1-(b1*x2)-(c1*x3)-(d1*x4))/a1);


       // Expressions that allow the printing of text strings on the screen.
       temp.append("x1=").append(temp2.setNum(x1)).append("\nx2=").append(temp3.setNum(x2)).append("\nx3=").append(temp4.setNum(x3)).append("\nx4=").append(temp5.setNum(x4));
      ui->x4->setText(temp);   // the value of the first literal to be found is displayed.
}

void MainWindow::limpiar(){    // All items are set to zero, to erase their contents and again
    ui->a1->setValue(0.0);     // be able to place new values
    ui->a2->setValue(0.0);
    ui->a3->setValue(0.0);
    ui->a4->setValue(0.0);
    ui->b1->setValue(0.0);
    ui->b2->setValue(0.0);
    ui->b3->setValue(0.0);
    ui->b4->setValue(0.0);
    ui->c1->setValue(0.0);
    ui->c2->setValue(0.0);
    ui->c3->setValue(0.0);
    ui->c4->setValue(0.0);
    ui->d1->setValue(0.0);
    ui->d2->setValue(0.0);
    ui->d3->setValue(0.0);
    ui->d4->setValue(0.0);
    ui->e1->setValue(0.0);
    ui->e2->setValue(0.0);
    ui->e3->setValue(0.0);
    ui->e4->setValue(0.0);
}
