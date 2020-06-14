#pragma once

#include <QDockWidget>

QT_BEGIN_NAMESPACE
class QDragEnterEvent;
class QDropEvent;
QT_END_NAMESPACE

namespace Tiled {

class TimelineDock : public QDockWidget
{
    Q_OBJECT

public:
    explicit TimelineDock(QWidget *parent = nullptr);

protected:
    void dragEnterEvent(QDragEnterEvent *event) override;
    void dropEvent(QDropEvent *event) override;
    void mousePressEvent(QMouseEvent *event) override;
};

} // namespace Tiled
