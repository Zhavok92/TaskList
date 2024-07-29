#include "QmlItem.h"

QmlItem::QmlItem(QObject* parent) : QObject(parent) {}

QString QmlItem::getName() const {
    return name;
}

void QmlItem::setName(QString newName) {
    if(newName == name) {
        return;
    }
    name = newName;
    emit nameChanged(name);
}