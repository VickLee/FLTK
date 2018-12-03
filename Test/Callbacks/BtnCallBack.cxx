/*
 * BtnCallBack.cxx
 *
 *  Created on: 2018年12月3日
 *      Author: viclee
 */

#include<stdio.h>
#include "../Views/Frame/MainFrame.h"

void bottom_eventinfo_cb(Fl_Button* btn, void*)
{
	printf("时间信息");
}

void bottom_setup_cb(Fl_Button* btn, void*)
{
	printf("设置");
}

void bottom_home_cb(Fl_Button* btn, void*)
{
	printf("主页");
}


void bottom_platformbc_cb(Fl_Button* btn, void*)
{
	printf("离站广播");
}


void bottom_service_cb(Fl_Button* btn, void*)
{
	printf("维护");
}


void bottom_net_cb(Fl_Button* btn, void*)
{
	printf("网络拓扑");
}

void bottom_presta_cb(Fl_Button* btn, void*)
{
	printf("<s");
}

void bottom_nextsta_cb(Fl_Button* btn, void*)
{
	printf("s>");
}

void bottom_platformbc_cb0(Fl_Button* btn, void*)
{
	printf("进站广播");
}
