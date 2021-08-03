#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
#include<easyx.h>
#include <ctime>
IMAGE img_move[8]; //�����ƶ�
IMAGE img_roll[8]; //����
IMAGE img_jump;    //��Ծ
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
	IMAGE* curImg;  //��ǰ��ͼƬ
	int img_i;  
	int inity;      //�����ʼ����
	State state;     //���״̬
}gamer;
bool Timer(clock_t ms, int id);
void loadImg()
{
	//����ͼƬ
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
	//���ƾ��� �߶�40
	setfillcolor(RGB(7, 208, 224));
	solidrectangle(0,getheight()-40,getwidth(),getheight());
	putimage(gamer.x, gamer.y, gamer.curImg + gamer.img_i);
}
//����ܶ�
void moveGamer()
{
	//static int i = 0;
	gamer.curImg = img_move;
	gamer.img_i = (gamer.img_i + 1) % 8;
	//Sleep(60);
}
//��Ծ
void jumpGamer()
{
	static bool isJump = true;//true���� false�½�
	gamer.curImg = &img_jump;

	//����
	if (gamer.y < gamer.inity - 150)
	{
		isJump = false;
		//printf("up\n");
	}
	if (isJump)
	{  //����
		gamer.y -= 30;
	}
	else
	{   //�½�
		gamer.y += 30;
		if (gamer.y >= gamer.inity)
		{
			gamer.state = Move;
			isJump = true;
		}
	}
}
//��ҹ���
void rollGamer()
{
	//������������
	gamer.y = 300;
	gamer.curImg = img_roll;
	
	if (gamer.img_i++ == 7)
	{
		gamer.img_i = 0;
		gamer.state = Move;
		gamer.y = gamer.inity;
	}

}
//���״̬����
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
//���̰�����Ϣ����
void keycontrol()
{
	//��ȡ�첽����״̬  vk�����ֵ
	if (GetAsyncKeyState(VK_SPACE)&&gamer.state==Move) //��
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
//��ʱ��
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
/*@�ϰ���*/
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
//�������Ƿ���ש�鷢����ײ
void collision()
{

}
int main()
{
	//����ͼ�δ���
	initgraph(640, 400,EW_SHOWCONSOLE);
	//���ô��ڱ�����ɫ
	setbkcolor(WHITE);
	//����
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