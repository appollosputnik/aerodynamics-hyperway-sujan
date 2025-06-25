#include <qapplication.hxx>
#include "tabwidget.hxx"

int main( int argc, char **argv )
{
    QApplication a( argc, argv );

    CTabWidget zoom;
    zoom.show();
    
    return a.exec();
}
