﻿#include "RedImageButton.h"
// Реализация конструктора класса с установкой родительского окна;
RedButton::RedButton(QWidget* parent)
{
	// Установка родительского окна;
	setParent(parent);
	// Вывод сообщения при наведении указателя мыши на кнопку;
	setToolTip("Click!");
	// Загрузка картинки по умолчанию;
	currentButtonPosition = QPixmap("../../Materials/PushButton.png");
	// Установка фиксированного размера окна;
	setFixedSize(QSize(300, 300));
	// Коннект нажатия на кнопку мыши с методом setDown;
	connect(this, &QPushButton::pressed, this, &RedButton::setDown);
}
// Реализация метода отрисовки кнопки;
void RedButton::paintEvent(QPaintEvent* ev)
{
	// Создание объекта для отрисовки картинки;
	QPainter p(this);
	// Отрисовка картинки по нажатию кнопки;
	p.drawPixmap(ev->rect(), currentButtonPosition);
}
// Реализация метода возвращающего минимальный размер;
QSize RedButton::minimumSizeHint() const
{
	return QSize(100, 100);
}
// Реализация метода реакции кнопки на нажатие;
void RedButton::keyPressEvent(QKeyEvent* ev)
{
	// Вызов метода setDown;
	setDown();
}
// Реализация метода для установки кнопки в не нажатое положение;
void RedButton::setUp()
{
	// Установка текущей кнопки;
	currentButtonPosition = QPixmap("../../Materials/PushButton.png");
	update();
}
// Реализация метода для установки кнопки в нажатое положение;
void RedButton::setDown()
{
	// Установка текущей кнопки;
	currentButtonPosition = QPixmap("../../Materials/PushedButton.png");
	// Запуск таймера;
	QTimer::singleShot(100, this, &RedButton::setUp);
	update();
}