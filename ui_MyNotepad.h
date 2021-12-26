/********************************************************************************
** Form generated from reading UI file 'MyNotepad.ui'
**
** Created by: Qt User Interface Compiler version 5.12.8
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MYNOTEPAD_H
#define UI_MYNOTEPAD_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenu>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QTextEdit>
#include <QtWidgets/QToolBar>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_MyNotepad
{
public:
    QAction *actionNew;
    QAction *actionOpen;
    QAction *actionSaveAs;
    QAction *actionExit;
    QAction *actionCopy;
    QAction *actionPaste;
    QAction *actionCut;
    QAction *actionUndo;
    QAction *actionRedo;
    QWidget *centralwidget;
    QWidget *verticalLayoutWidget;
    QVBoxLayout *verticalLayout;
    QTextEdit *textEdit;
    QMenuBar *menubar;
    QMenu *menuFile;
    QMenu *menuEdit;
    QStatusBar *statusbar;
    QToolBar *toolBar;

    void setupUi(QMainWindow *MyNotepad)
    {
        if (MyNotepad->objectName().isEmpty())
            MyNotepad->setObjectName(QString::fromUtf8("MyNotepad"));
        MyNotepad->resize(800, 600);
        actionNew = new QAction(MyNotepad);
        actionNew->setObjectName(QString::fromUtf8("actionNew"));
        QIcon icon;
        icon.addFile(QString::fromUtf8(":/imgs/New.bmp"), QSize(), QIcon::Normal, QIcon::Off);
        actionNew->setIcon(icon);
        actionOpen = new QAction(MyNotepad);
        actionOpen->setObjectName(QString::fromUtf8("actionOpen"));
        QIcon icon1;
        icon1.addFile(QString::fromUtf8(":/imgs/Open.bmp"), QSize(), QIcon::Normal, QIcon::On);
        actionOpen->setIcon(icon1);
        actionSaveAs = new QAction(MyNotepad);
        actionSaveAs->setObjectName(QString::fromUtf8("actionSaveAs"));
        QIcon icon2;
        icon2.addFile(QString::fromUtf8(":/imgs/Save.bmp"), QSize(), QIcon::Normal, QIcon::On);
        actionSaveAs->setIcon(icon2);
        actionExit = new QAction(MyNotepad);
        actionExit->setObjectName(QString::fromUtf8("actionExit"));
        actionCopy = new QAction(MyNotepad);
        actionCopy->setObjectName(QString::fromUtf8("actionCopy"));
        actionPaste = new QAction(MyNotepad);
        actionPaste->setObjectName(QString::fromUtf8("actionPaste"));
        actionCut = new QAction(MyNotepad);
        actionCut->setObjectName(QString::fromUtf8("actionCut"));
        actionUndo = new QAction(MyNotepad);
        actionUndo->setObjectName(QString::fromUtf8("actionUndo"));
        actionRedo = new QAction(MyNotepad);
        actionRedo->setObjectName(QString::fromUtf8("actionRedo"));
        centralwidget = new QWidget(MyNotepad);
        centralwidget->setObjectName(QString::fromUtf8("centralwidget"));
        verticalLayoutWidget = new QWidget(centralwidget);
        verticalLayoutWidget->setObjectName(QString::fromUtf8("verticalLayoutWidget"));
        verticalLayoutWidget->setGeometry(QRect(130, 70, 521, 391));
        verticalLayout = new QVBoxLayout(verticalLayoutWidget);
        verticalLayout->setObjectName(QString::fromUtf8("verticalLayout"));
        verticalLayout->setContentsMargins(0, 0, 0, 0);
        textEdit = new QTextEdit(verticalLayoutWidget);
        textEdit->setObjectName(QString::fromUtf8("textEdit"));

        verticalLayout->addWidget(textEdit);

        MyNotepad->setCentralWidget(centralwidget);
        menubar = new QMenuBar(MyNotepad);
        menubar->setObjectName(QString::fromUtf8("menubar"));
        menubar->setGeometry(QRect(0, 0, 800, 22));
        menuFile = new QMenu(menubar);
        menuFile->setObjectName(QString::fromUtf8("menuFile"));
        menuEdit = new QMenu(menubar);
        menuEdit->setObjectName(QString::fromUtf8("menuEdit"));
        MyNotepad->setMenuBar(menubar);
        statusbar = new QStatusBar(MyNotepad);
        statusbar->setObjectName(QString::fromUtf8("statusbar"));
        MyNotepad->setStatusBar(statusbar);
        toolBar = new QToolBar(MyNotepad);
        toolBar->setObjectName(QString::fromUtf8("toolBar"));
        MyNotepad->addToolBar(Qt::TopToolBarArea, toolBar);

        menubar->addAction(menuFile->menuAction());
        menubar->addAction(menuEdit->menuAction());
        menuFile->addAction(actionNew);
        menuFile->addAction(actionOpen);
        menuFile->addAction(actionSaveAs);
        menuFile->addAction(actionExit);
        menuEdit->addAction(actionCopy);
        menuEdit->addAction(actionPaste);
        menuEdit->addAction(actionCut);
        menuEdit->addAction(actionUndo);
        menuEdit->addAction(actionRedo);
        toolBar->addAction(actionNew);
        toolBar->addAction(actionOpen);
        toolBar->addAction(actionSaveAs);

        retranslateUi(MyNotepad);

        QMetaObject::connectSlotsByName(MyNotepad);
    } // setupUi

    void retranslateUi(QMainWindow *MyNotepad)
    {
        MyNotepad->setWindowTitle(QApplication::translate("MyNotepad", "MyNotepad", nullptr));
        actionNew->setText(QApplication::translate("MyNotepad", "New", nullptr));
        actionOpen->setText(QApplication::translate("MyNotepad", "Open", nullptr));
        actionSaveAs->setText(QApplication::translate("MyNotepad", "SaveAs", nullptr));
        actionExit->setText(QApplication::translate("MyNotepad", "Exit", nullptr));
        actionCopy->setText(QApplication::translate("MyNotepad", "Copy", nullptr));
        actionPaste->setText(QApplication::translate("MyNotepad", "Paste", nullptr));
        actionCut->setText(QApplication::translate("MyNotepad", "Cut", nullptr));
        actionUndo->setText(QApplication::translate("MyNotepad", "Undo", nullptr));
        actionRedo->setText(QApplication::translate("MyNotepad", "Redo", nullptr));
        menuFile->setTitle(QApplication::translate("MyNotepad", "File", nullptr));
        menuEdit->setTitle(QApplication::translate("MyNotepad", "Edit", nullptr));
        toolBar->setWindowTitle(QApplication::translate("MyNotepad", "toolBar", nullptr));
    } // retranslateUi

};

namespace Ui {
    class MyNotepad: public Ui_MyNotepad {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MYNOTEPAD_H
