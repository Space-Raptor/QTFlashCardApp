#include <QJsonObject>
#include <QVector>
#include <QFileInfoList>
#include <QDir>
#include <QIODevice>
#include <QJsonArray>
#include <algorithm>
#include <random>
QVector<QJsonObject> readjson(QString path)
{
    QDir files_path(path);
    QStringList files = files_path.entryList(QDir::NoDotAndDotDot | QDir::Files);  
    QString json_strings = "";  

    QVector<QJsonObject> json_obj = {}; 
    for(const auto &file_info : files)
    {
        QFile f1(files_path.absoluteFilePath(file_info));
        if(f1.open(QIODevice::ReadOnly))
        {
            json_strings += f1.readAll();
            f1.close(); 
        }
    }
    
    QJsonArray jArr = (QJsonDocument::fromJson(json_strings.toUtf8()).array());
    for(auto jsonobj : jArr)
    {
        json_obj.append(jsonobj.toObject());
    }
    std::mt19937 gen(std::random_device{}());
    std::shuffle(json_obj.begin(), json_obj.end(), gen); 
    return json_obj; 
}