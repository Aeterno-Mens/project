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
    QTextEdit *note_output;
    QWidget *layoutWidget;
    QVBoxLayout *verticalLayout;
    QLabel *search_text;
    QLineEdit *search_input;
    QLabel *label_3;
    QListWidget *notes_list;
    QPushButton *delete_note;
    QWidget *layoutWidget1;
    QVBoxLayout *verticalLayout_2;
    QLabel *note_text;
    QTextEdit *note_name;
    QWidget *layoutWidget2;
    QVBoxLayout *verticalLayout_3;
    QPushButton *add_note;
    QTextEdit *note_input;
    QPushButton *save_file;
    QTextEdit *sf_name;
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
        note_output = new QTextEdit(centralwidget);
        note_output->setObjectName(QString::fromUtf8("note_output"));
        note_output->setGeometry(QRect(450, 250, 421, 321));
        note_output->setReadOnly(true);
        layoutWidget = new QWidget(centralwidget);
        layoutWidget->setObjectName(QString::fromUtf8("layoutWidget"));
        layoutWidget->setGeometry(QRect(450, 10, 421, 231));
        verticalLayout = new QVBoxLayout(layoutWidget);
        verticalLayout->setObjectName(QString::fromUtf8("verticalLayout"));
        verticalLayout->setContentsMargins(0, 0, 0, 0);
        search_text = new QLabel(layoutWidget);
        search_text->setObjectName(QString::fromUtf8("search_text"));

        verticalLayout->addWidget(search_text);

        search_input = new QLineEdit(layoutWidget);
        search_input->setObjectName(QString::fromUtf8("search_input"));

        verticalLayout->addWidget(search_input);

        label_3 = new QLabel(layoutWidget);
        label_3->setObjectName(QString::fromUtf8("label_3"));

        verticalLayout->addWidget(label_3);

        notes_list = new QListWidget(layoutWidget);
        notes_list->setObjectName(QString::fromUtf8("notes_list"));

        verticalLayout->addWidget(notes_list);

        delete_note = new QPushButton(layoutWidget);
        delete_note->setObjectName(QString::fromUtf8("delete_note"));

        verticalLayout->addWidget(delete_note);

        layoutWidget1 = new QWidget(centralwidget);
        layoutWidget1->setObjectName(QString::fromUtf8("layoutWidget1"));
        layoutWidget1->setGeometry(QRect(10, 80, 421, 151));
        verticalLayout_2 = new QVBoxLayout(layoutWidget1);
        verticalLayout_2->setObjectName(QString::fromUtf8("verticalLayout_2"));
        verticalLayout_2->setContentsMargins(0, 0, 0, 0);
        note_text = new QLabel(layoutWidget1);
        note_text->setObjectName(QString::fromUtf8("note_text"));

        verticalLayout_2->addWidget(note_text);

        note_name = new QTextEdit(layoutWidget1);
        note_name->setObjectName(QString::fromUtf8("note_name"));
        QSizePolicy sizePolicy(QSizePolicy::Preferred, QSizePolicy::Expanding);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(note_name->sizePolicy().hasHeightForWidth());
        note_name->setSizePolicy(sizePolicy);

        verticalLayout_2->addWidget(note_name);

        layoutWidget2 = new QWidget(centralwidget);
        layoutWidget2->setObjectName(QString::fromUtf8("layoutWidget2"));
        layoutWidget2->setGeometry(QRect(10, 220, 421, 351));
        verticalLayout_3 = new QVBoxLayout(layoutWidget2);
        verticalLayout_3->setObjectName(QString::fromUtf8("verticalLayout_3"));
        verticalLayout_3->setContentsMargins(0, 0, 0, 0);
        add_note = new QPushButton(layoutWidget2);
        add_note->setObjectName(QString::fromUtf8("add_note"));

        verticalLayout_3->addWidget(add_note);

        note_input = new QTextEdit(layoutWidget2);
        note_input->setObjectName(QString::fromUtf8("note_input"));

        verticalLayout_3->addWidget(note_input);

        save_file = new QPushButton(centralwidget);
        save_file->setObjectName(QString::fromUtf8("save_file"));
        save_file->setGeometry(QRect(12, 28, 158, 41));
        sf_name = new QTextEdit(centralwidget);
        sf_name->setObjectName(QString::fromUtf8("sf_name"));
        sf_name->setGeometry(QRect(179, 28, 250, 41));
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
        note_output->setPlaceholderText(QCoreApplication::translate("MainWindow", "\320\242\320\265\320\272\321\201\321\202 \320\267\320\260\320\274\320\265\321\202\320\272\320\270", nullptr));
        search_text->setText(QCoreApplication::translate("MainWindow", "<html><head/><body><p align=\"center\"><span style=\" font-size:11pt;\">\320\237\320\276\320\270\321\201\320\272 \320\277\320\276 \320\267\320\260\320\274\320\265\321\202\320\272\320\260\320\274</span></p></body></html>", nullptr));
        label_3->setText(QCoreApplication::translate("MainWindow", "<html><head/><body><p align=\"center\"><span style=\" font-size:11pt;\">\320\227\320\260\320\274\320\265\321\202\320\272\320\270</span></p></body></html>", nullptr));
        delete_note->setText(QCoreApplication::translate("MainWindow", "\320\243\320\264\320\260\320\273\320\270\321\202\321\214 \320\267\320\260\320\274\320\265\321\202\320\272\321\203", nullptr));
        note_text->setText(QCoreApplication::translate("MainWindow", "<html><head/><body><p align=\"center\"><span style=\" font-size:11pt;\">\320\230\320\274\321\217 \320\267\320\260\320\274\320\265\321\202\320\272\320\270</span></p></body></html>", nullptr));
        note_name->setPlaceholderText(QCoreApplication::translate("MainWindow", "\320\222\320\262\320\276\320\264...", nullptr));
        add_note->setText(QCoreApplication::translate("MainWindow", "\320\241\320\276\321\205\321\200\320\260\320\275\320\270\321\202\321\214 \321\202\320\265\320\272\321\203\321\211\321\203\321\216 \320\267\320\260\320\274\320\265\321\202\320\272\321\203 \320\262 \321\204\320\260\320\271\320\273", nullptr));
        note_input->setPlaceholderText(QCoreApplication::translate("MainWindow", "\320\242\320\265\320\272\321\201\321\202 \320\267\320\260\320\274\320\265\321\202\320\272\320\270", nullptr));
        save_file->setText(QCoreApplication::translate("MainWindow", "\320\241\320\276\321\205\321\200\320\260\320\275\320\270\321\202\321\214 \321\202\320\265\320\272\321\203\321\211\320\270\320\271 \321\204\320\260\320\271\320\273", nullptr));
        sf_name->setPlaceholderText(QCoreApplication::translate("MainWindow", "\320\222\320\262\320\276\320\264 \320\270\320\274\320\265\320\275\320\270 \321\204\320\260\320\271\320\273\320\260 \320\264\320\273\321\217 \321\201\320\276\321\205\321\200\320\260\320\275\320\265\320\275\320\270\321\217", nullptr));
        menu->setTitle(QCoreApplication::translate("MainWindow", "\320\236\320\277\321\206\320\270\320\270", nullptr));
    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW_H
