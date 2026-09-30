#include "FileManager.h"
#include "FileDataManager.h"
#include <QDir>
void filesystem::filemanager::LoadTopics(QVector<QString> selected_topics)
{
    return;
}

void filesystem::filemanager:: LoadTopicNames()
{
    QDir pathDir(data_directory);
    QFileInfoList dirs = pathDir.entryInfoList(QDir::NoDotAndDotDot | QDir::AllDirs);
    foreach(QFileInfo f1, dirs)
    {
        filesystem::filedatamanager::topic_names.append(f1.fileName());
    }
}


void filesystem::filemanager:: SetUp()
{
    QDir pathDir(data_directory);
    if(!pathDir.exists())
    {
        pathDir.mkdir("."); 
    }
}
