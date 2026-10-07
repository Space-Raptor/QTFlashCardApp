#include <QString>
#include <QVector>
#include <QJsonObject>
#include <QFileInfoList>
#include <QListWidgetItem>
namespace filesystem
{
    class filemanager
    {
        public:
            inline static QString data_directory = "./TopicData";
            static void LoadTopics(QList<QListWidgetItem*>  selected_topics);
            static void LoadTopicNames(); 
            static void SetUp(); 
    };
};