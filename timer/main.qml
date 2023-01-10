import QtQuick 2.15
import QtQuick.Window 2.15
import QtQuick.Controls 2.0
import QtQuick.Controls.Material 2.3
import QtQml 2.15
Window {
    id:root
    width: 640
    height: 480
    visible: true
    title: qsTr("Hello World")
    Connections{
        target: testing
        onNotice:{
            console.log("slot called from c++")
            label.text=data
            if(data==="timeout")
            {
                 root.color="red"
                button.color="black"
            }
    }
        onStart:{
            label2.text=data
        }
}
//Button{
//    id:button1N
//    width:100
//    height: 100
//    onClicked: {
//       testing.start()
//                {

//                        root.color="blue"


//         }

//}
//    }
Rectangle {
    id: button
    border.color: "black"
    width: 100
    height: 100

    Text{
        text:"start"
        anchors.centerIn: button
    }

    MouseArea
    {
      id: region
        anchors.fill: parent
        //onClicked: console.log("clicked()")
        onClicked: {
           testing.start()
                    {

                            root.color="blue"
                         button.color="purple"

             }

    }
    }AA
}
Button{
    id:button2
    width:100
    height: 100
    x:0
    y:200
    onClicked:{
        testing.stop()
    {
       root.color="yellow"
        }

}
}
Label{
    id:label
    text: " "
    anchors.centerIn: parent
    }

Label{
    id:label2
    text: " "
    x:100
    y:200
    }
}
