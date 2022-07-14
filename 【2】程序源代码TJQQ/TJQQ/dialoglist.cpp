#include "dialoglist.h"
#include "ui_dialoglist.h"
//#include "qaction.h"
#include<QAction>
#include <QToolButton>
#include "widget.h"
#include <QMessageBox>

#pragma execution_character_set("utf-8")
//static QVector<QToolButton *> vToolBtn;

DialogList::DialogList(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::DialogList)
{
    ui->setupUi(this);
    //设置标题
    setWindowTitle("MyTJQQ 2020");
      //设置图标
    setWindowIcon(QPixmap(":/images/zh.png"));

      //准备图标
      QList<QString>nameList;
      nameList << "同济大学校长" << "桂老师"<< "1941712张恒";


      QStringList iconNameList; //图标资源列表
      iconNameList << "TJ"<< "TJ1" <<"zh";

      QVector<QToolButton *> vToolBtn; //声明存放QtoolButton的容器 vToolBtn

          for(int i = 0 ; i < 3 ; i++) //设置一个for循环，来完成一些列的操作
          {

              QToolButton *btn = new QToolButton;
              //设置文字
              btn->setText(nameList[i]);
              //设置头像
              QString str = QString(":/images/%1.png").arg(iconNameList.at(i));
              btn->setIcon(QPixmap(str));
              //设置头像大小
              btn->setIconSize( QPixmap(str).size() );
              //设置按钮风格 透明
              btn->setAutoRaise(true);
              //设置文字和图片一起显示
              btn->setToolButtonStyle(Qt::ToolButtonTextBesideIcon);
              //加到 垂直布局中
             ui->vLayout->addWidget(btn);
              //容器保存住3个按钮，方便以后再次操作
              vToolBtn.push_back(btn);
              //3个标示默认初始化
               isShow.push_back(false);
         }

          //对3个按钮 进行添加信号槽

          for(int i=0;i<vToolBtn.size();i++)
          {
              connect(vToolBtn[i],&QToolButton::clicked,[=]()
              {
                  //如果被打开了，就不要再次打开
                 // int i;
                  if(isShow[i])
                  {
                      QString str = QString("%1窗口已经被打开了").arg(vToolBtn[i]->text());
                      QMessageBox::warning(this,"警告",str);
                      return;
                  }

                  isShow[i] = true;

                  //弹出聊天对话框
                  //构造聊天窗口时候 告诉这个窗口他的名字 参数1  顶层方式弹出 参数2  窗口名字
                  //注意！ Widget构造函数 并没有这两个参数
                  Widget * widget = new Widget(0,vToolBtn[i]->text());
                  //设置窗口标题
                  widget->setWindowTitle(vToolBtn[i]->text());
                  widget->setWindowIcon(vToolBtn[i]->icon());
                  widget->show();

                  connect(widget,&Widget::closeWidget,[=](){

                          isShow[i] = false;
                  });

              }
              );

          }
}

DialogList::~DialogList()
{
    delete ui;
}
