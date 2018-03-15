#ifndef WINDOW_H
#define WINDOW_H

#include <QWidget>
#include <QSystemTrayIcon>
#include <QMenu>
#include <QCoreApplication>
#include <Button.h>
#include <QVBoxLayout>
#include <QLabel>

#include "version.h"

class Window : public QWidget
{
  Q_OBJECT
public:
  explicit Window(QWidget *parent = nullptr);

signals:

public slots:

private:
  QMenu *tray_menu;
  QAction *hide_action;
  QAction *show_action;
  QAction *quit_action;
  QSystemTrayIcon *tray_icon;

  QLabel *logo_label;
  Button *start_button;
  Button *config_button;
};

#endif // WINDOW_H