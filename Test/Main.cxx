/*
 * Main.cxx
 *
 *  Created on: 2018年12月3日
 *      Author: vic
 */
#include<stdio.h>
#include<stdlib.h>
#include<FL/Fl.H>
#include<FL/Fl_Window.H>
#include<FL/Fl_Widget.H>
#include<string.h>
#include "Views/Frame/MainFrame.h"

int main(int argc, char *argv[])
{
   make_window();/*初始化窗口函数*/
   mainwin->show();/*显示主窗口*/
   return Fl::run();
}

