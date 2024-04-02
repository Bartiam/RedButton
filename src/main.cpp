#include "RedImageButton.h"

int main(int argc, char** argv)
{
	QApplication app(argc, argv);
	// Создание объекта QWidget в качестве родительского объекта;
	QWidget* window = new QWidget(nullptr);
	// Создание объекта RedButton;
	RedButton redButton(window);
	// Вызов метода show();
	window->show();
	return app.exec();
}