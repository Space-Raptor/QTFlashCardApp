#include <QString>
#include <QVector>
#include <QJsonObject>
#include <QFileInfoList>
namespace filesystem
{
    class filemanager
    {
        private: 
            inline static QString data_directory = "./TopicData";

        public:
            static void LoadTopics(QVector<QString> selected_topics);
            static void LoadTopicNames(); 
            static void SetUp(); 
    };
};