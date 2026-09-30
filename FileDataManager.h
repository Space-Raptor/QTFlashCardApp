#include<QString>
#include<QVector>
#include<QJsonObject>
namespace filesystem
{
    class filedatamanager
    {
        public:
            QVector<QString> topic_names = {};
            QVector<QJsonObject> loaded_cards = {}; 
    };
};