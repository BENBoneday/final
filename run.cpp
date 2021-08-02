#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
#include<easyx.h>
#include <ctime>
IMAGE img_move[8]; //正常移动
IMAGE img_roll[8]; //滚动
IMAGE img_jump;    //跳跃
struct Gamer
{
	int x;
	int y;
}gamer;
void loadImg()
{
	//加载图片
	for (int i = 0; i < 8; i++)
	{
		char fileName[50] = { 0 };
		sprintf(fileName, "./res/move_%d.jpg", i);
		loadimage(img_move + i, fileName, 70, 100);
		sprintf(fileName, "./res/roll_%d.jpg", i);
		loadimage(img_roll + i, fileName, 50, 50);
	}
	loadimage(&img_jump, "./res/jump.jpg", 70, 100);
}
void init()
{
	loadImg();
	gamer.x=50;
	gamer.y=360-100;
}
void draw()
{
	//绘制矩形 高度40
	setfillcolor(RGB(7, 208, 224));
	solidrectangle(0,getheight()-40,getwidth(),getheight());
	putimage(gamer.x, gamer.y, img_move+1);
}
//玩家跑动
void moveGamer()
{
	static int i = 0;
	putimage(gamer.x, gamer.y, img_move + i);
	i++;
	if (i > 7)
		i = 0;
	//Sleep(60);
}
//定时器
bool Timer(clock_t ms, int id)
{
	static clock_t start[10] = { 0 };
	clock_t end = clock();
	if (end - start[id] >= ms)
	{
		start[id] = end;
		return true;
	}
	return false;
}
int main()
{
	//创建图形窗口
	initgraph(640, 400,EW_SHOWCONSOLE);
	//设置窗口背景颜色
	setbkcolor(WHITE);
	//清屏
	cleardevice();
	init();
	draw();
	while (1)
	{
		if (Timer(100, 0))
		{
			moveGamer();
		}
		printf("Hello!\n");
	}
	getchar();
	return 0;
}