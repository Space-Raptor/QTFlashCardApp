#include <QMainWindow>


namespace Ui
{
    class MainWindow;
}

class MainWindow : public QMainWindow
{
    Q_OBJECT 

    public: 
        MainWindow(); 
        ~MainWindow(); 
    private:
        Ui::MainWindow *ui;
}; 