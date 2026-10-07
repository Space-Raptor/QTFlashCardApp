#include "FileManager.h"
#include "FileDataManager.h"
#include "helper.h"
#include <QDir>
#include <QListWidgetItem>
void filesystem::filemanager::LoadTopics(QList<QListWidgetItem*> selected_topics)
{
    filesystem::filedatamanager::loaded_cards.clear(); 
    for(const auto& item : selected_topics)
    {
        QString topic = item->text(); 
        QString dataDIR = filesystem::filemanager::data_directory;
        filesystem::filedatamanager::loaded_cards.append(readjson((dataDIR + "/" + topic)));
    }
}

void filesystem::filemanager:: LoadTopicNames()
{
    filesystem::filedatamanager::topic_names.clear();
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
