// La Vue-Controlleur pour calculatrice simple.
// Par Francois-R.Boyer@PolyMtl.ca


#pragma warning(push, 0) // Sinon Qt fait des avertissements à /W4.
#include <QHBoxLayout>
#include <QPushButton>
#include <QButtonGroup>
#include <QLabel>
#include <QString>
#include <QVariant>
#pragma pop()
#include <iostream>
#include <type_traits>
#include <cppitertools/range.hpp>
#include "mainwindow.hpp"
#include <QApplication>
#include <QMainWindow>
#include <QGridLayout>


using iter::range;

MainWindow::MainWindow(QWidget* parent) : QMainWindow(parent)
{
    // Configuration de la fenêtre principale
    setWindowTitle("Jeu d'échecs");

    // Création du widget central pour la fenêtre principale
    QWidget* centralWidget = new QWidget(this);
    setCentralWidget(centralWidget);

    // Création d'un layout de grille pour l'échiquier
    QGridLayout* gridLayout = new QGridLayout(centralWidget);

    // Création des boutons pour les cases de l'échiquier
    const int numRows = 8;
    const int numColumns = 8;
    QPushButton* chessBoard[numRows][numColumns];
    for (int row = 0; row < numRows; ++row) {
        for (int col = 0; col < numColumns; ++col) {
            chessBoard[row][col] = new QPushButton(this);
            if ((row + col) % 2 == 0) {
                chessBoard[row][col]->setStyleSheet("background-color: white;");
            }
            else {
                chessBoard[row][col]->setStyleSheet("background-color: lightGray;");
            }
            chessBoard[row][col]->setFixedSize(60, 60); // Taille des cases de l'échiquier
            gridLayout->addWidget(chessBoard[row][col], row, col);
        }
    }
};