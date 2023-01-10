import QtQuick 2.7
import QtQuick.Controls 2.0

ApplicationWindow {
    visible: true
    width: 640
    height: 480
    title: qsTr("Multi Column")

    Flickable {
        anchors.fill: parent
        contentWidth: row.implicitWidth
        contentHeight: row.implicitHeight
        Column {
            id: row
            Row {
                spacing: 5
                Repeater {
                    model: 13
                    delegate: Rectangle {
                        width: 50
                        height: 50
                        color: "red"
                        Text {
                            anchors.centerIn: parent
                            text: index
                        }
                    }
                }
            }
            Row {
                spacing: 5
                Repeater {
                    model: 4
                    delegate: Rectangle {
                        width: 50
                        height: 50
                        color: "cyan"
                        Text {
                            anchors.centerIn: parent
                            text: index
                        }
                    }
                }
            }
        }
        ScrollBar.horizontal:  ScrollBar { }
    }
}
