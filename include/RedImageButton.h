#pragma once
#include <QApplication>
#include <QPushButton>
#include <QPixMap>
#include <QPaintEvent>
#include <Qpainter>
#include <QTimer>

class RedButton : public QPushButton
{
	// Макрос для создания moc объектов;
	Q_OBJECT

public:
	// Конструктор по умолчанию;
	RedButton() = default;
	// Прототип конструктора класса с установкой родительского окна;
	RedButton(QWidget* parent);
	// Прототип метода отрисовки;
	void paintEvent(QPaintEvent *ev) override;
	// Прототип метода указывающего минимальный размер виджета;
	QSize minimumSizeHint() const override;
	// Прототип метода ;
	void keyPressEvent(QKeyEvent *ev) override;

public slots:
	// Прототип слота для установки кнопки в не нажатое положение;
	void setUp();
	// Прототип слота для установки кнопки в нажатое положение;
	void setDown();
private:
	// Переменная для установки текущей кнопки;
	QPixmap currentButtonPosition;
};