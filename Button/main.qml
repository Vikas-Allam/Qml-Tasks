import QtQuick 2.15
import QtQuick.Window 2.15

Window {
    width: 640
    height: 480
    visible: true
    title: qsTr("Hello World")
    Connections{
        target: testing
        onNotice:{
            console.log("slot called from c++")
        //    label.text=data
            if(data==="timeout")
            {
                // root.color="red"
                button2.color="black"

            }
            if(data==="timeout1")
            {
                button2.color="white"

                button3.color="black"

            }
            if(data==="timeout2")
             {
                button3.color="white"
                button4.color="black"
            }
    }
}
    Rectangle {
        id: button
        border.color: "black"
        width: 80
        height: 80
        x:300
        y:50

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


                           button.color="purple"

                 }

        }
        }
    }
    Rectangle {
        id: button2
        border.color: "black"
        width: 80
        height: 80
        x:300
        y:150
    }
    Rectangle {
        id: button3
        border.color: "black"
        width: 80
        height: 80
        x:300
        y:250
    }
    Rectangle {
        id: button4
        border.color: "black"
        width: 80
        height: 80
        x:300
        y:350
    }
}
