#include<QString>
#include<QVector>
#include<QJsonObject>
#include<QStringList>
namespace filesystem
{
    class filedatamanager
    {
        public:
           inline static QStringList topic_names = {};
           inline static QVector<QJsonObject> loaded_cards = {}; 
    };
};