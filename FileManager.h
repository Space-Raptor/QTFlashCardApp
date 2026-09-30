#include <QString>
#include <QVector>
#include <QJsonObject>
namespace filesystem
{
    class filemanager
    {
        private: 
            inline static QString data_directory = "./TopicData";

        public:
            static void LoadTopics(QVector<QString> selected_topics);
            static QVector<QString> LoadTopicNames(); 
            static void SetUp(); 
    };
};