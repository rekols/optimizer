#include "scan_widget.h"

ScanWidget::ScanWidget(QWidget *parent)
    : QWidget(parent)
{
    layout = new QVBoxLayout(this);
    iconLayout = new QHBoxLayout();

    packageBar = new IconBar();
    crashBar = new IconBar();
    logBar = new IconBar();
    cacheBar = new IconBar();
    trashBar = new IconBar();

    packageBar->setTitle("Package Caches");
    packageBar->setIcon(QPixmap(":/images/package.png"));

    crashBar->setTitle("Crash Reports");
    crashBar->setIcon(QPixmap(":/images/crash.png"));

    logBar->setTitle("Application Logs");
    logBar->setIcon(QPixmap(":/images/logs.png"));

    cacheBar->setTitle("Application Caches");
    cacheBar->setIcon(QPixmap(":/images/cache.png"));

    trashBar->setTitle("Trash");
    trashBar->setIcon(QPixmap(":/images/trash.png"));

    iconLayout->addSpacing(30);
    iconLayout->addWidget(packageBar);
    iconLayout->addWidget(crashBar);
    iconLayout->addWidget(logBar);
    iconLayout->addWidget(cacheBar);
    iconLayout->addWidget(trashBar);
    iconLayout->addSpacing(30);

    layout->addStretch();
    layout->addLayout(iconLayout);
    layout->addStretch();
}