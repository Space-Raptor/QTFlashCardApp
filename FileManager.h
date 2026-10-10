#include <QString>
#include <QVector>
#include <QJsonObject>
#include <QFileInfoList>
#include <QListWidgetItem>
#include <QCoreApplication>
#include <QStandardPaths>
namespace filesystem
{
    class filemanager
    {
        public:
            inline static QString data_directory = QStandardPaths::writableLocation(QStandardPaths::AppDataLocation) + "/TopicData";
            static void LoadTopics(QList<QListWidgetItem*>  selected_topics);
            static void LoadTopicNames(); 
            static void SetUp(); 
    };
};