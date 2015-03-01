#include "mainwindow.h"
#include "view.h"
#include "square.h"

#include <QtWidgets>
#include <QHBoxLayout>

/*********
 * Here the view is initialized
 *
*/
MainWindow::MainWindow(QWidget *parent) :
    QWidget(parent)
{
    populateScene();
    View *view = new View("Flow view");
    view->view()->setScene(scene);
  /*  mainLayout->addWidget(view, 0, 0, 1, 4);
*/
    QHBoxLayout *layout = new QHBoxLayout;
    layout->addWidget(view);
    setLayout(layout);

    setWindowTitle(tr("Gator Chart"));
}

void MainWindow::populateScene()
{
    scene = new QGraphicsScene;

    QColor color(QColor(Qt::blue));
    qreal x = 500;
    qreal y = 500;
    QGraphicsItem *item = new Square(color, x, y);
    scene->addItem(item);

}
