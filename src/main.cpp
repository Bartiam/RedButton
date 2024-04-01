#include "RedImageButton.h"

int main(int argc, char** argv)
{
	QApplication app(argc, argv);
	RedButton redButton(nullptr);
	redButton.move(1000, 400);
	redButton.show();
	return app.exec();
}