#include <QString>
#include <QVector>
#include <QJsonObject>
#include <QFileInfoList>
namespace filesystem
{
    class filemanager
    {
        public:
            inline static QString data_directory = "./TopicData";
            static void LoadTopics(QVector<QString> selected_topics);
            static void LoadTopicNames(); 
            static void SetUp(); 
    };
};