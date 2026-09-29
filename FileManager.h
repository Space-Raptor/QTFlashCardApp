#include<QString>
#include<QVector>
#include<QJsonObject>
namespace filesystem
{
    class filemanager
    {
        public:
            void LoadTopics(QVector<QString> selected_topics);
            QVector<QString> LoadTopicNames(); 
            void SetUp(); 
    };
};