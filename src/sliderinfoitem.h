#ifndef SLIDERINFOITEM_H
#define SLIDERINFOITEM_H

#include <QGraphicsItem>

class SliderInfoItem : public QGraphicsItem
{
public:
	enum Side {Left, Right};

	SliderInfoItem(QGraphicsItem *parent = 0);

	QRectF boundingRect() const {return _boundingRect;}
	void paint(QPainter *painter, const QStyleOptionGraphicsItem *option,
	  QWidget *widget);

	void setText(const QString &text);
	void setSide(Side side);

private:
	void updateBoundingRect();

	Side _side;
	QString _text;
	QRectF _boundingRect;
};

#endif // SLIDERINFOITEM_H
