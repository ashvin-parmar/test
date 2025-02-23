#ifndef DRAWWIDGET_H
#define DRAWWIDGET_H

#include <QWidget>
#include <QPainter>

class DrawWidget : public QWidget
{
    Q_OBJECT

public:
    explicit DrawWidget(QWidget *parent = nullptr);
    void clear() ;
protected:
    void paintEvent(QPaintEvent *event) override;

};

#endif // DRAWWIDGET_H
