#include <stdio.h>
#include <windows.h> 
#include <conio.h>

/*  
    总体思路：
        制作一个编程常用的工具箱，集成常用功能且简单易用
        利用简单按键即可进行选择，尽量减少输入

    GUI制作思路：
        每次屏幕发生变化，清屏并且重新绘制画面
        可单独构建函数实现，每次屏幕发生变化调用函数即可
        向函数传输一个变量，函数负责绘制图像

    按键制作思路：
        构建一个函数，获取特定的按键输入，并返回一个数值
        返回数值用于调用GUI界面，使得屏幕变化并做出对应操作

*/
int guisum=0;
int i;


int animation ()
{
/*---------------------------------------初始化动画-------------------------------------------------------------------*/
printf ("loing。。。。。。\n");
    for (int i = 0; i<50;i++)
    {
        printf ("■");
        Sleep (1);

    }
    Sleep (10);
    system("cls");
    printf ("加载完成！");
    Sleep (300);
    system("cls");
    printf ("欢迎使用 《ZY 工具箱》");
    Sleep (200);
    printf ("\n\n   使用Tab键进行选择/返回，按下回车进行确认\n   ");
    system("pause");
/*-----------------------------------------------------------------------------------------------------------------*/
}
//初始化动画

int gui (int put) //图形界面
{
system ("cls");
printf ("ZY 工具箱\n\n");

    switch (put)
    {
    case 0 :
        guisum =0;
        Sleep (50);
        printf ("》》安装vscode,并配置python环境 (推荐)\n");
        Sleep (50);
        printf ("   看些怪东西\n");
        Sleep (50);
        printf ("   安装python并配置其环境\n");
        Sleep (50);
        printf ("   仅安装vscode\n");
        break;

    case 1  :
        guisum=1;
        printf ("》》安装vscode,并配置python环境 (推荐)\n");
        printf ("   看些怪东西\n");
        printf ("   安装python并配置其环境\n");
        printf ("   仅安装vscode\n");
        break;
    case 2 :
        guisum=2;
        printf ("   安装vscode,并配置python环境 (推荐)\n");
        printf ("》》看些怪东西\n");
        printf ("   安装python并配置其环境\n");
        printf ("   仅安装vscode\n");
        break;
    case 3 :
        guisum=3;
        printf ("   安装vscode,并配置python环境 (推荐)\n");
        printf ("   看些怪东西\n");
        printf ("》》安装python并配置其环境\n");
        printf ("   仅安装vscode\n");
        break;
    case 4: 
        guisum=4;
        printf ("   安装vscode,并配置python环境 (推荐)\n");
        printf ("   看些怪东西\n");
        printf ("   安装python并配置其环境\n");
        printf ("》》仅安装vscode\n");
        break;
    case 2333:
        printf ("┆  ┏┓　　　┏┓ ┆ \n┆┏┛┻━━━┛┻┓ ┆ \n┆┃　　　　　　　┃ ┆ \n┆┃　　　━　　　┃ ┆ \n┆┃　┳┛　┗┳　┃ ┆ \n┆┃　　　　　　　┃ ┆ \n┆┃　　　┻　　　┃ ┆ \n┆┗━┓　  　┏━┛ ┆ \n┆　　┃　  　┃ 　　┆　　　　　　 \n┆　　┃　  　┗━━━┓ ┆ \n┆　　┃　    　　　　┣┓┆ \n┆　　┃　        　　┏┛┆ \n┆　　┗┓┓┏━┳┓┏┛ ┆ \n┆　　　┃┫┫　┃┫┫ ┆ \n┆　　　┗┻┛　┗┻┛ ┆ \n————————————————\n");
        printf ("\n看！   草泥马！");
        break;
    
    default:
        printf ("\n错误,gui里没有这个数值");
        break;
    }



    return 0;
}

int button (int put)//按钮
{
    switch (put)
    {
        case 9 ://按下Tab键
        if (guisum==0)
        {
            printf ("这个是初始化的值");
        }
        else if (guisum<4)
        {
            guisum++;
            gui(guisum);
        }
        else if (guisum==4)
        {
            guisum=1;
            gui(guisum);
        }

        break;
        case 13 : //按下回车键
        switch (guisum)
        {
        case 1:
        system ("winget install python");
        system ("winget install vscode");
        break;
        case 2:
        gui (2333);
        break;
        case 3:
        system ("winget install python");
        break;
        case 4:
        system ("winget install vscode");
        break;        
        }
        

    }
    
    return 0;
}



int main(){
system ("chcp 65001");//转编码并清屏
system("cls");
animation ();//初始化动画

gui (0);
Sleep (100);
gui (2);
Sleep (100);
gui (3);
Sleep (100);
gui (4);
Sleep (100);
gui (1);

while (1)
{
    
i = getch();
button (i);





}



}

