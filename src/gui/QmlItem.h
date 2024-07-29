#ifndef QML_ITEM_H_INCLUDED
#define QML_ITEM_H_INCLUDED

#include <QObject>

class QmlItem : public QObject {
    Q_OBJECT

    Q_PROPERTY(QString name READ getName WRITE setName NOTIFY nameChanged)
public:
    explicit QmlItem(QObject* parent = nullptr);
    QString getName() const;
    void setName(QString newName);

signals:
    void nameChanged(QString newName);

private:
    QString name;
};

#endif
