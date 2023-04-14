#pragma once
// La Vue-Controlleur pour calculatrice simple.
// Par Francois-R.Boyer@PolyMtl.ca


#pragma warning(push, 0) // Sinon Qt fait des avertissements à /W4.
#include <QMainWindow>
#include <QPushButton>
#include <QString>
#include <QLabel>
#pragma pop()

class MainWindow : public QMainWindow
{
	Q_OBJECT
		
public:  
	MainWindow(QWidget* parent = nullptr);
	~MainWindow() = default;
};