#include "principal.h"
#include "ui_principal.h"

Principal::Principal(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::Principal)
{
    ui->setupUi(this);
}

Principal::~Principal()
{
    delete ui;
}

void Principal::paintEvent(QPaintEvent *event)
{
    // Objeto que permite dibujar (Picaso)
    // Se envía como dispositivo a este (this) objeto (Principal)
    QPainter painter(this);

    // Establecer un pincel azul
    painter.setPen(Qt::blue);

    // Establecer un tipo de letra y tamaño
    painter.setFont(QFont("Arial", 30));

    // Dibujar un texto
    painter.drawText(rect(), Qt::AlignLeft, "Rodrigo");

    // Crear un pincel
    QPen pincel;
    pincel.setColor(Qt::red);
    pincel.setWidth(10);
    pincel.setCapStyle(Qt::RoundCap);

    // establecer nuevo pincel
    painter.setPen(pincel);

    // Dibujar una línea
    painter.drawLine(100,100, 200,200);

    // Estableer una brocha
    painter.setBrush(Qt::lightGray);

    // Dibujar un rectangulo
    painter.drawRect(300,100,50,100);

    // Crear un nuevo pincel
    QPen pincel2;
    pincel2.setWidth(5);
    pincel2.setColor(Qt::darkGreen);
    pincel2.setStyle(Qt::DotLine);

    // Establecer nuevo pincel
    painter.setPen(pincel2);
    painter.setBrush(Qt::green);

    // Dibujar una circunferencia
    painter.drawEllipse(400,100,50, 50);

    // Dibujar un arco
    QRectF rectangle(500.0, 100.0, 50.0, 50.0);
      int startAngle = 30 * 16;
      int spanAngle = 120 * 16;

    painter.drawArc(rectangle,startAngle, spanAngle);

    QPen pincel3;
    pincel3.setWidth(5);
    pincel3.setColor(Qt::darkGray);
    pincel3.setCapStyle(Qt::FlatCap);

    QPen pincel4;
    pincel4.setWidth(7);
    pincel4.setColor(Qt::yellow);
    pincel4.setCapStyle(Qt::FlatCap);

    QPen pincel6;
    pincel6.setWidth(7);
    pincel6.setColor(Qt::cyan);
    pincel6.setCapStyle(Qt::FlatCap);


    QPen pincel5;
    pincel5.setWidth(5);
    pincel5.setColor(Qt::black);
    pincel5.setCapStyle(Qt::FlatCap);

    painter.setPen(pincel3);
    painter.drawLine(300,500,530,350);
    painter.setPen(pincel4);
    painter.setBrush(Qt::yellow);
    painter.drawEllipse(250,490,50,50);
    painter.setPen(pincel6);
    painter.setBrush(Qt::cyan);
    painter.drawEllipse(490,340,50,50);

    QPointF triangulo[3] =
    {
        QPointF(430,540),
        QPointF(380,540),
        QPointF(400,435)
    };
    painter.setPen(pincel5);
    painter.setBrush(Qt::black);
    painter.drawPolygon(triangulo,3);



}

