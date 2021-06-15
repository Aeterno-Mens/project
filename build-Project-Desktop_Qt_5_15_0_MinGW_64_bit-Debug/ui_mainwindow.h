/********************************************************************************
** Form generated from reading UI file 'mainwindow.ui'
**
** Created by: Qt User Interface Compiler version 5.15.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MAINWINDOW_H
#define UI_MAINWINDOW_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QListWidget>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenu>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QTextEdit>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_MainWindow
{
public:
    QAction *action_Quit;
    QAction *actionOpen;
    QWidget *centralwidget;
    QGridLayout *gridLayout;
    QPushButton *save_file;
    QLineEdit *sf_name;
    QVBoxLayout *verticalLayout_3;
    QPushButton *add_note;
    QTextEdit *note_input;
    QVBoxLayout *verticalLayout_2;
    QLabel *note_text;
    QLineEdit *note_name;
    QTextEdit *note_output;
    QVBoxLayout *verticalLayout;
    QLabel *search_text;
    QLineEdit *search_input;
    QLabel *label_3;
    QListWidget *notes_list;
    QPushButton *delete_note;
    QMenuBar *menubar;
    QMenu *menu;
    QStatusBar *statusbar;

    void setupUi(QMainWindow *MainWindow)
    {
        if (MainWindow->objectName().isEmpty())
            MainWindow->setObjectName(QString::fromUtf8("MainWindow"));
        MainWindow->resize(887, 678);
        action_Quit = new QAction(MainWindow);
        action_Quit->setObjectName(QString::fromUtf8("action_Quit"));
        actionOpen = new QAction(MainWindow);
        actionOpen->setObjectName(QString::fromUtf8("actionOpen"));
        centralwidget = new QWidget(MainWindow);
        centralwidget->setObjectName(QString::fromUtf8("centralwidget"));
        gridLayout = new QGridLayout(centralwidget);
        gridLayout->setObjectName(QString::fromUtf8("gridLayout"));
        save_file = new QPushButton(centralwidget);
        save_file->setObjectName(QString::fromUtf8("save_file"));

        gridLayout->addWidget(save_file, 0, 0, 1, 1);

        sf_name = new QLineEdit(centralwidget);
        sf_name->setObjectName(QString::fromUtf8("sf_name"));
        sf_name->setClearButtonEnabled(true);

        gridLayout->addWidget(sf_name, 0, 1, 1, 1);

        verticalLayout_3 = new QVBoxLayout();
        verticalLayout_3->setObjectName(QString::fromUtf8("verticalLayout_3"));
        add_note = new QPushButton(centralwidget);
        add_note->setObjectName(QString::fromUtf8("add_note"));

        verticalLayout_3->addWidget(add_note);

        note_input = new QTextEdit(centralwidget);
        note_input->setObjectName(QString::fromUtf8("note_input"));

        verticalLayout_3->addWidget(note_input);


        gridLayout->addLayout(verticalLayout_3, 2, 0, 2, 3);

        verticalLayout_2 = new QVBoxLayout();
        verticalLayout_2->setObjectName(QString::fromUtf8("verticalLayout_2"));
        note_text = new QLabel(centralwidget);
        note_text->setObjectName(QString::fromUtf8("note_text"));

        verticalLayout_2->addWidget(note_text);

        note_name = new QLineEdit(centralwidget);
        note_name->setObjectName(QString::fromUtf8("note_name"));
        note_name->setClearButtonEnabled(true);

        verticalLayout_2->addWidget(note_name);


        gridLayout->addLayout(verticalLayout_2, 1, 0, 1, 3);

        note_output = new QTextEdit(centralwidget);
        note_output->setObjectName(QString::fromUtf8("note_output"));
        note_output->setReadOnly(true);

        gridLayout->addWidget(note_output, 3, 3, 1, 1);

        verticalLayout = new QVBoxLayout();
        verticalLayout->setObjectName(QString::fromUtf8("verticalLayout"));
        search_text = new QLabel(centralwidget);
        search_text->setObjectName(QString::fromUtf8("search_text"));

        verticalLayout->addWidget(search_text);

        search_input = new QLineEdit(centralwidget);
        search_input->setObjectName(QString::fromUtf8("search_input"));
        search_input->setClearButtonEnabled(true);

        verticalLayout->addWidget(search_input);

        label_3 = new QLabel(centralwidget);
        label_3->setObjectName(QString::fromUtf8("label_3"));

        verticalLayout->addWidget(label_3);

        notes_list = new QListWidget(centralwidget);
        notes_list->setObjectName(QString::fromUtf8("notes_list"));

        verticalLayout->addWidget(notes_list);

        delete_note = new QPushButton(centralwidget);
        delete_note->setObjectName(QString::fromUtf8("delete_note"));

        verticalLayout->addWidget(delete_note);


        gridLayout->addLayout(verticalLayout, 0, 3, 3, 1);

        MainWindow->setCentralWidget(centralwidget);
        menubar = new QMenuBar(MainWindow);
        menubar->setObjectName(QString::fromUtf8("menubar"));
        menubar->setGeometry(QRect(0, 0, 887, 25));
        menu = new QMenu(menubar);
        menu->setObjectName(QString::fromUtf8("menu"));
        MainWindow->setMenuBar(menubar);
        statusbar = new QStatusBar(MainWindow);
        statusbar->setObjectName(QString::fromUtf8("statusbar"));
        MainWindow->setStatusBar(statusbar);

        menubar->addAction(menu->menuAction());
        menu->addAction(action_Quit);
        menu->addAction(actionOpen);

        retranslateUi(MainWindow);
        QObject::connect(action_Quit, SIGNAL(triggered()), MainWindow, SLOT(close()));
        QObject::connect(actionOpen, SIGNAL(triggered()), MainWindow, SLOT(show()));

        QMetaObject::connectSlotsByName(MainWindow);
    } // setupUi

    void retranslateUi(QMainWindow *MainWindow)
    {
        MainWindow->setWindowTitle(QCoreApplication::translate("MainWindow", "\320\227\320\260\320\277\320\270\321\201\320\275\320\260\321\217 \320\272\320\275\320\270\320\263\320\260", nullptr));
        action_Quit->setText(QCoreApplication::translate("MainWindow", "\320\222\321\213\321\205\320\276\320\264", nullptr));
#if QT_CONFIG(shortcut)
        action_Quit->setShortcut(QCoreApplication::translate("MainWindow", "Ctrl+Q", nullptr));
#endif // QT_CONFIG(shortcut)
        actionOpen->setText(QCoreApplication::translate("MainWindow", "\320\236\321\202\320\272\321\200\321\213\321\202\321\214", nullptr));
#if QT_CONFIG(shortcut)
        actionOpen->setShortcut(QCoreApplication::translate("MainWindow", "Ctrl+O", nullptr));
#endif // QT_CONFIG(shortcut)
        save_file->setText(QCoreApplication::translate("MainWindow", "\320\241\320\276\321\205\321\200\320\260\320\275\320\270\321\202\321\214 \321\202\320\265\320\272\321\203\321\211\320\270\320\271 \321\204\320\260\320\271\320\273", nullptr));
        sf_name->setPlaceholderText(QCoreApplication::translate("MainWindow", "\320\230\320\274\321\217 \320\244\320\260\320\271\320\273\320\260", nullptr));
        add_note->setText(QCoreApplication::translate("MainWindow", "\320\241\320\276\321\205\321\200\320\260\320\275\320\270\321\202\321\214 \321\202\320\265\320\272\321\203\321\211\321\203\321\216 \320\267\320\260\320\274\320\265\321\202\320\272\321\203 \320\262 \321\204\320\260\320\271\320\273", nullptr));
        note_input->setPlaceholderText(QCoreApplication::translate("MainWindow", "\320\242\320\265\320\272\321\201\321\202 \320\267\320\260\320\274\320\265\321\202\320\272\320\270", nullptr));
        note_text->setText(QCoreApplication::translate("MainWindow", "<html><head/><body><p align=\"center\"><span style=\" font-size:11pt;\">\320\230\320\274\321\217 \320\267\320\260\320\274\320\265\321\202\320\272\320\270</span></p></body></html>", nullptr));
        note_name->setPlaceholderText(QCoreApplication::translate("MainWindow", "\320\230\320\274\321\217 \320\267\320\260\320\274\320\265\321\202\320\272\320\270", nullptr));
        note_output->setPlaceholderText(QCoreApplication::translate("MainWindow", "\320\242\320\265\320\272\321\201\321\202 \320\267\320\260\320\274\320\265\321\202\320\272\320\270", nullptr));
        search_text->setText(QCoreApplication::translate("MainWindow", "<html><head/><body><p align=\"center\"><span style=\" font-size:11pt;\">\320\237\320\276\320\270\321\201\320\272 \320\277\320\276 \320\267\320\260\320\274\320\265\321\202\320\272\320\260\320\274</span></p></body></html>", nullptr));
        search_input->setPlaceholderText(QCoreApplication::translate("MainWindow", "\320\237\320\276\320\270\321\201\320\272...", nullptr));
        label_3->setText(QCoreApplication::translate("MainWindow", "<html><head/><body><p align=\"center\"><span style=\" font-size:11pt;\">\320\227\320\260\320\274\320\265\321\202\320\272\320\270</span></p></body></html>", nullptr));
        delete_note->setText(QCoreApplication::translate("MainWindow", "\320\243\320\264\320\260\320\273\320\270\321\202\321\214 \320\267\320\260\320\274\320\265\321\202\320\272\321\203", nullptr));
        menu->setTitle(QCoreApplication::translate("MainWindow", "\320\236\320\277\321\206\320\270\320\270", nullptr));
    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW_H
