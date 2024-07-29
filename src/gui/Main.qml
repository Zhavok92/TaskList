import QtQuick
import QtQuick.Controls
import TaskList.Gui as TaskList

ApplicationWindow {
    id: root

    property string version: "v1.0.0"

    width: 420
    height: 760
    visible: true
    title: "TaskList"

    Material.theme: Material.Normal

    TaskList.Home {
        id: home
    }
}
