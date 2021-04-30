#include "mainwindow.h"
#include "ui_mainwindow.h"

MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)
{
    ui->setupUi(this);
    this->setCentralWidget(ui->textEdit);

    QPixmap colorpix(16, 16);           // -- Color Icon
    colorpix.fill(Qt::black);           // --
    ui->actionColor->setIcon(colorpix); // ----
    ui->textEdit->setTextColor(Qt::black); // Text Color

    QFont defaultFont("Times", 10, QFont::Normal);  // Font Type
    ui->textEdit->setFont(defaultFont);             // ----

    statusBar()->showMessage("Ready");
}

MainWindow::~MainWindow()
{
    maybeSave();
    delete ui;
}

bool MainWindow::maybeSave() // Check if Saved
{
    if (!ui->textEdit->document()->isModified())
        return true;

    const QMessageBox::StandardButton ret =
        QMessageBox::warning(this, QCoreApplication::applicationName(),
                             tr("The document has been modified.\n"
                                "Do you want to save your changes?"),
                             QMessageBox::Save | QMessageBox::Discard | QMessageBox::Cancel);
    if (ret == QMessageBox::Save)
        return on_actionSave_2_triggered();
    else if (ret == QMessageBox::Cancel)
        return false;
    return true;
}


void MainWindow::on_actionNew_triggered() // New
{
    maybeSave(); // Checks if the user wants to save the currently opened file before creating a new one
    currentFileName.clear();
    ui->textEdit->setText(QString());
    QPixmap colorpix(16, 16);           // -- Reset Color Icon
    colorpix.fill(Qt::black);           // --
    ui->actionColor->setIcon(colorpix); // ----
    ui->textEdit->setTextColor(Qt::black); // Reset Text Color to Black
    QFont defaultFont("Times", 10, QFont::Normal); // -- Reset Font to Default
    ui->textEdit->setFont(defaultFont);            // ----
    ui->actionBold->setChecked(false);
    ui->actionItalic->setChecked(false);
    ui->actionUnderline->setChecked(false);
    statusBar()->showMessage("Ready");
}

void MainWindow::on_actionOpen_triggered() // Open
{
    QFileDialog fileDialog(this);
    fileDialog.setWindowTitle("Open...");
    fileDialog.setAcceptMode(QFileDialog::AcceptMode::AcceptOpen);

    fileDialog.setNameFilter("Riley Text (*.rtxt)"); // Custom File Type :)

    int response = fileDialog.exec();

    if(response != QDialog::Accepted) { // Returns if no file was selected in Dialog Prompt
        QMessageBox::warning(this, "Error", "No file selected.");
        return;
    }

    QString fileName = fileDialog.selectedFiles().at(0);
    QFile file(fileName);

    if(!file.open(QFile::ReadOnly | QFile::Text)){ // Returns if file is unreadable or non-text
        QMessageBox::warning(this, "Warning", "Cannot open file : " + file.errorString());
        return;
    }
    currentFileName = fileName;
    setWindowTitle(fileName); // Sets Window Name to File Name
    QTextStream in(&file);
    QString text = in.readAll();
    maybeSave(); // Checks if File was saved before opening New Window
    ui->textEdit->setText(text);
    file.close();
}

bool MainWindow::on_actionSave_2_triggered() // Save
{
    if (currentFileName.isEmpty()) // If document has no FileName, work as Save As
        return on_actionSave_triggered();
    if (currentFileName.startsWith(QStringLiteral(":/"))) // If document has no Save Location, work as Save As
        return on_actionSave_triggered();

    QFile file(currentFileName);
    if (file.open(QFile::WriteOnly | QFile::Text)) {
        ui->textEdit->document()->setModified(false);
        statusBar()->showMessage(tr("Wrote \"%1\"").arg(QDir::toNativeSeparators(currentFileName)));
    } else {
        statusBar()->showMessage(tr("Could not write to file \"%1\"")
                                 .arg(QDir::toNativeSeparators(currentFileName))); // Error if that file couldn't be written too or isn't text.
    }
    setWindowTitle(currentFileName); // Set Window Name to File Name
    QTextStream out(&file);
    QString text = ui->textEdit->toHtml(); // Saves as HTML, could be switched to Markdown
    out << text;
    file.close();
    return true;
}

bool MainWindow::on_actionSave_triggered() // Save As
{
    QFileDialog fileDialog(this);
    fileDialog.setWindowTitle("Save...");
    fileDialog.setAcceptMode(QFileDialog::AcceptMode::AcceptSave);

    fileDialog.setNameFilter("Riley Text (*.rtxt)"); // Custom File Type :)

    int response = fileDialog.exec();

    if(response != QDialog::Accepted) { // Returns if no file was selected in Dialog Prompt
        QMessageBox::warning(this, "Error", "No file selected.");
        return false;
    }

    QString fileName = fileDialog.selectedFiles().at(0);
    QFile file(fileName);

    if(!file.open(QFile::WriteOnly | QFile::Text)){
        QMessageBox::warning(this, "Warning", "Cannot save file : " + file.errorString()); // Error if that file couldn't be written too or isn't text.
        return false;
    }
    currentFileName = fileName;
    setWindowTitle(fileName); // Set Window Name to File Name
    QTextStream out(&file);
    QString text = ui->textEdit->toHtml(); // Saves As HTML, could be switched to Markdown
    out << text;
    file.close();
    return true;
}

void MainWindow::on_actionCopy_triggered() // Copy
{
    ui->textEdit->copy();
}

void MainWindow::on_actionCut_triggered() // Cut
{
    ui->textEdit->cut();
}

void MainWindow::on_actionPaste_triggered() // Paste
{
    ui->textEdit->paste();
}

void MainWindow::on_actionPrint_triggered() // Print
{
    QPrinter printer;
    printer.setPrinterName("Printer Name...");
    QPrintDialog pDialog(&printer, this); // Printer Dialog Popup
    if(pDialog.exec() == QDialog::Rejected){
        QMessageBox::warning(this, "Warning", "Cannot Access printer"); // If Printer fails to connect or user doesn't click anything
        return;
    }
    ui->textEdit->print(&printer);
}

void MainWindow::on_actionExit_triggered() // Exit
{
    maybeSave(); // Check if Saved
    QApplication::quit();
}

void MainWindow::on_actionZoom_In_triggered() // Zoom In
{
    ui->textEdit->zoomIn();
}

void MainWindow::on_actionZoom_Out_triggered() // Zoom Out
{
    ui->textEdit->zoomOut();
}

void MainWindow::on_actionAbout_triggered() // About
{
    QMessageBox::information(this, "About", "Designed By Riley Maranville\n"
                                            "Designed Using Qt\n\n"
                                            "CS321 Text Editor Project");
}

void MainWindow::on_actionBold_triggered() // Bold
{
    if (ui->actionBold->isChecked()) // Toggle Bold
        ui->textEdit->setFontWeight(QFont::Bold);
    else
        ui->textEdit->setFontWeight(QFont::Normal);
}

void MainWindow::on_actionItalic_triggered() // Italic
{
    if (ui->actionItalic->isChecked()) // Toggle Italic
        ui->textEdit->setFontItalic(true);
    else
        ui->textEdit->setFontItalic(false);
}

void MainWindow::on_actionUnderline_triggered() // Underline
{
    if (ui->actionUnderline->isChecked()) // Toggle Underline
        ui->textEdit->setFontUnderline(true);
    else
        ui->textEdit->setFontUnderline(false);
}

void MainWindow::on_actionFont_triggered() // Font
{
    ui->textEdit->setCurrentFont(QFontDialog::getFont(0, ui->textEdit->font(), this, "Font Selection...")); // Dialog for Font
}

void MainWindow::on_actionColor_triggered() // Color
{
    QColor color = QColorDialog().getColor(); // Dialog for Color
    ui->textEdit->setTextColor(color);

    QPixmap colorpix(16,16); // Creates a Blank 16x16 image
    colorpix.fill(color); // Fills in Blank 16x16 image with chosen color from Dialog
    ui->actionColor->setIcon(colorpix);
}
