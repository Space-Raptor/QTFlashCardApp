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
        void on_answerBTN_clicked();
        void on_nextBTN_clicked(); 

    private:
        Ui::MainWindow *ui;
        void set_list_items();
        void setGameCardState();
        int global_card_indx; 
        int correct; 
        int incorrect; 
}; 