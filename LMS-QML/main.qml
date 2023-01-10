
import QtQuick.Controls 2.3
import QtQuick 2.15
import QtQuick.Window 2.15
import QtQuick.LocalStorage 2.0

Window {
    width: 640
    height: 480
    visible: true
    title: qsTr("Hello World")


    property string  dbid: 'mydatabase'
   property string  dbversion: '1.0'
       property string  dbdescription: 'database application'
       property int  dbsize: 100000
    property var db
    Component.onCompleted: {
        db=LocalStorage.openDatabaseSync(dbid,dbversion,dbdescription,dbsize);
    }
    }

