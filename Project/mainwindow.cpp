#include "mainwindow.h"
#include "ui_mainwindow.h"
#include <QString>
#include <QFile>
#include <QDebug>
#include <QMap>
#include <QSet>
#include <QFileDialog>

MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)
{
    ui->setupUi(this);
    QObject::connect(ui->actionOpen, SIGNAL(triggered()), this, SLOT(open_notes()));
}

MainWindow::~MainWindow()
{
    delete ui;
}


void MainWindow::on_save_file_clicked(const QString &path)
{
    if(ui->sf_name->toPlainText()!=""){

    QFile file(path);
    QTextStream value (&file);

    if (file.open(QIODevice::WriteOnly))
    {

        for(auto i = 0; i <s_list.size(); i++)
        {
            QString text=s_list[i];
            value<<text+"\n"+"  ";
            value<<note.value(text)+"\n";
        }

        file.close();
        ui->statusbar->showMessage("Успешно сохранено по адресу: "+path);
    }

    else
    {
        ui->statusbar->showMessage("Ошибка - не удалось сохранить файл");
    }

    ui->sf_name->clear();
    }

    else
    {
        ui->statusbar->showMessage("Ошибка - не было введено название файла");
    }
}

void MainWindow::load_file(const QString &path)
{
    s_list.clear();
    ui->notes_list->clear();

    QFile file(path);
    QTextStream value (&file);

    if (file.open(QIODevice::ReadOnly))
    {
        QString line1, line2, line3;
        line1 = value.readLine();

        while (!value.atEnd())
        {
            line2 = line1.simplified();
            line1 = value.readLine();

            while(line1[0].isSpace())
            {
                line3 += line1;
                line1 = value.readLine();

                if(line1.isEmpty())
                break;
            }
            s_list.append(line2);
            note.insert(line2, line3);
            line3 = "";
        }
        ui->notes_list->addItems(s_list);
        file.close();
        ui->statusbar->showMessage("Был успешно открыт файл: "+path);
    }
    else
    {
        ui->statusbar->showMessage("Ошибка - файл не найден!");
    }
}
/*функция добавления заметки в map и виджет, для последующей работы*/
void MainWindow::on_add_note_clicked()
{
    QString name=ui->note_name->toPlainText();
    QString input=ui->note_input->toPlainText();

    if(name=="" || input=="" || name==" " || input==" ")
    {
        return;
    }

    QStringList string_list;

    QSet<QString> set;

    s_list.append(name);

    for(auto i = s_list.begin(); i != s_list.end(); i++)
    {
        set.insert(*i);
    }

    for(auto i = set.begin(); i != set.end(); i++)
    {
        string_list.append(*i);
    }

    s_list=string_list;
    note.insert(name, input);
    ui->notes_list->clear();
    ui->notes_list->addItems(s_list);
    ui->note_name->clear();
    ui->note_input->clear();
}
/*функция удаления уже добавленной заметки*/
void MainWindow::on_delete_note_clicked()
{
    /*условие проверки выбора ячейки, так как в противном случае удаление без выбора элемента приводит к преждевременному краху программы*/
    if(!(ui->notes_list->selectedItems().empty())){

        QList<QListWidgetItem*> items = ui->notes_list->selectedItems();

        QString key=ui->notes_list->currentItem()->text();

        foreach(QListWidgetItem * item, items)
        {
            delete ui->notes_list->takeItem(ui->notes_list->row(item));
        }

        if(1)
        {
            for(auto i = 0; i <s_list.size(); i++)
            {
                if(s_list[i]==key)
                    s_list.removeAt(i);
            }
        }

    }
}

/*функция для просмотра текста после добавления заметки*/
void MainWindow::on_notes_list_currentTextChanged(const QString &text)
{
    ui->note_output->setPlainText(note[text]);
}

/*функция фильтра заметок для удобства*/
void MainWindow::on_search_input_textChanged(const QString &arg1)
{
    QRegularExpression rx(arg1);
    ui->notes_list->clear();
    ui->notes_list->addItems(s_list.filter(rx));
}

void MainWindow::open_notes()
{
    QString toOpen = QFileDialog::getOpenFileName(this, ("Open Notes"), "/home", ("Notes Files (*.txt)"));
        load_file(toOpen);
    }

