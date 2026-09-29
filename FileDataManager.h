#include<QString>
#include<QVector>
#include<QJsonObject>
namespace filesystem
{
    class filedatamanager
    {
        QString data_directory = "./TopicData";
        QVector<QString> topic_names = {};
        QVector<QJsonObject> loaded_cards = {}; 
    };
};