#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
#include<easyx.h>
#include <ctime>
IMAGE img_move[8]; //正常移动
IMAGE img_roll[8]; //滚动
IMAGE img_jump;    //跳跃
enum State
{
	Move,
	Jump,
	Roll
};
struct Gamer
{
	int x;
	int y;
	IMAGE* curImg;  //当前的图片
	int img_i;  
	int inity;      //保存初始坐标
	State state;     //玩家状态
}gamer;
bool Timer(clock_t ms, int id);
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
	gamer.inity = gamer.y;
	gamer.curImg = img_move;
	gamer.img_i = 0;
	gamer.state = Move;
}
void draw()
{
	//绘制矩形 高度40
	setfillcolor(RGB(7, 208, 224));
	solidrectangle(0,getheight()-40,getwidth(),getheight());
	putimage(gamer.x, gamer.y, gamer.curImg + gamer.img_i);
}
//玩家跑动
void moveGamer()
{
	//static int i = 0;
	gamer.curImg = img_move;
	gamer.img_i = (gamer.img_i + 1) % 8;
	//Sleep(60);
}
//跳跃
void jumpGamer()
{
	static bool isJump = true;//true上升 false下降
	gamer.curImg = &img_jump;

	//下落
	if (gamer.y < gamer.inity - 150)
	{
		isJump = false;
		//printf("up\n");
	}
	if (isJump)
	{  //上升
		gamer.y -= 30;
	}
	else
	{   //下降
		gamer.y += 30;
		if (gamer.y >= gamer.inity)
		{
			gamer.state = Move;
			isJump = true;
		}
	}
}
//玩家滚动
void rollGamer()
{
	//调整滚动坐标
	gamer.y = 300;
	gamer.curImg = img_roll;
	
	if (gamer.img_i++ == 7)
	{
		gamer.img_i = 0;
		gamer.state = Move;
		gamer.y = gamer.inity;
	}

}
//玩家状态处理
void gameStateDeal()
{
	switch (gamer.state)
	{
	case Move:
		if (Timer(100, 0))
			moveGamer();
		break;
	case Jump:
		if (Timer(100, 1))
			jumpGamer();
		break;
	case Roll:
		if (Timer(100, 2))
			rollGamer();
		break;
	}
}
//键盘按键消息处理
void keycontrol()
{
	//获取异步按键状态  vk虚拟键值
	if (GetAsyncKeyState(VK_SPACE)&&gamer.state==Move) //滚
	{
		gamer.state = Roll;
		gamer.img_i = 0;
	}
	if (GetAsyncKeyState(VK_UP))//jump
	{
		gamer.state = Jump;
		gamer.img_i = 0;
	}
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
/*@障碍物*/
struct Bricks
{
	int x;
	int y;
	int w;
	int h;
}brick;
void initBricks()
{
	brick.w = 50;
	brick.h = 50;
	brick.x = 550;
	brick.y = 360 - brick.h;

}
void drawBricks()
{
	setfillcolor(RED);
	solidrectangle(brick.x,brick.y,brick.x+brick.w,brick.y+brick.h);
}
void moveBricks()
{
	brick.x--;
	if (brick.x + brick.w <= 0)
		brick.x = getwidth();
}
//检测玩家是否与砖块发生碰撞
void collision()
{

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
	initBricks();
	BeginBatchDraw();
	while (1)
	{
		cleardevice();
		gameStateDeal();
		
		
		draw();
		keycontrol();
		
		drawBricks();
		if(Timer(3,3))
			moveBricks();
		FlushBatchDraw();
		//printf("Hello!\n");
	}
	EndBatchDraw();
	getchar();
	return 0;
}