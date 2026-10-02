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

    private slots: 
        void on_newFlashCardBTN_Clicked(); 
        void on_newTopicBTN_Clicked(); 
        void on_startBTN_Clicked(); 

    private:
        Ui::MainWindow *ui;
        void set_list_items();
}; 