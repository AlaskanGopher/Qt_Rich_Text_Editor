#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>

#include <QComboBox>
#include <QFontComboBox>
#include <QColorDialog>
#include <QFile>
#include <QFileDialog>
#include <QFontDialog>
#include <QTextCursor>
#include <QTextStream>
#include <QTextDocumentWriter>
#include <QMessageBox>
#include <QPixmap>
#include <QPrinter>
#include <QPrintDialog>

QT_BEGIN_NAMESPACE
namespace Ui { class MainWindow; }
QT_END_NAMESPACE

class MainWindow : public QMainWindow
{
    Q_OBJECT

public:
    MainWindow(QWidget *parent = nullptr);
    ~MainWindow();

private slots:
    void on_actionNew_triggered(); // New Button on toolbar and under File

    void on_actionOpen_triggered(); // Open Button on toolbar and under File

    bool on_actionSave_triggered(); // SaveAs Button on toolbar [read bool maybeSave()] and under File

    void on_actionCopy_triggered(); // Copy Button on toolbar and under Edit

    void on_actionPrint_triggered(); // Print Button on toolbar and under File

    void on_actionExit_triggered(); // Exit Button under File

    void on_actionCut_triggered(); // Cut Button on toolbar and under Edit

    void on_actionPaste_triggered(); // Paste Button on toolbar and under Edit

    void on_actionZoom_In_triggered(); // Zoom In Button under View

    void on_actionZoom_Out_triggered(); // Zoom Out Button under View

    void on_actionAbout_triggered(); // About Button under Help

    void on_actionBold_triggered(); // Bold Button on toolbar and under Text

    void on_actionItalic_triggered(); // Italic Button on toolbar and under Text

    void on_actionUnderline_triggered(); // Underline Button on toolbar and under Text | NOT Underline under the Font Popup

    void on_actionFont_triggered(); // Font Button on toolbar and under Text

    void on_actionColor_triggered(); // Color Button on toolbar and under Text

    bool on_actionSave_2_triggered(); // Save Button on toolbar [read bool maybeSave()] and under File

private:
    bool maybeSave(); // Maybe Save | Checks if user has saved before Closing/Exitting Window, also checks if there is a current Save Directory for the project

private:
    Ui::MainWindow *ui;
    QString currentFileName = "";
};
#endif // MAINWINDOW_H
