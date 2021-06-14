#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>
#include <QMap>

QT_BEGIN_NAMESPACE
namespace Ui { class MainWindow; }
QT_END_NAMESPACE

class MainWindow : public QMainWindow
{
    Q_OBJECT

public:
    MainWindow(QWidget *parent = nullptr);
    ~MainWindow();

public slots:
    void open_notes();

private slots:
    void on_save_file_clicked(const QString &path);

    void load_file(const QString &path);

    void on_add_note_clicked();

    void on_delete_note_clicked();

    void on_notes_list_currentTextChanged(const QString &text);

    void on_search_input_textChanged(const QString &arg1);

private:
    Ui::MainWindow *ui;
    QMap<QString,QString> note;
    QStringList s_list;
};
#endif // MAINWINDOW_H
