#include "bookinfodialog.h"
#include "ui_bookinfodialog.h"

BookInfoDialog::BookInfoDialog(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::BookInfoDialog)
{
    ui->setupUi(this);

    bookInfoDesign();


}

BookInfoDialog::~BookInfoDialog()
{
    delete ui;

}

void BookInfoDialog::setBookName(QString bookNameString)
{
    this->bookNameString=bookNameString;
}

//void BookInfoDialog::bookClicked()
//{
//    QFile file("book.txt");
//    if (!file.exists()){
//          qDebug()<<"file does not exist!";
//       }
//    if (!file.open(QIODevice::ReadOnly | QIODevice::Text))
//        return;

//    QTextStream in(&file);
//    while (!in.atEnd()) {
//        QString line = in.readLine();
//        bookInfo->setText(line);
//    }
//   file.close();
//}

QString BookInfoDialog::getBookName()
{
    return bookNameString;
}


void BookInfoDialog::bookInfoDesign()
{
    bookName = new QLabel(this);
    bookAuthor = new QLabel(this);

    bookInfo = new QLabel(this);

    bookName->setGeometry(300,30,251,21);
    bookAuthor->setGeometry(300,70,251,21);
    bookInfo->setGeometry(300,110,441,151);

    if(bookNameString=="The Hobbit"){


    bookName->setText("The Hobbit");
    bookAuthor->setText("J.R.R.Tolkien  1937");
    bookInfo->setText("The Hobbit, or There and Back Again is a children's fantasy novel\n by English author J. R. R. Tolkien. It was published in\n 1937 to wide critical acclaim, being nominated for the \nCarnegie Medal and awarded a prize from \nthe New York Herald Tribune for best juvenile fiction.");
    }

    else if (bookNameString=="Les Miserables"){


    bookName->setText("Les Miserables");
    bookAuthor->setText("Victor Hugo  1862");
    bookInfo->setText("Les Misérables is a French historical novel by Victor Hugo, \nfirst published in 1862, that is considered one \nof the greatest novels of the 19th century. \nIn the English-speaking world, the novel is usually \nreferred to by its original French title.");
    }

    else if(bookNameString == "Dune"){


    bookName->setText("Dune");
    bookAuthor->setText("Frank Herbert  1965");
    bookInfo->setText("Dune is a 1965 epic science fiction novel \nby American author Frank Herbert, originally published \nas two separate serials in Analog magazine. \nIt tied with Roger Zelazny's This Immortal for \nthe Hugo Award in 1966 and it won the inaugural \nNebula Award for Best Novel. \nIt is the first installment of the Dune saga.");
    }
//    QFile file("book.txt");
//    if (!file.exists()){
//        qDebug()<<"file does not exist!";
//    }
//    if (file.open(QFile::ReadOnly)) {
//        qDebug()<<"File open";
//        char buf[1024];
//        qint64 lineLength = file.readLine(buf, sizeof(buf));
//        if (lineLength != -1) {
//            // the line is available in buf
//        }
//    }


//


    }
