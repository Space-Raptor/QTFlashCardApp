include("C:/Users/liamk/Desktop/QTFlashCardApp/builds/Qt-6.11.2-mingw_64-x86_64/Debug/.qt/QtDeploySupport.cmake")
include("${CMAKE_CURRENT_LIST_DIR}/qtflashcardapp-plugins.cmake" OPTIONAL)
set(__QT_DEPLOY_I18N_CATALOGS "qtbase")

qt6_deploy_runtime_dependencies(
    EXECUTABLE "C:/Users/liamk/Desktop/QTFlashCardApp/builds/Qt-6.11.2-mingw_64-x86_64/Debug/qtflashcardapp.exe"
    GENERATE_QT_CONF
)
