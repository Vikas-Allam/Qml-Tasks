import QtQuick 2.15
import QtQuick.Window 2.15
import QtQuick.Controls 2.3

Window {
    id: root
    width: 640
    height: 480
    visible: true
    title: qsTr("Hello World")

    Rectangle{
        id: rect1
        anchors.centerIn: parent
        height: 100
        width: 100
        color: "grey"
    }

    Label{
        id:label1
        text: qsTr("hello")
        anchors.centerIn: parent
        font.pointSize: 10
        font.bold:true




    }



    ComboBox{
        id:combo
        model:['select','1','2','3']
        onCurrentTextChanged:
        {
            label1.text=combo.currentText
            if(label1.text == '1')
            {
               root.color="red"
            }

            if(label1.text =='2')
            {
                root.color="blue"
            }
            if(label1.text =='3')
            {
                root.color="yellow"
            }


        }
    }

}

