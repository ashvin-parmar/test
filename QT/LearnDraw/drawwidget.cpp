#include "drawwidget.h"

DrawWidget::DrawWidget(QWidget *parent)
    : QWidget(parent) {}

void DrawWidget::paintEvent(QPaintEvent *event)
{
    QPainter painter(this);  // Attach painter to this widget
    painter.setPen(QPen(Qt::red, 3));
    painter.drawLine(50, 50, 200, 200);  // Draws a red line
}

void DrawWidget::clear()
{
    // Forces repaint to remove the drawing
}
