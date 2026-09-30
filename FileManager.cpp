#include "FileManager.h"
#include "FileDataManager.h"
#include <QDir>
void filesystem::filemanager::LoadTopics(QVector<QString> selected_topics)
{
    return;
}

QVector<QString> filesystem::filemanager:: LoadTopicNames()
{
    QDir pathDir(data_directory);
    
}


void filesystem::filemanager:: SetUp()
{
    QDir pathDir(data_directory);
    if(!pathDir.exists())
    {
        pathDir.mkdir("."); 
    }
}
