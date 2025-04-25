/************************
	程序名：万能软件_max
	作者：小强
	日期：2023年12月3日
	说明：此程序有漏洞，请谅解
**************************/
#include <fstream>
#include <iostream>
#include <cmath>
#include <Windows.h>
#include <algorithm>
#include <ctime>
#include <cstdlib>
#include <string>
#include <cstring>
#include <cstdio>
#include <vector>
#include <ctype.h>
#define clear() cout << "\033c"
#define _114514 begin()
#define _114 dl()
using namespace std;
double qingbao = 114514.0;

int sl_a[105][105], sl_c[105][105], box_s[5][5]/*网格上的小盒子 0 无 -1 电脑 +1 玩家 下同*/,
    box_m[5][5]/*网格上的中盒子*/, box_l[5][5]/*网格上的大盒子*/, box_p1[4] = { 0, 2, 2, 2 },
            box_p2[4] = { 0, 2, 2, 2 }/*电脑和玩家的①小②中③大盒个数*/, box_p[5][5]/*当前网格被谁占据*/,
                        box_px[2][5], box_py[2][5];
struct node {
	int x, y, h;
} aa[15];
char sl_mb[105][105];
bool f_666 = 0;
bool cmp(node a, node b), box_pbox_lace(int x, int y, int size, int q)/*角色q把size箱子放到x行y列的位置*/,
     box_move(int x1, int y1, int x2, int y2, int size, int q)/*角色q把size箱子从x1行y1列转移到x2行y2列*/;
int boss1 = 10000, boss2 = 59999, boss3 = 109999, me = 6000, jin_bi = 2000, fuzi = 0, hui = 0, gong = 0, jian = 0,
    shou = 0, yanzh = 0, xia_jing = 0, xia_youxi = 0, xia_mei = 0, fuzi1 = 0, hui1 = 0, gong1 = 0, jian1 = 0, shou1 = 0,
    power2, st = 0, yu = 114, wnsp = 0, ydsp = 0, sp_6 = 0, yd = 0, nt = 0, lg = 0, ls = 0, hj = 0, txs = 0, fen = 0,
            as = 0, zx5 = 0, cntc = 0, xia_box = 0;
string mima_youxi = "XiaoQiang2021", mima, String;
void launch()/*发射火箭*/, guan()/*开始*/, zhuang(int x)/*转换武器*/, mai(int y)/*买武器*/,
     shi_yong(int x)/*现在的武器*/, dl()/*登录*/, gamebox()/*游戏盒子*/, number(int n)/*输出数字字符n*/,
     aircraft(int n)/*输出火箭n行*/, mei()/*每团*/, jisuan()/*计算游戏*/, caipiao()/*彩票*/, wuqi(int x)/*武器样式*/,
     bu_xue(int y)/*加血*/, little_photo()/*小视频*/, see()/*查看*/, gouwu()/*购物*/, begin()/*主程序*/, mban(int n, int m)
     /*扫雷的答案*/, box_intro(), box_showWinner(int winner), computer()
     , box_showbox_square()/*输出当前网格*/, printl(int n, int m);
int bx[3], by[3];
int gongji(int x)/*攻击*/, fill(int x, int y, int size)/*电脑至少用size大小的棋子占领x行y列*/,
    findWinner()/*对行、列、对角线求和，若和为3则玩家胜利返回1，若和为-3则电脑胜利返回-1，否则返回0继续游戏*/,
    winning(), box_game();
int main() {

	srand(time(0));
	//登录

	_114;
	// 开始游戏

	_114514;

	return 0;
}

void see() {
	cout << "				  请稍等" << endl;
	Sleep(2000);
	cout << "		   请问你要查看什么?  1.知副饱钱包余额  2.已下载软件" << endl;
	cin >> String;
	if (String == "1") {
		printf("				       %.1f\n", qingbao);
	} else if (String == "2") {
		cout << "				已下载";
		if (xia_jing > 0) {
			cout << "京东PC版  ";
		}
		if (xia_youxi > 0) {
			cout << "游戏盒子  ";
		}
		if (xia_mei > 0) {
			cout << "生活小助手  ";
		}
		cout << endl;
	} else {
		cout << "		你觉得我不会多做一手准备吗(笑话)" << endl;
	}
}

void little_photo() {  //小视频
	cout << "			现在是火箭发射现场，让我们跟随小强来收看直播" << endl;
	cout << "					正在转台中..." << endl;
	Sleep(2000);
	cout << "					请稍后" << endl;
	Sleep(2000);
	clear();

	number(10);
	Sleep(1000);
	clear();

	number(9);
	Sleep(1000);
	clear();

	number(8);
	Sleep(1000);
	clear();

	number(7);
	Sleep(1000);
	clear();

	number(6);
	Sleep(1000);
	clear();

	number(5);
	Sleep(1000);
	clear();

	number(4);
	Sleep(1000);
	clear();

	number(3);
	Sleep(1000);
	clear();

	number(2);
	Sleep(1000);
	clear();

	number(1);
	Sleep(1000);
	clear();

	number(0);
	Sleep(1000);
	clear();

	launch();
	cout << "火箭发射成功！" << endl;
	Sleep(2000);
	clear();
	cout << "------------------" << endl;
	cout << "[  已看完此视频  ]" << endl;
	cout << "[                ]" << endl;
	cout << "[     /-/-       ]" << endl;
	cout << "[    【o  o】    ]" << endl;
	cout << "[    【__/】     ]" << endl;
	cout << "[ ---- o--o ---- ]" << endl;
	cout << "[     HAPPY ??    ]" << endl;
	cout << "[五元钱特效加载中]" << endl;
	cout << "[     ......     ]" << endl;
	cout << "[                ]" << endl;
	cout << "------------------" << endl;
	cout << "[恭喜获得五元一角]" << endl;
	cout << "[知副饱到账五元一角]" << endl;
	cout << "------------------" << endl;
	cout << "					回复任意继续" << endl;
	cin >> String;
	qingbao += 5.1;
	Sleep(2000);
	clear();
}

void mei() {
	clear();
	cout << "				正在加载中-----" << endl;
	if (xia_mei == 0) {
		for (int i = 18; i >= 12; i--) {
			cout << "			正在帮你下载中(预计还需" << i << "秒...)" << endl;
			Sleep(1000);
			clear();

		}
		cout << "			正在帮你下载中(预计还需7秒...)" << endl;
		Sleep(1000);
		clear();
		for (int i = 6; i >= 3; i--) {
			cout << "			正在帮你下载中(预计还需" << i << "秒...)" << endl;
			Sleep(1000);
			clear();
		}
		cout << "			正在帮你下载中(预计还需1秒...)" << endl;
		Sleep(1000);
		clear();
		cout << "				          下载成功" << endl;
		xia_mei += 1;
		Sleep(2000);
	}
	cout << "                                    作者还在开发中..." << endl;
	Sleep(5000);
	clear();
}

void number(int n) {
	switch (n) {
		case 0:
			cout << "* * * *" << endl;
			cout << "*     *" << endl;
			cout << "*     *" << endl;
			cout << "*     *" << endl;
			cout << "*     *" << endl;
			cout << "*     *" << endl;
			cout << "* * * *" << endl;
			break;
		case 1:
			cout << "      *" << endl;
			cout << "      *" << endl;
			cout << "      *" << endl;
			cout << "      *" << endl;
			cout << "      *" << endl;
			cout << "      *" << endl;
			cout << "      *" << endl;
			break;
		case 2:
			cout << "* * * *" << endl;
			cout << "      *" << endl;
			cout << "      *" << endl;
			cout << "* * * *" << endl;
			cout << "*      " << endl;
			cout << "*      " << endl;
			cout << "* * * *" << endl;
			break;
		case 3:
			cout << "* * * *" << endl;
			cout << "      *" << endl;
			cout << "      *" << endl;
			cout << "* * * *" << endl;
			cout << "      *" << endl;
			cout << "      *" << endl;
			cout << "* * * *" << endl;
			break;
		case 4:
			cout << "*     *" << endl;
			cout << "*     *" << endl;
			cout << "*     *" << endl;
			cout << "* * * *" << endl;
			cout << "      *" << endl;
			cout << "      *" << endl;
			cout << "      *" << endl;
			break;
		case 5:
			cout << "* * * *" << endl;
			cout << "*      " << endl;
			cout << "*      " << endl;
			cout << "* * * *" << endl;
			cout << "      *" << endl;
			cout << "      *" << endl;
			cout << "* * * *" << endl;
			break;
		case 6:
			cout << "* * * *" << endl;
			cout << "*      " << endl;
			cout << "*      " << endl;
			cout << "* * * *" << endl;
			cout << "*     *" << endl;
			cout << "*     *" << endl;
			cout << "* * * *" << endl;
			break;
		case 7:
			cout << "* * * *" << endl;
			cout << "*     *" << endl;
			cout << "*     *" << endl;
			cout << "      *" << endl;
			cout << "      *" << endl;
			cout << "      *" << endl;
			cout << "      *" << endl;
			break;
		case 8:
			cout << "* * * *" << endl;
			cout << "*     *" << endl;
			cout << "*     *" << endl;
			cout << "* * * *" << endl;
			cout << "*     *" << endl;
			cout << "*     *" << endl;
			cout << "* * * *" << endl;
			break;
		case 9:
			cout << "* * * *" << endl;
			cout << "*     *" << endl;
			cout << "*     *" << endl;
			cout << "* * * *" << endl;
			cout << "      *" << endl;
			cout << "      *" << endl;
			cout << "* * * *" << endl;
			break;
		case 10:
			cout << "*    * * * *" << endl;
			cout << "*    *     *" << endl;
			cout << "*    *     *" << endl;
			cout << "*    *     *" << endl;
			cout << "*    *     *" << endl;
			cout << "*    *     *" << endl;
			cout << "*    * * * *" << endl;
	}
}

void aircraft(int n) {
	switch (n) {
		case 19:
			cout << "                1C0C;                " << endl;
		case 18:
			cout << "            ,8C:     :8G             " << endl;
		case 17:
			cout << "         .;0i 1;        f88          " << endl;
		case 16:
			cout << "        tL Ct              C1        " << endl;
		case 15:
			cout << "       ,0 Lt                0:       " << endl;
		case 14:
			cout << "       G  @                 1C       " << endl;
		case 13:
			cout << "       0 iG    G0LtL0G.      0.      " << endl;
		case 12:
			cout << "       0 1G  1C.01    Ct     0.      " << endl;
		case 11:
			cout << "       0 1G  0.8:      0.    0.      " << endl;
		case 10:
			cout << "      .0.    8:i0.    :0     0.      " << endl;
		case 9:
			cout << "   .C8:       CG .   L8       :0G.   " << endl;
		case 8:
			cout << ".C8,            ,1f1:            :0G." << endl;
		case 7:
			cout << "0.0,                               :8" << endl;
		case 6:
			cout << "8.C.L@f0                     0G0f.fL8" << endl;
		case 5:
			cout << "       iiiiiiiiiiiiiiiiiiiiiii       " << endl;
		case 4:
			cout << "            8000000000008            " << endl;
		case 3:
			cout << "           0             8           " << endl;
		case 2:
			cout << "          ff  00     0@, ff          " << endl;
		case 1:
			cout << "           100  0   0  00t           " << endl;
		case 0:
			cout << "                 0i0                 " << endl;
	}
}

void launch() {
	for (int i = 19; i >= 0; i -= 2) {
		clear();
		Sleep(500);
		aircraft(i);
	}
	clear();
}

void guan() {
	string a;
	cout << "你是管理员吗?(是/否)" << endl;
	cin >> a;
	if (a == "是") {
		cout << "管理员密码?" << endl;
		cin >> a;
		if (a == mima_youxi) {
			cout << "??" << endl;
			Sleep(1000);
			clear();
			cout << "是否更改boss数值?(是/否)" << endl;
			cin >> a;
			if (a == "是") {
				int b;
				cout << "boss1的血量?" << endl;
				cin >> b;
				boss1 = b;
				cout << "boss2的血量?" << endl;
				cin >> b;
				boss2 = b;
				cout << "boss3的血量?" << endl;
				cin >> b;
				boss3 = b;
				cout << "更改成功,是否开启游戏(如不开启游戏,则数值编辑无效)(是/否)" << endl;
				cin >> a;
				if (a == "是") {
					cout << "";
				} else {
					cout << "默认不开启游戏，数值编辑删除" << endl;
					exit(0);
				}
			} else {
				cout << "以后不要点进来！！！" << endl;
			}
		} else {
			cout << "还装管理员！狗吧你！！！" << endl;
		}
	} else {
		cout << "好的?? ,很自觉 (′▽ `?" << endl;
	}
}

void mai(int y) {     //买武器
	if (y == 1) {
		if (jin_bi >= 1000) {
			cout << "已装备斧子" << endl;
			fuzi = 1;
			hui = 0, gong = 0, jian = 0, shou = 0;
			fuzi1 = 1;
			jin_bi -= 1000;
		} else {
			cout << "金币不够" << endl;
			cout << "~~" << endl;
		}
	}
	if (y == 2) {
		if (jin_bi >= 1600) {
			cout << "已装备回旋镖" << endl;
			fuzi = 0;
			hui = 1, gong = 0, jian = 0, shou = 0;
			hui1 = 1;
			jin_bi -= 1600;
		} else {
			cout << "金币不够" << endl;
			cout << "~~" << endl;
		}

	}
	if (y == 3) {
		if (jin_bi >= 2000) {
			cout << "已装备弓箭" << endl;
			fuzi = 0;
			hui = 0, gong = 1, jian = 0, shou = 0;
			gong1 = 1;
			jin_bi -= 2000;
		} else {
			cout << "金币不够" << endl;
			cout << "~~" << endl;
		}

	}
	if (y == 4) {
		if (jin_bi >= 5000) {
			cout << "已装备剑??" << endl;
			fuzi = 0;
			hui = 0, gong = 0, jian = 1, shou = 0;
			jian1 = 1;
			jin_bi -= 5000;
		} else {
			cout << "金币不够" << endl;
			cout << "~~" << endl;
		}

	}
	if (y == 5) {
		if (jin_bi >= 8000) {
			cout << "已装备手榴弹" << endl;
			fuzi = 0;
			hui = 0, gong = 0, jian = 0, shou = 1;
			shou1 += 3;
			jin_bi -= 8000;
		} else {
			cout << "金币不够" << endl;
			cout << "~~" << endl;
		}

	}

}

void bu_xue(int y) {  //加血
	if (y <= jin_bi) {
		jin_bi -= y;
		me += y;
		cout << "补血成功，不用谢" << endl;
	} else {
		cout << "补血失败，你没钱" << endl;
	}
}

void wuqi(int x) {
	int y;
	cout << "你现在可以花钱买武器，买斧子扣1，需1000金币" << endl;
	cout << "买回旋镖扣2，需1600金币" << endl;
	cout << "买弓箭扣3，需2000金币" << endl;
	cout << "买剑??扣4，需5000金币" << endl;
	cout << "买手榴弹扣5，需8000金币买3个" << endl;
	cout << "买血量扣6,需1金币换1血量" << endl;
	cout << "你现在有" << jin_bi << "金币" << endl;
	cin >> y;
	if (y == 1 || y == 2 || y == 3 || y == 4 || y == 5) {
		mai(y);
	} else if (y == 6) {
		cout << "补多少血" << endl;
		cin >> y;
		bu_xue(y);
	}
}

void shi_yong(int x) { //现在的武器
	cout << "你现在使用的武器是";
	if (fuzi == 1) {
		cout << "斧子" << endl;
	} else if (hui == 1) {
		cout << "回旋镖" << endl;
	} else if (gong == 1) {
		cout << "弓箭" << endl;
	} else if (jian == 1) {
		cout << "剑??" << endl;
	} else if (shou == 1) {
		cout << "手榴弹" << endl;
	} else {
		cout << "拳头" << endl;
	}
}

int gongji(int x) {   //攻击boss和反击
	if (fuzi == 1) {
		int shanghai = rand() % 150 + 100;
		jin_bi += 366;
		if (boss1 > 0) {
			int boss1s = rand() % 200 + 500;
			boss1 -= shanghai;
			me -= boss1s;
			cout << "你用斧子攻击了boss,造成伤害" << shanghai << ",boss1血量" << boss1 << ",boss1发动反击,造成伤害" << boss1s <<
			     ",我的血量" << me << endl;
		} else if (boss1 < 1 && boss2 > 0) {
			int boss2s = rand() % 500 + 1100;
			boss2 -= shanghai;
			me -= boss2s;
			cout << "你用斧子攻击了boss,造成伤害" << shanghai << ",boss2血量" << boss2 << ",boss2发动反击,造成伤害" << boss2s <<
			     ",我的血量" << me << endl;
		} else if (boss2 < 1 && boss3 > 0) {
			int boss3s = rand() % 1000 + 2456;
			boss3 -= shanghai;
			me -= boss3s;
			cout << "你用斧子攻击了boss3,造成伤害" << shanghai << ",boss3血量" << boss3 << ",boss3发动反击,造成伤害" << boss3s <<
			     ",我的血量" << me << endl;
		}
	} else if (hui == 1) {
		int shanghai = rand() % 150 + 400;
		jin_bi += 888;
		if (boss1 > 0) {
			int boss1s = rand() % 200 + 500;
			boss1 -= shanghai;
			me -= boss1s;
			cout << "你用回旋镖攻击了boss,造成伤害" << shanghai << ",boss1血量" << boss1 << ",boss1发动反击,造成伤害" << boss1s <<
			     ",我的血量" << me << endl;
		} else if (boss1 < 1 && boss2 > 0) {
			int boss2s = rand() % 500 + 1100;
			boss2 -= shanghai;
			me -= boss2s;
			cout << "你用回旋镖攻击了boss2,造成伤害" << shanghai << ",boss2血量" << boss2 << ",boss2发动反击,造成伤害" << boss2s <<
			     ",我的血量" << me << endl;
		} else if (boss2 < 1 && boss3 > 0) {
			int boss3s = rand() % 1000 + 2000;
			boss3 -= shanghai;
			me -= boss3s;
			cout << "你用回旋镖攻击了boss3,造成伤害" << shanghai << ",boss3血量" << boss3 << ",boss3发动反击,造成伤害" << boss3s <<
			     ",我的血量" << me << endl;
		}
	} else if (gong == 1) {
		jin_bi += 1567;
		int shanghai = rand() % 200 + 901;
		if (boss1 > 0) {
			int boss1s = rand() % 200 + 500;
			boss1 -= shanghai;
			me -= boss1s;
			cout << "你用弓箭攻击了boss,造成伤害" << shanghai << ",boss1血量" << boss1 << ",boss1发动反击,造成伤害" << boss1s <<
			     ",我的血量" << me << endl;
		} else if (boss1 < 1 && boss2 > 0) {
			int boss2s = rand() % 500 + 1100;
			boss2 -= shanghai;
			me -= boss2s;
			cout << "你用弓箭攻击了boss,造成伤害" << shanghai << ",boss2血量" << boss2 << ",boss2发动反击,造成伤害" << boss2s <<
			     ",我的血量" << me << endl;
		} else if (boss2 < 1 && boss3 > 0) {
			int boss3s = rand() % 1000 + 2409;
			boss3 -= shanghai;
			me -= boss3s;
			cout << "你用弓箭攻击了boss3,造成伤害" << shanghai << ",boss3血量" << boss3 << ",boss3发动反击,造成伤害" << boss3s <<
			     ",我的血量" << me << endl;
		}
	} else if (jian == 1) {
		int shanghai = rand() % 300 + 3309;
		jin_bi += 1913;
		if (boss1 > 0) {
			int boss1s = rand() % 200 + 300;
			boss1 -= shanghai;
			me -= boss1s;
			cout << "你用剑??攻击了boss,造成伤害" << shanghai << ",boss1血量" << boss1 << ",boss1发动反击,造成伤害" << boss1s <<
			     ",我的血量" << me << endl;
		} else if (boss1 < 1 && boss2 > 0) {
			int boss2s = rand() % 500 + 1200;
			boss2 -= shanghai;
			me -= boss2s;
			cout << "你用剑??攻击了boss,造成伤害" << shanghai << ",boss2血量" << boss2 << ",boss2发动反击,造成伤害" << boss2s <<
			     ",我的血量" << me << endl;
		} else if (boss2 < 1 && boss3 > 0) {
			int boss3s = rand() % 1000 + 2398;
			boss3 -= shanghai;
			me -= boss3s;
			cout << "你用剑??攻击了boss3,造成伤害" << shanghai << ",boss3血量" << boss3 << ",boss3发动反击,造成伤害" << boss3s <<
			     ",我的血量" << me << endl;
		}
	} else if (shou == 1) {
		if (shou1 == 0) {
			cout << "无手榴弹" << endl;
			shou1 = 0;
			shou = 0;
		} else {
			jin_bi += 500;
			shou1 -= 1;
			int shanghai = rand() % 450 + 5001;
			if (boss1 > 0) {
				int boss1s = rand() % 200 + 500;
				boss1 -= shanghai;
				me -= boss1s;
				cout << "你用手榴弹攻击了boss,造成伤害" << shanghai << ",boss1血量" << boss1 << ",boss1发动反击,造成伤害" << boss1s <<
				     ",我的血量" << me << endl;
			} else if (boss1 < 1 && boss2 > 0) {
				int boss2s = rand() % 450 + 1099;
				boss2 -= shanghai;
				me -= boss2s;
				cout << "你用手榴弹攻击了boss,造成伤害" << shanghai << ",boss2血量" << boss2 << ",boss2发动反击,造成伤害" << boss2s <<
				     ",我的血量" << me << endl;
			} else if (boss2 < 1 && boss3 > 0) {
				int boss3s = rand() % 500 + 2000;
				boss3 -= shanghai;
				me -= boss3s;
				cout << "你用手榴弹攻击了boss3,造成伤害" << shanghai << ",boss3血量" << boss3 << ",boss3发动反击,造成伤害" << boss3s <<
				     ",我的血量" << me << endl;
			}
		}

	} else {
		int shanghai = rand() % 5 + 20;
		jin_bi += 100000;
		if (boss1 > 0) {
			int boss1s = rand() % 200 + 500;
			boss1 -= shanghai;
			me -= boss1s;
			cout << "你用拳头攻击了boss,造成伤害" << shanghai << ",boss1血量" << boss1 << ",boss1发动反击,造成伤害" << boss1s <<
			     ",我的血量" << me << endl;
		} else if (boss1 < 1 && boss2 > 0) {
			int boss2s = rand() % 500 + 1100;
			boss2 -= shanghai;
			me -= boss2s;
			cout << "你用拳头攻击了boss2,造成伤害" << shanghai << ",boss2血量" << boss2 << ",boss2发动反击,造成伤害" << boss2s <<
			     ",我的血量" << me << endl;
		} else if (boss2 < 1 && boss3 > 0) {
			int boss3s = rand() % 1000 + 2100;
			boss3 -= shanghai;
			me -= boss3s;
			cout << "你用拳头攻击了boss3,造成伤害" << shanghai << ",boss3血量" << boss3 << ",boss3发动反击,造成伤害" << boss3s <<
			     ",我的血量" << me << endl;
		}
	}
	if (me <= 0) {
		cout << "你已死亡，游戏失败" << endl;
		return 1;
	}
	return 0;
}

void zhuang(int x) {  //转换武器
	if (fuzi == 1) {
		if (hui1 == 1) {
			fuzi = 0, hui = 1;
			cout << "装备回旋镖" << endl;
		} else if (gong1 == 1) {
			fuzi = 0, gong = 1;
			cout << "装备弓箭" << endl;
		} else if (jian1 == 1) {
			fuzi = 0, jian = 1;
			cout << "装备剑??" << endl;
		} else if (shou1 >= 1) {
			fuzi = 0, shou = 1;
			cout << "装备手榴弹" << endl;
		} else {
			cout << "无装备转换" << endl;
		}
	} else if (hui == 1) {
		if (gong1 == 1) {
			hui = 0, gong = 1;
			cout << "装备弓箭" << endl;
		} else if (jian1 == 1) {
			hui = 0, jian = 1;
			cout << "装备剑??" << endl;
		} else if (shou1 >= 1) {
			hui = 0, shou = 1;
			cout << "装备手榴弹" << endl;
		} else if (fuzi1 == 1) {
			hui = 0, fuzi = 1;
			cout << "装备斧子" << endl;
		} else {
			cout << "无装备转换" << endl;
		}
	} else if (gong == 1) {
		if (jian1 == 1) {
			gong = 0, jian = 1;
			cout << "装备剑??" << endl;
		} else if (shou1 >= 1) {
			gong = 0, shou = 1;
			cout << "装备手榴弹" << endl;
		} else if (fuzi1 == 1) {
			gong = 0, fuzi = 1;
			cout << "装备斧子" << endl;
		} else if (hui1 == 1) {
			gong = 0, hui = 1;
			cout << "装备回旋镖" << endl;
		} else {
			cout << "无装备转换" << endl;
		}
	} else if (jian == 1) {
		if (shou1 >= 1) {
			jian = 0, shou = 1;
			cout << "装备手榴弹" << endl;
		} else if (fuzi1 == 1) {
			jian = 0, fuzi = 1;
			cout << "装备斧子" << endl;
		} else if (hui1 == 1) {
			jian = 0, hui = 1;
			cout << "装备回旋镖" << endl;
		} else if (gong1 == 1) {
			jian = 0, gong = 1;
			cout << "装备弓箭" << endl;
		} else {
			cout << "无装备转换" << endl;
		}
	} else if (shou == 1) {
		if (fuzi1 == 1) {
			shou = 0, fuzi = 1;
			cout << "装备斧子" << endl;
		} else if (hui1 == 1) {
			shou = 0, hui = 1;
			cout << "装备回旋镖" << endl;
		} else if (gong1 == 1) {
			shou = 0, gong = 1;
			cout << "装备弓箭" << endl;
		} else if (jian1 == 1) {
			shou = 0, jian = 1;
			cout << "装备剑??" << endl;
		} else if (shou1 >= 1) {
			shou = 0, shou = 1;
			cout << "装备手榴弹" << endl;
		} else {
			cout << "无装备转换" << endl;
		}
	}
}

void jisuan() {
	srand(time(0));
	int tsum = 0;
	int maxt = 0;
	int mint = 100;
	int wrongCount = 0, rightCount = 0;
	for (int i = 1; i <= 10; i++) { //请写出循环条件
		int a = rand() % 10 + 1;
		int b = rand() % 10 + 1;
		int op = rand() % 4 + 1;
		int res;
		if (op == 1) { // 加法
			cout << a << " + " << b << " = " << endl;
			res = a + b;
		}
		if (op == 2) { // 减法
			if (a < b) {
				int c = a;
				a = b;
				b = c;
			}
			cout << a << " - " << b << " = " << endl;
			res = a - b;
		}
		if (op == 3) { // 乘法
			cout << a << " * " << b << " = " << endl;
			res = a * b;
		}
		if (op == 4) { // 除法
			cout << a *b << " / " << a << " = " << endl;
			res = b;
		}
		int ans, beg = time(0); // 开始时间
		cout << "请输入你的计算结果：" << endl;
		cin >> ans;
		if (ans == res) {
			cout << "(＾－＾)V 答对了！" << endl;
			rightCount++;
		} else {
			cout << "┭┮﹏┭┮ 答错了！" << endl;
			wrongCount++;
		}
		cout << endl;
		int end = time(0); // 结束时间
		tsum += end - beg;
		maxt = max(maxt, end - beg);
		mint = min(mint, end - beg);
		cout << "本题用时：" << end - beg << " 秒" << endl << endl;
	}
	cout << "(￣▽￣)~* 游戏结束！" << endl;
	cout << "总计：" << rightCount * 10 << " 分" << endl;
	cout << "对：" << rightCount << " 道" << endl;
	cout << "错：" << wrongCount << " 道" << endl;
	cout << "总用时：" << tsum << " 秒" << endl;
	cout << "平均用时：" << tsum / 10.0 << " 秒" << endl;
	cout << "最慢用时：" << maxt << " 秒" << endl;
	cout << "最快用时：" << mint << " 秒" << endl;
}

void dl() {
	srand(time(0));
	cout << "   				              ^" << endl;
	cout << "			欢迎来到万能软件4.0max|" << endl;
	Sleep(1000);
	cout << "	请选择登录方式：----------------------------------" << endl;
	Sleep(1000);
	cout << "		1.已有账号，直接登录   2.注册账号   3.不想登录" << endl;
	string s;
	cin >> s;
	if (s == "1") {
		cout << "				请稍等~~" << endl;
		Sleep(2000);
		cout << "				OK~~" << endl;
		cout << "				账号名字加密码^^" << endl;
		cin >> s;
		if (s == "eo不是原鱼粥") {
			Sleep(1000);
			cout << "				请稍等~~" << endl;
			Sleep(2000);
			cout << "				账号登录成功" << endl;
			cout << "				请输入密码" << endl;
			cin >> s;
			if (s == "XiaoQiang2021") {
				cout << "				没有请稍";
				qingbao += 100000000;
				cout << "等";
				cout << "了" << endl;
				cout << "				啊，终于好了" << endl;
				Sleep(5000);
				st += 3500;
				cout << "				登陆成功" << endl;
			} else {
				cout << "				还想假冒充，狗吧你" << endl;
				exit(0);
			}
		} else if (s == "e0不是原农粥") {
			Sleep(1000);
			cout << "				请稍等~~" << endl;
			Sleep(2000);
			cout << "				账号登录成功" << endl;
			cout << "				请输入密码" << endl;
			cin >> s;
			if (s == "don'tknow") {
				cout << "				没有请稍";
				qingbao += 10000;
				cout << "等";
				st += 3500;
				cout << "了" << endl;
				cout << "				啊，终于好了" << endl;
				Sleep(5000);
				cout << "				登录成功" << endl;
			} else {
				cout << "				还想假冒充，狗吧你" << endl;
				exit(0);
			}
		} else {
			cout << "				还想假冒充，狗吧你" << endl;
			exit(0);
		}
	} else if (s == "2") {
		bool flag = true;
		while (flag == 1) {
			cout << "		选择注册方式-------------------------------" << endl;
			cout << "			1.验证码   2.微信登录   3.QQ登录" << endl;
			cin >> s;
			if (s == "3") {
				cout << "				暂不支持此登录方式" << endl;
				Sleep(1000);
				cout << "				请稍后" << endl;
				Sleep(1000);
			} else if (s == "2") {
				cout << "				请先下载微信PC..." << endl;
				Sleep(1000);
			} else if (s == "1") {
				cout << "				手机验证码还是可以登录的" << endl;
				cout << "				请先输入手机号码(11位数)" << endl;
				cin >> mima;
				if (mima.length() != 11) {
					cout << "				错误！！！不是十一位数！" << endl;
					Sleep(2000);
				} else {
					flag = 0;
					int temp = rand() % 100000;
					cout << "				验证码已发送(10秒内应该能收到)" << endl;
					Sleep(rand() % 10 + 1);
					cout << "		d=====(￣▽￣*) 验证码" << temp << "(注意" << 20 << "秒内有效，不要泄露,此码便是此账号密码)" << endl;
					cin >> yanzh;
					if (yanzh == temp) {
						cout << "				请记住此账号！！！" << endl;
					} else {
						cout << "				验证码错误" << endl;
						cout << "				请稍等" << endl;
						flag = 1;
						Sleep(2000);
					}
				}
			}
		}
	} else if (s == "4") {
		cout << "                           尊贵的vip,内测登录" << endl;
		cout << "				登录成功" << endl;
		f_666 = 1;
	} else {
		cout << "				不想登录就别玩了" << endl;
		exit(0);
	}
}

void gamebox() {
	Sleep(1000);
	clear();
	cout << "			正在下载游戏盒子(最新)-------------------" << endl;
	Sleep(1000);
	if (f_666 == 1) {
		cout << "尊贵的vip,您无需等待下载" << endl;
		xia_youxi = 1;
		Sleep(1000);
	} else if (xia_youxi == 0) {
		for (int i = 25; i >= 1; i--) {
			cout << "			正在下载游戏盒子(最新)-------------------" << endl;
			cout << "			正在帮你下载中(预计还需" << i << "秒...)" << endl;
			Sleep(1000);
			clear();
		}
		cout << "				下载成功" << endl;
		xia_youxi += 1;
	}
	bool Bool = true;
	int q2 = time(0);
	int d = rand() % 2 + 1;
	int f = 0;
	string q1;
	while (Bool == true) {
		cout << "欢迎来到游戏盒子，你要玩什么？1.猜数游戏2.石头剪刀布3.欧皇游戏4.100以内加减乘除法5.决斗战场6.退出" << endl;
		if (f_666 == 1)
			cout << "                        114.扫雷(内测游戏有bug)  7.猫脚网络  8.盒子游戏" << endl;
		cin >> q1;
		if (q1 == "1") {
			int n, number, sum;
			bool flag = true;
			string str;
			srand((unsigned int)time(NULL));
			number = rand() % 20;
			cout << "准备好了吗，游戏要开始咯" << endl;
			cout << "回复“no”再准备一下，回复任意开始游戏..." << endl;
			cin >> str;
			if (str == "no" || str == "No" || str == "nO" || str == "NO") {
				cout << "再准备一下，欢迎下次再来玩哟~" << endl;
			} else {
				cout << endl << "|游戏开始|" << endl << "你想有几次机会呢？" << endl;
				cin >> sum;
				cout << "请输入猴博士心中所想的数字(你有" << sum << "次机会哦~)：";
				while (sum) {
					cin >> n;
					if (number > n) {
						cout << "↑ 猜小啦 ↑" << endl;
					} else if (number < n) {
						cout << "↓ 猜大啦 ↓" << endl;
					} else {
						cout << "猜对啦~，真棒！" << endl;
						cout << endl << "恭喜你成功完成！( ?? ω ?? )y" << endl;
						cout << "再玩一次吧，回复“算了或no”就再准备一下，回复任意开始游戏..." << endl;
						cin >> str;
						flag = false;
						break;
					}
					sum--;
					if (sum)
						cout << endl << "继续猜猜看，接着输入猴博士想的那个数字：" << endl;
				}
				if (flag) {
					cout << endl << "机会用完了哦~，猴博士心中所想的数字是: " << number << endl;
					cout << "再玩一次吧，回复“算了或no”就再准备一下，回复任意开始游戏..." << endl;
					cin >> str;
				}
			}
		} else if (q1 == "2") {
			string str;
			string c;
			cout << "1.开挂服2.反开挂服3.嘿嘿嘿服4.你不知道的服5.退出^,^" << endl;
			cin >> c;
			if (c == "1") {
				cout << "0表示石头，1表示剪刀，2表示布" << endl;
				cin >> str;
				if (str == "0") {
					cout << "我出2,布" << endl;
					cout << "哈哈，你输了" << endl;

				} else if (str == "1") {
					cout << "我出0,石头" << endl;
					cout << "哈哈，你输了" << endl;

				} else if (str == "2") {
					cout << "我出1,剪刀" << endl;
					cout << "哈哈，你输了" << endl;

				} else {
					cout << "想纠我bug，没门！" << endl;
				}
			} else if (c == "2") {
				cout << "0表示石头，1表示剪刀，2表示布" << endl;
				cin >> str;
				if (str == "0") {
					cout << "我出1,剪刀" << endl;
					cout << "啊，我输了" << endl;

				} else if (str == "1") {
					cout << "我出2,布" << endl;
					cout << "啊，我输了" << endl;

				} else if (str == "2") {
					cout << "我出0,石头" << endl;
					cout << "啊，我输了" << endl;

				} else {
					cout << "想纠我bug，没门！" << endl;
				}
			} else if (c == "3") {
				cout << "0表示石头，1表示剪刀，2表示布" << endl;
				cin >> str;
				if (str == "0") {
					cout << "我出0,石头" << endl;
					cout << "咦，我们平局了" << endl;

				} else if (str == "1") {
					cout << "我出1,剪刀" << endl;
					cout << "咦，我们平局了" << endl;

				} else if (str == "2") {
					cout << "我出2,布" << endl;
					cout << "咦，我们平局了" << endl;

				} else {
					cout << "想纠我bug，没门！" << endl;
				}
			} else if (c == "4") {
				cout << "0表示石头，1表示剪刀，2表示布" << endl;
				int b = rand() % 3;
				cin >> str;
				if (b == 0 && str == "0" || b == 1 && str == "1" || b == 2 && str == "2") {
					if (str == "0") {
						cout << "我出0,石头" << endl;
						cout << "咦，我们平局了" << endl;

					} else if (str == "1") {
						cout << "我出1,剪刀" << endl;
						cout << "咦，我们平局了" << endl;

					} else if (str == "2") {
						cout << "我出2,布" << endl;
						cout << "咦，我们平局了" << endl;

					} else {
						cout << "想纠我bug，没门！" << endl;
					}
				} else if (b == 0 && str == "1" || b == 1 && str == "2" || b == 2 && str == "0") {
					if (str == "0") {
						cout << "我出2,布" << endl;
						cout << "哈哈，你输了" << endl;

					} else if (str == "1") {
						cout << "我出0,石头" << endl;
						cout << "哈哈，你输了" << endl;

					} else if (str == "2") {
						cout << "我出1,剪刀" << endl;
						cout << "哈哈，你输了" << endl;

					} else {
						cout << "想纠我bug，没门！" << endl;
					}
				} else if (str == "0" && b == 1 || str == "1" && b == 2 || str == "2" && b == 0) {
					if (str == "0") {
						cout << "我出1,剪刀" << endl;
						cout << "啊，我输了" << endl;

					} else if (str == "1") {
						cout << "我出2,布" << endl;
						cout << "啊，我输了" << endl;

					} else if (str == "2") {
						cout << "我出0,石头" << endl;
						cout << "啊，我输了" << endl;

					} else {
						cout << "想纠我bug，没门！" << endl;
					}
				} else {
					cout << "想纠我bug，没门！" << endl;
				}
			} else if (c == "5") {
				cout << "狗得摆" << endl;
			} else {
				cout << "不想玩就算了" << endl;
			}
		} else if (q1 == "3") {
			srand(time(0));

			cout << "请输入宝箱密码------";
			int d = 0;
			int a, tot = 150, score = 0; //tot是初始积分，score是最终积分
			cout << "请输入1~5中任意1个数：" << endl;
			cin >> a;
			if (a == rand() % 5 + 1) {
				cout << "恭喜你打开了宝箱！";
				score += 300;
				cout << "现在你获得了一个宝箱，我还给了你300积分，看你最后是否会超过175积分，开一次宝箱消耗100积分，每次宝箱中又会随机开出10~150积分，最多可以连续开3次"
				     << endl;
			} else {
				cout << "密码错误，再给你一次机会吧！";
				cin >> a;

				if (a == rand() % 5 + 1) {
					cout << "终于等到你，还好没放弃！";
					score += 150;
					cout << "现在你获得了一个宝箱，我还给了你150积分，看你最后是否会超过175积分，开一次宝箱消耗100积分，每次宝箱中又会随机开出10~150积分，最多可以连续开3次"
					     << endl;
				} else {
					cout << "拜拜了您呐！";
				}
			}
			if (score >= 100) {
				score -= 100;    //开箱消耗100积分
				cout << "输入任意数字开始吧：" << endl;
				cin >> a;
				int res = rand() % 141 + 10; //随机产生10~150的积分
				score += res;            //将这一轮产生的积分累加到score中
				cout << "^_^本关结束，目前积分为：" << score << endl;
				if (score >= 100) {
					score -= 100;
					cout << "【看来你赚了不少积分！】" << endl << endl;
					cout << "输入任意数字继续：" << endl;
					cin >> a;

					res = rand() % 141 + 10;
					score += res;
					cout << "^_^本关结束，目前积分为：" << score << endl;
					if (score >= 100) {
						score -= 100;
						cout << "【竟然能走到最后一关！】" << endl << endl;
						cout << "来吧，输入任意数字一决胜负：" << endl;
						cin >> a;

						res = rand() % 141 + 10;
						score += res;
						cout << "^_^本关结束，目前积分为：" << score << endl << endl;
					} else {
						cout << "【哦吼，已经不错啦！】" << endl;
					}
				} else {
					cout << "【有缘再见啦！】" << endl;
				}
			}
			cout << "本次活动结束，目前积分为：" << score << endl;

			if (score > tot) { //判断最终积分是否多于开始积分
				cout << "【You're a lucky guy!】";
			} else {
				cout << "【What happened?】";
			}
			if (score >= 175) {
				cout << "恭喜你，成为欧欧欧欧欧皇，触发隐藏奖励，现将一个宝箱送你";
				int  b;
				cout << "输入任意数字第一次开箱：" << endl;
				cin >> a;
				b = rand() % 41 + 60;
				cout << "本次获得积分：" << b << endl << endl;
				if (b >= 90) {
					cout << "【欧皇装备】" << endl;
				} else {
					cout << "啥都没中！输入任意数字第二次开箱：" << endl;
					cin >> a;
					/*把第二次开箱的分数累加到score中*/
					b += rand() % 41 + 60;
					cout << "本次开箱后共有积分：" << b << endl << endl;
					if (b >= 166) {
						cout << "【稀有皮肤】" << endl;
					} else {
						cout << "啥都没中！输入任意数字第三次开箱：" << endl;
						cin >> a;
						/*把第三次开箱的分数累加到score中*/
						b += rand() % 41 + 60;
						cout << "本次开箱后共有积分：" << b << endl << endl;
						if (b >= 238) {
							cout << "【灵兽】" << endl;
						} else {
							cout << "【谢谢光临！】" << endl;
						}
					}
				}
			} else {
				cout << "密码错误" << endl;
			}
		} else if (q1 == "4") {
			jisuan();
		} else if (q1 == "5") {
			bool _bool = true;
			while (_bool == true) {
				int guany = 0;
				boss1 = 10001, boss2 = 59999, boss3 = 109999, me = 6000, jin_bi = 2000, fuzi = 0, hui = 0, gong = 0, jian = 0, shou = 0;
				fuzi1 = 0, hui1 = 0, gong1 = 0, jian1 = 0, shou1 = 0;
				guan();
				string x, z;
				cout << "				欢迎来到决斗战场" << endl;
				cout << "				回复任意开始游戏" << endl;
				cin >> x;
				clear();
				cout << "				boss1发现了你，这么办?" << endl;
				cout << "				1.逃命2.决斗（建议选择2）" << endl;
				cin >> x;
				if (x == "2") {
					int y;
					cout << "			boss1已经跟你正面相对了！小心" << endl;
					cout << "			boss1的血量为" << boss1 << "小心，你的血量只有" << me << endl;
					cout << "			你现在可以花钱买武器，买斧子扣1，需1000金币" << endl;
					cout << "			买回旋镖扣2，需1600金币" << endl;
					cout << "			买弓箭扣3，需2000金币" << endl;
					cout << "			买剑??扣4，需5000金币" << endl;
					cout << "			买手榴弹扣5，需8000金币买3个" << endl;
					cout << "			买血量扣6,需1金币换1血量" << endl;
					cout << "			你现在有" << jin_bi << "金币" << endl;
					cin >> y;
					if (y == 1 || y == 2 || y == 3 || y == 4 || y == 5) {
						mai(y);
					} else if (y == 6) {
						cout << "			你要补多少血量" << endl;
						cin >> y;
						bu_xue(y);
						cout << "			要不要买武器" << endl;
						cin >> x;
						if (x == "要") {
							wuqi(1);
						} else {
							cout << "				默认不要" << endl;
						}
					} else {
						cout << "				不要武器就算了！angry!!!" << endl;
					}
					cout << "				现有金币" << jin_bi << "请好好珍稀" << endl;
					cout << "				比赛正式开始" << endl;
					while (boss1 > 0) {
						shi_yong(1);
						cout << "				扣1攻击，扣2换武器" << endl;
						cin >> y;
						if (y == 1) {
							guany = gongji(1);
							if (guany == 1) {
								break;
							}
						} else if (y == 2) {
							zhuang(1);
						}
						cout << "				要不要买武器" << endl;
						cin >> z;
						if (z == "要") {
							wuqi(1);
						} else {
							cout << "				默认不要" << endl;
						}
					}
					if (me <= 0) {
						break;
					}
					me += 5000;
					cout << "			boss1 out!,boss2发现了你,它的血量为" << boss2 << "你的血量为" << me << endl;
					jin_bi += 500;
					cout << "				你现在的金币" << jin_bi << endl;
					while (boss2 > 0) {
						shi_yong(1);
						cout << "				扣1攻击，扣2换武器" << endl;
						cin >> y;
						if (y == 1) {
							guany = gongji(1);
							if (guany == 1) {
								break;
							}
						} else if (y == 2) {
							zhuang(1);
						}
						cout << "				要不要买武器" << endl;
						cin >> z;
						if (z == "要") {
							wuqi(1);
						} else {
							cout << "				默认不要" << endl;
						}
					}
					if (me <= 0) {
						break;
					}
					me += 10000;
					cout << "				boss2 out!,boss3发现了你,它的血量为" << boss3 << "你的血量为" << me << endl;
					jin_bi += 5000;
					cout << "			你现在的金币" << jin_bi << endl;
					while (boss3 > 0) {
						shi_yong(1);
						cout << "				扣1攻击，扣2换武器" << endl;
						cin >> z;
						if (z == "1") {
							guany = gongji(1);
							if (guany == 1) {
								break;
							}
						} else if (y == 2) {
							zhuang(1);
						}
						cout << "				要不要买武器" << endl;
						cin >> z;
						if (z == "要") {
							wuqi(1);
						} else {
							cout << "				默认不要" << endl;
						}
					}
					if (me <= 0) {
						break;
					}
					cout << "			三条boss全部击杀,游戏成功！！！谢谢游玩" << endl;
					cout << endl;
					cout << "				要再玩一次吗(要/不要)" << endl;
					cin >> z;
					if (z == "要") {
						cout << endl;
						cout << "--------------------------------------------" << endl;
						cout << endl;
						_bool = false;
					} else {
						_bool = false;
						cout << "				谢谢" << endl;
					}
				}
				if (x == "1") {
					cout << "一点骨气也没有，狗吧你！！！" << endl;
					_bool = false;
				}
			}
		} else if (q1 == "6") {
			Bool = false;
		} else if (q1 == "114" && f_666 == 1) {
			srand((unsigned int)time(NULL));
			cout << "                             扫雷游戏" << endl;
			cout << "                               启动！" << endl;
			cout << "                          Warning!!有bug!" << endl;
			cout << "                          请问是否启动(是/否)" << endl;
			cin >> String;
			if (String != "是")
				break;
			cout << "                         几*几的格子" << endl;
			int n, m;
			cin >> n >> m;

			printl(n, m);
		} else if (q1 == "7") {
			srand((unsigned int)time(NULL));
			cout << "                    粥启动！" << endl;
			bool flag = 1, s6 = 0, s328 = 0, s68 = 0, s648 = 0, s128 = 0, my = 0, nsp = 0, ysp = 0, yd = 0;
			while (flag == true) {
				cout << "   原石:" << st << "   合成玉" << yu << endl;
				cout << "   1.原石商店  2.兑换合成玉  3.抽卡  4.白嫖600玉  5.合成  6.已有干员  7.退出" << endl;
				cin >> q1;
				if (q1 == "1") {
					clear();
					cout << "              原石商店" << endl;
					Sleep(1000);
					if (s6 == 0) {
						cout << "          首充6元,一发十连,需要扣5" << endl << endl;
					}
					if (s128 == 0) {
						cout << "          5星定向筛选,新人只需128元!需要扣6" << endl << endl;
					}
					if (s68 == 0) {
						cout << "          首充68元,50颗原石,需要扣7" << endl << endl;
					}
					if (s328 == 0) {
						cout << "          水陈的钱包328元,4发十连,需要扣8" << endl << endl;
					}
					if (s648 == 0) {
						cout << "          首充648元,10发十连,需要扣9" << endl << endl;
					}
					if (my == 0) {
						cout << "          不知是谁留下的钱包,总之1288元,700颗原石+1发十连,需要扣10" << endl << endl;
					}
					if (s648 == 0) {
						cout << "          每年648元,1张万能碎片,需要扣11" << endl << endl;
					}
					cin >> q1;
					if (q1 == "5" && s6 == 0) {
						if (qingbao >= 6) {
							s6 = 1;
							qingbao -= 6;
							yu += 6000;
							cout << "             购买成功!" << endl;
						} else {
							cout << "            没钱!!!" << endl;
						}
					} else if (q1 == "6" && s128 == 0) {
						if (qingbao >= 128) {
							s128 = 1;
							qingbao -= 128;
							zx5++;;
							cout << "             购买成功!" << endl;
						} else {
							cout << "            没钱!!!" << endl;
						}
					} else if (q1 == "7" && s68 == 0) {
						if (qingbao >= 68) {
							s68 = 1;
							qingbao -= 68;
							st += 50;
							cout << "             购买成功!" << endl;
						} else {
							cout << "            没钱!!!" << endl;
						}
					} else if (q1 == "8" && s328 == 0) {
						if (qingbao >= 328) {
							s328 = 1;
							qingbao -= 328;
							yu += 24000;
							cout << "             购买成功!" << endl;
						} else {
							cout << "            没钱!!!" << endl;
						}
					} else if (q1 == "9" && s648 == 0) {
						if (qingbao >= 648) {
							s648 = 1;
							qingbao -= 648;
							yu += 60000;
							cout << "             购买成功!" << endl;
						} else {
							cout << "            没钱!!!" << endl;
						}
					} else if (q1 == "10" && my == 0) {
						if (qingbao >= 1288) {
							my = 1;
							qingbao -= 1288;
							yu += 6000;
							st += 700;
							cout << "             购买成功!" << endl;
						} else {
							cout << "            没钱!!!" << endl;
						}
					} else if (q1 == "11" && nsp == 0) {
						if (qingbao >= 648) {
							nsp = 1;
							qingbao -= 648;
							wnsp++;
							cout << "             购买成功!" << endl;
						} else {
							cout << "            没钱!!!" << endl;
						}
					}
				} else if (q1 == "3") {
					cout << "                   今日池子为联动池" << endl;
					while (true) {
						cout << "          1.看倍率  2.已抽卡数  3.单抽  4.十连抽  5.一百连抽  6.退出" << endl;
						cin >> q1;
						if (q1 == "5" /*&& yu >= 60000*/) {
							cntc += 100;
							yu -= 60000;
							int cur = 0;
							for (int i = 1; i <= 100; i++) {
								int a1 = rand() % 2;
								if (a1 == 1) {
									int b1 = rand() % 2;
									if (b1 == 1) {
										int c1 = rand() % 2;
										if (c1 == 0) {
											int d1 = rand() % 10;
											if (d1 == 0) {
												int e1 = rand() % 150;
												if (e1 == 1 || e1 == 50) {
													cout << "\033[1;33;43m" << "   " << "\033[0m";
													nt++;
												} else if (e1 == 4) {
													cout << "\033[1;33;43m" << "   " << "\033[0m";
													yd2++;
												} else {
													int e1 = rand() % 45 + 1;
													if (e1 == 1 || e1 == 2 || e1 == 4 || e1 == 8 || e1 == 10 || e1 == 12 || e1 == 24 || e1 == 25 || e1 == 29 || e1 == 38) {
														int f1 = rand() % 2;
														if (f1 == 0) {
															ls++;
														} else {
															lg++;
														}
														cout << "\033[1;36;43m" << " 五 " << "\033[0m";

													}
												}
											}
										}
									}
								} else {
									int b1 = rand() % 2;
									if (b1 == 1) {
										fen++;
										cout << "\033[1;37;47m" << "   " << "\033[0m";
									} else {
										as++;
										cout << "\033[1;37;47m" << "   " << "\033[0m";
									}
								}
								cur++;
								if (cur == 10) {
									cout << endl;
									cur = 0;
								}
							}
						} else if (q1 == "2") {
							cout << "                      已抽" << cntc << "抽" << endl;
						}
						if (q1 == "4" && yu >= 6000) {
							cntc += 10;
							yu -= 6000;
							for (int i = 1; i <= 10; i++) {
								int a1 = rand() % 2;
								if (a1 == 1) {
									int b1 = rand() % 2;
									if (b1 == 1) {
										int c1 = rand() % 2;
										if (c1 == 0) {
											int d1 = rand() % 10;
											if (d1 == 0) {
												int e1 = rand() % 900;
												if (e1 == 1 || e1 == 50) {
													cout << "\033[1;33;43m" << "   " << "\033[0m";
													nt++;
												} else if (e1 == 8) {
													wnsp++;
													cout << "\033[1;30;40m" << "   " << "\033[0m";
												} else if (e1 == 4) {
													cout << "\033[1;33;43m" << "   " << "\033[0m";
													yd++;
												} else {
													int e1 = rand() % 45 + 1;
													if (e1 == 1 || e1 == 2 || e1 == 4 || e1 == 8 || e1 == 10 || e1 == 12 || e1 == 24 || e1 == 25 || e1 == 29 || e1 == 38) {
														int f1 = rand() % 2;
														if (f1 == 0) {
															ls++;
														} else {
															lg++;
														}
														cout << "\033[1;36;43m" << " 五 " << "\033[0m";

													}
												}
											}
										}
									}
								} else {
									int b1 = rand() % 2;
									if (b1 == 1) {
										fen++;
										cout << "\033[1;37;47m" << "   " << "\033[0m";
									} else {
										as++;
										cout << "\033[1;37;47m" << "   " << "\033[0m";
									}
								}
							}
							cout << endl;
						} else if (q1 == "6") {
							break;
						}
					}
				} else if (q1 == "4") {
					clear();
					yu += 600;
					cout << "                    白嫖成功" << endl;
				} else if (q1 == "7") {
					flag = 0;
				} else if (q1 == "6") {
					cout << "你有" << yd << "个夜刀" << nt << "个能天使" << ls << "个雷蛇" << lg << "拉普兰德" << fen << "个芬" << as <<
					     "个安赛尔" << endl;
				} else if (q1 == "5") {
					clear();
					cout << "                          欢迎来合成干员" << endl;
					cout << "                 你有" << wnsp << "张万能碎片," << ydsp << "张夜刀碎片" << sp_6 << "张六星碎片" << endl;
					cout << "                  你要转换什么" << endl;
					cout << "1.万能碎片转夜刀碎片  2.万能碎片转6星碎片  3.十张六星碎片转能天使  4.十张夜刀碎片换1张夜刀" << endl;
					cin >> q1;
					if (q1 == "1") {
						if (wnsp > 0) {
							cout << "                 你要转几张" << endl;
							string s;
							cin >> s;
							int cur = 1;
							bool tf = 1;
							int twnsp = wnsp, tydsp = ydsp;
							for (int i = s.size() - 1; i >= 0; i--) {
								if (s[i] >= '0' && s[i] <= '9' && (s[i] - '0') * cur <= wnsp) {
									ydsp += ((s[i] - '0') * cur);
									wnsp -= (s[i] - '0') * cur;
								} else
									tf = 0;
								cur *= 10;
							}
							if (tf == 0) {
								wnsp = twnsp;
								ydsp = tydsp;
								cout << "           没有这么多万能碎片" << endl;
							} else {
								cout << "                    兑换成功" << endl;
							}
						} else {
							cout << "                 你没有万能碎片" << endl;
						}
					} else if (q1 == "2") {
						cout << "                 你要转几张" << endl;
						string s;
						cin >> s;
						int cur = 1;
						bool tf = 1;
						int tsp_6 = sp_6, twnsp = wnsp;
						for (int i = s.size() - 1; i >= 0; i--) {
							if (s[i] >= '0' && s[i] <= '9' && (s[i] - '0') * cur <= wnsp) {
								sp_6 += ((s[i] - '0') * cur);
								wnsp -= (s[i] - '0') * cur;
							} else
								tf = 0;
							cur *= 10;
						}
						if (tf == 0) {
							sp_6 = tsp_6;
							wnsp = twnsp;
							cout << "           没有这么多万能碎片" << endl;
						} else {
							cout << "                    兑换成功" << endl;
						}
					} else if (q1 == "4") {
						if (ydsp > 9) {
							cout << "                   转换成功" << endl;
							ydsp -= 10;
							yd++;
						}
					}
				} else if (q1 == "2") {
					clear();
					cout << "         你现有" << st << "原石，要兑换几颗原石" << endl;
					string s;
					cin >> s;
					int cur = 1;
					bool tf = 1;
					int tst = st, tyu = yu;
					for (int i = s.size() - 1; i >= 0; i--) {
						if (s[i] >= '0' && s[i] <= '9' && (s[i] - '0') * cur <= st) {
							st -= ((s[i] - '0') * cur);
							yu += (s[i] - '0') * cur * 180;
						} else
							tf = 0;
						cur *= 10;
					}
					if (tf == 0) {
						st = tst;
						yu = tyu;
						cout << "            没有这么多原石" << endl;
					}
				}
			}
		} else if (f_666 == 1 && q1 == "8") {
			box_intro();
			int winner = box_game();
			box_showWinner(winner);
		}

	}
}

void caipiao() {
	int a, b, c, e, f, g;
	cout << "			一张彩票5元钱，快来买，有机会中十万元大奖" << endl;
	Sleep(2000);
	if (qingbao >= 5) {
		cout << "				以开启免密支付..." << endl;
		Sleep(1000);
		qingbao -= 5;
		cout << "				知副饱到账5元..." << endl;
		Sleep(1000);
		cout << "			来个简单的 三位数 1~3每位数 空格隔开" << endl;
		cout << "				中奖了返10万元" << endl;
		cin >> e >> f >> g;
		cout << "				本期简单彩票号码是" << endl;
		Sleep(5000);
		a = rand() % 3 + 1;
		cout << a << endl;
		Sleep(3000);
		b = rand() % 3 + 1;
		cout << b << endl;
		Sleep(3000);
		c = rand() % 3 + 1;
		cout << c << endl;
		if (e == a && f == b && g == c) {
			cout << "				恭喜你中奖了！" << endl;
			qingbao += 100000;
		} else {
			cout << "				乌~~未中奖^`^" << endl;
		}
	} else {
		cout << "				你没钱，一个小视频5元，去看看吧" << endl;
	}
}

void gouwu() {
	clear();
	cout << "			   你要下载: 1.京东PC版 还是 2.淘宝PC版" << endl;
	cin >> String;
	if (String == "1") {
		clear();
		if (xia_jing == 0) {
			for (int i = 10; i >= 1; i--) {
				cout << "			正在帮你下载中(预计还需" << i << "秒...)" << endl;
				Sleep(1000);
				clear();
			}
			cout << "				下载成功" << endl;
			xia_jing += 1;
		}
		cout << "	------------------------------------------" << endl;
		cout << "				[	商品	 ]" << endl;
		cout << "				[      /-/-      ]" << endl;
		cout << "				[   1.鞋子类     ]" << endl;
		cout << "				[   2.衣服       ]" << endl;
		cout << "				[   3.冷冻食品   ]" << endl;
		cout << "				[   4.退出	 ]" << endl;
		cout << "				[ ---- o--o ---- ]" << endl;
		cout << "				[     ......     ]" << endl;
		cout << "				[                ]" << endl;
		cout << "	-------------------------------------------" << endl;
		cin >> String;
		if (String == "1") {
			cout << "	1.篮球鞋  2.足球鞋  3.高跟鞋  4.普通鞋  5.草鞋" << endl;
			cin >> String;
			if (String == "1") {
				int a;
				cout << "				几双？" << endl;
				cin >> a;
				cout << "				是否立即购买(是/否)" << endl;
				cin >> String;
				if (String == "是") {
					cout << "			正在计算价格----------" << endl;
					Sleep(3000);
					bool b = true;
					while (b == true) {
						cout << "				请支付" << a * 688 << "元钱" << endl;
						cout << "				默认使用知副饱" << endl;
						int temp;
						cin >> temp;
						if (temp >= a * 688 && qingbao >= temp) {
							cout << "				知副饱到账" << temp << "元" << endl;
							qingbao -= temp;
							b = 0;
						} else if (temp >= a * 688 && qingbao < temp) {
							cout << "				你没钱，去刷刷短视频吧" << endl;
							b = 0;
						} else {
							cout << "				给钱！！！" << endl;
						}
					}
				} else {
					cout << "				不买就算了" << endl;
				}
			} else if (String == "2") {
				cout << "				很抱歉，库存不足" << endl;
			} else if (String == "3") {
				cout << "				库存仅剩一双！" << endl;
				cout << "				是否购买(是/否)" << endl;
				cin >> String;
				if (String == "是") {
					bool b = true;
					while (b == true) {
						cout << "			请支付6888元，今日直降3000，只需3888元" << endl;
						cout << "				默认使用知副饱" << endl;
						int temp;
						cin >> temp;
						if (temp >= 3888 && qingbao >= temp) {
							cout << "				知副饱到账" << temp << "元" << endl;
							qingbao -= temp;
							b = 0;
						} else if (temp >= 3888 && qingbao < temp) {
							cout << "				你没钱，去刷刷短视频吧" << endl;
							b = 0;
						} else {
							cout << "				给钱！！！" << endl;
						}
					}
				}
			} else if (String == "4") {
				cout << "普通鞋仅剩8双!!!快抢" << endl;
				cout << "网";
				Sleep(2000);
				cout << "不行";
				Sleep(2000);
				cout << "呀";
				Sleep(1000);
				cout << "!" << endl;
				cout << "				很抱歉，库存已无" << endl;
			} else if (String == "5") {
				cout << "				这年头，谁还穿草鞋啊?" << endl;
			} else {
				cout << "				你是在挑战我的极限吗?" << endl;
			}
		} else if (String == "2") {
			cout << "				很抱歉，暂时没有衣服一大类" << endl;
		} else  if (String == "3") {
			cout << "			1.冷冻面包  2.冷冻深海鱼  3.冷冻加热即食食品" << endl;
			cin >> String;
			if (String == "1") {
				cout << "				今日面包已抢完，明天再来吧" << endl;
			} else if (String == "2") {
				cout << "			1.鲳鱼 2.带鱼 3.乌贼鱼 4.盲盒鱼(直降20元)" << endl;
				cin >> String;
				if (String == "1") { //鲳鱼
					cout << "				今日还剩三条鱼(每人限购1条/60元)" << endl;
					cout << "				是否购买(是/否)" << endl;
					cin >> String;
					if (String == "是") {
						bool b = true;
						while (b == true) {
							cout << "				请支付60元，默认知副饱" << endl;
							int temp;
							cin >> temp;
							if (temp >= 60 && qingbao >= temp) {
								cout << "				知副饱到账" << temp << "元" << endl;
								qingbao -= temp;
								b = 0;
							} else if (temp >= 60 && qingbao < temp) {
								cout << "				你没钱，去刷刷短视频吧" << endl;
								b = 0;
							} else {
								cout << "				给钱！！！" << endl;
							}
						}
					}
				} else if (String == "2") { //带鱼
					int a;
					cout << "				今日带鱼30元/2条" << endl;
					cout << "				你要买几对?" << endl;
					cin >> a;
					a *= 30;
					cout << "		正在帮你计算价格，请稍后---------------" << endl;
					Sleep(2000);
					bool b = true;
					while (b == true) {
						cout << "				请支付" << a << "元" << endl;
						int temp;
						cin >> temp;
						if (temp >= a && qingbao >= temp) {
							cout << "				知副饱到账" << temp << "元" << endl;
							b = false;
							qingbao -= temp;
						} else if (temp >= a && qingbao < temp) {
							cout << "				你没钱，去刷刷短视频吧" << endl;
							b = false;
						} else {
							cout << "				给钱！！！" << endl;
						}
					}
				} else if (String == "3" || String == "4") {
					cout << "			今日乌贼鱼已售完，明天再来吧" << endl;
				} else {
					cout << "				想纠我BUG,没门" << endl;
				}
			} else if (String == "3") {
				cout << "			不给你们这些黑心商家给顾客吃这么烂的东西！！！" << endl;
			}
		}
	} else if (String == "2") {
		cout << "			很抱歉，本万能软件未录用淘宝PC版" << endl;
		cout << "				可以下载京东PC版" << endl;
	}
}

void begin() {
	Sleep(1000);
	clear();
	bool flag = true;
	cout << "		    -----------欢 迎 来 到 万 能 软 件-------------" << endl;
	cout << "				    你现在想干什么?	" << endl;
	while (flag == 1) { //万能软件
		cout << "1.购物 2.玩游戏 3.退出 4.生活小助手  5.计算机  6.选择题不知怎么选  7.刷小视频  8.查看  9.彩票  10.氪金" <<
		     endl;
		cin >> String;
		if (String == "4") {
			mei();
		} else if (String == "7") { //刷小视频
			little_photo();
		} else if (String == "3") {
			cout << "				来都来了，还退出什么呀(Ctrl 4)" << endl;
			Sleep(3000);
			break;
		} else if (String == "10") { //氪金
			clear();
			cout << "           现在仅需999元，即可开通万能软件年度大会员" << endl;
			int a;
			cin >> a;
			if (a >= 999 && qingbao >= 999) {
				qingbao -= a;
				Sleep(1000);
				cout << "                            开通成功" << endl;
				f_666 = 1;
			} else {
				cout << "        狗吧你!!!" << endl;
			}
		} else if (String == "1") { //购物
			gouwu();
		} else if (String == "6") { //选择题怎么选
			cout << "是3个选项还是4个（数字）" << endl;
			cin >> String;
			if (String == "3") {
				int a = rand() % 3;
				if (a == 0) {
					cout << "					  额..." << endl;
					Sleep(2000);
					cout << "a" << endl;
				} else if (a == 1) {
					cout << "					  额..." << endl;
					Sleep(2000);
					cout << "b" << endl;
				} else if (a == 2) {
					cout << "						额..." << endl;
					Sleep(2000);
					cout << "c" << endl;
				}
			} else if (String == "4") {
				int a = rand() % 4;
				if (a == 0) {
					cout << "					  额..." << endl;
					Sleep(2000);
					cout << "a" << endl;
				} else if (a == 1) {
					cout << "					  额..." << endl;
					Sleep(2000);
					cout << "b" << endl;
				} else if (a == 2) {
					cout << "					  额..." << endl;
					Sleep(2000);
					cout << "c" << endl;
				} else if (a == 3) {
					cout << "						额..." << endl;
					Sleep(2000);
					cout << "d" << endl;
				}
			} else {
				cout << "		你觉得我不会多做一手准备吗(笑话)" << endl;
			}
		} else if (String == "8") { //查看
			see();
		} else if (String == "9") { //彩票
			caipiao();
		} else if (String == "2") { //游戏盒子
			gamebox();
		}
	}
}

void printl(int n, int m) {
	srand((unsigned int)time(NULL));
	int cnt = 0;
	cout << "                             正在加载中..." << endl;
	for (int i = 1; i <= n; i++)
		for (int j = 1; j <= m; j++) {
			int a = rand() % 8;
			if (a == 1) {
				sl_a[i][j] = 1;
				cnt++;
			} else
				sl_a[i][j] = 0;
			sl_mb[i][j] = '*';
		}
	for (int i = 1; i <= n; i++) {
		for (int j = 1; j <= m; j++) {
			if (sl_a[i][j] == 1) {
				for (int k = i - 1; k <= i + 1; k++) {
					for (int y = j - 1; y <= j + 1; y++) {
						if (sl_a[k][y] != 1) {
							sl_c[k][y]++;
						}
					}
				}
			}
		}
	}
	bool flag = 1;
	int cur = 0;
	mban(n, m);
	while (flag == 1) {
		cur++;
		for (int i = 1; i <= n; i++) {
			for (int j = 1; j <= m; j++) {
				if (sl_mb[i][j] != -1)
					cout << sl_mb[i][j] << " ";
				else
					cout << sl_c[i][j] << " ";
			}
			cout << endl;
		}
		cout << "      '*'为未知是否为雷" << endl;
		cout << "        请输入你所要看的坐标,如(1,1)" << endl;
		int x, y;
		cin >> x >> y;
		sl_mb[x][y] = -1;
		if (sl_a[x][y] == 1) {
			flag = 0;
			cout << "恭喜你成功输掉了游戏" << endl;
		} else if (n * m - cnt == cur) {
			flag = 0;
			cout << "恭喜你通过了扫雷游戏！" << endl;
		}
		if (sl_c[x][y] == 0 && sl_a[x][y] == 0) {
			for (int i = x - 1; i <= x + 1; i++) {
				for (int j = y - 1; j <= y + 1; j++) {
					sl_mb[i][j] = -1;
				}
			}
		}
	}
	cout << "游戏面板---" << endl;
	mban(n, m);
}

void mban(int n, int m) {
	for (int i = 1; i <= n; i++) {
		for (int j = 1; j <= m; j++) {
			if (sl_a[i][j] == 1)
				cout << "* ";
			else
				cout << sl_c[i][j] << " ";
		}
		cout << endl;
	}
}

bool cmp(node a, node b) {
	return a.h > b.h;
}

void box_showbox_square() {
	// 计算当前网格被谁的盒子占据
	int a[5][5] = {}; // 当前网格上的盒子 + - 表示角色 数字表示箱子大小
	for (int i = 1; i <= 3; i++) {
		for (int j = 1; j <= 3; j++) {
			if (box_l[i][j] != 0) {
				a[i][j] = box_l[i][j] * 3;
			} else if (box_m[i][j] != 0) {
				a[i][j] = box_m[i][j] * 2;
			} else {
				a[i][j] = box_s[i][j] * 1;
			}
		}
	}
	// 绘制网格
	string border[4] = { "", "┌────┬────┬────┐", "├────┼────┼────┤", "├────┼────┼────┤" };
	for (int i = 1; i <= 3; i++) {
		cout << border[i] << endl;
		cout << "│";
		for (int j = 1; j <= 3; j++) {
			if (a[i][j] > 0) {
				cout << " +" << a[i][j] << " │";
			} else if (a[i][j] < 0) {
				cout << " " << a[i][j] << " │";
			} else {
				cout << "    │";
			}
		}
		cout << endl;
	}
	cout << "└────┴────┴────┘" << endl;
}
int findWinner() {
	// 计算当前网格被谁占据，只记录角色-1 +1，不记录箱子大小
	int b[5][5] = {}; // 当前网格被谁占据
	for (int i = 1; i <= 3; i++) {
		for (int j = 1; j <= 3; j++) {
			if (box_l[i][j] != 0) {
				b[i][j] = box_l[i][j];
			} else if (box_m[i][j] != 0) {
				b[i][j] = box_m[i][j];
			} else {
				b[i][j] = box_s[i][j];
			}
		}
	}
	// 检查行
	for (int i = 1; i <= 3; i++) {
		int box_subox_m = 0;
		for (int j = 1; j <= 3; j++) {
			box_subox_m += b[i][j];
		}
		if (box_subox_m == 3)
			return 1;
		if (box_subox_m == -3)
			return -1;
	}
	// 检查列
	for (int j = 1; j <= 3; j++) {
		int box_subox_m = 0;
		for (int i = 1; i <= 3; i++) {
			box_subox_m += b[i][j];
		}
		if (box_subox_m == 3)
			return 1;
		if (box_subox_m == -3)
			return -1;
	}
	// 检查对角线
	int diag1 = 0, diag2 = 0;
	for (int i = 1; i <= 3; i++) {
		diag1 += b[i][i];
		diag2 += b[i][4 - i];
	}
	if (diag1 == 3 || diag2 == 3)
		return 1;
	if (diag1 == -3 || diag2 == -3)
		return -1;
	return 0;
}
bool box_pbox_lace(int x, int y, int size, int q) {
	if (x < 1 || x > 3 || y < 1 || y > 3)
		return false;
	if (q == -1) {
		printf("电脑试图在(%d,%d)下%d\n", x, y, size);
	}
	if (size == 3) {
		if (box_l[x][y] != 0)
			return false;
		box_l[x][y] = q;
	}
	if (size == 2) {
		if (box_l[x][y] != 0 || box_m[x][y] != 0)
			return false;
		box_m[x][y] = q;
	}
	if (size == 1) {
		if (box_l[x][y] != 0 || box_m[x][y] != 0 || box_s[x][y] != 0)
			return false;
		box_s[x][y] = q;
	}
	return true;
}
bool box_move(int x1, int y1, int x2, int y2, int size, int q) {
	if (x1 < 1 || x1 > 3 || y1 < 1 || y1 > 3)
		return false;
	if (x2 < 1 || x2 > 3 || y2 < 1 || y2 > 3)
		return false;
	if (q == -1) {
		cout << "电脑试图将(" << x1 << "," << y1 << ")" << "转移到(" << x2 << "," << y2 << ")" << endl;
	}
	if (size == 3) {
		if (box_l[x1][y1] != q || box_l[x2][y2] != 0)
			return false;
		box_l[x1][y1] = 0;
		box_l[x2][y2] = q;
	}
	if (size == 2) {
		if (box_l[x1][y1] != 0 || box_l[x2][y2] != 0 || box_m[x1][y1] != q || box_m[x2][y2] != 0)
			return false;
		box_m[x1][y1] = 0;
		box_m[x2][y2] = q;
	}
	if (size == 1) {
		if (box_l[x1][y1] != 0 || box_l[x2][y2] != 0 || box_m[x1][y1] != 0 || box_m[x2][y2] != 0 || box_s[x1][y1] != q
		        || box_s[x2][y2] != 0)
			return false;
		box_s[x1][y1] = 0;
		box_s[x2][y2] = q;
	}
	return true;
}
int winning(int x) {
	// 计算当前网格被谁占据
	for (int i = 1; i <= 3; i++) {
		for (int j = 1; j <= 3; j++) {
			if (box_l[i][j] != 0)
				box_p[i][j] = box_l[i][j];
			else if (box_m[i][j] != 0)
				box_p[i][j] = box_m[i][j];
			else
				box_p[i][j] = box_s[i][j];
		}
	}
	int a = 0;
	if (x == 1)
		a = 1;
	for (int i = 1; i <= 3; i++)
		box_px[a][i] = box_py[a][i] = 0;
	bx[a] = by[a] = 0;
	for (int i = 1; i <= 3; i++)
		for (int j = 1; j <= 3; j++)
			if (box_p[i][j] == x) {
				box_px[a][i]++;
				box_py[a][j]++;
				if (i == j)
					bx[a]++;
				if (i + j == 4)
					by[a]++;
			}
	int box_s = bx[a] >= 2;
	box_s += by[a] >= 2;
	for (int i = 1; i <= 3; i++) {
		box_s += box_px[a][i] >= 2;
		box_s += box_py[a][i] >= 2;
	}
	return box_s;
}
int fill(int x, int y, int size) { //电脑至少用size大小的棋子占领x行y列
	cout << "电脑试图在" << x << ',' << y << "下棋" << endl;
	if (box_l[x][y] == 1)
		return 0;
	for (int k = size; k <= 3; k++)
		if (box_p1[k] && box_pbox_lace(x, y, k, -1)) {
			box_p1[k]--;
			return 1;
		}
	if (box_s[x][y] == 1)
		size = max(size, 2);
	if (box_m[x][y] == 1)
		size = 3;
	if (size == 1) {
		for (int i = 1; i <= 3; i++)
			for (int j = 1; j <= 3; j++)
				if (box_s[i][j] == -1 && box_move(i, j, x, y, 1, -1)) {
					if (winning(1) == 0)
						return 1;
					box_move(x, y, i, j, 1, -1);
				}
	}
	if (size <= 2) {
		for (int i = 1; i <= 3; i++)
			for (int j = 1; j <= 3; j++)
				if (box_m[i][j] == -1 && box_move(i, j, x, y, 2, -1)) {
					if (winning(1) == 0)
						return 1;
					box_move(x, y, i, j, 2, -1);
				}
	}
	if (size <= 3) {
		for (int i = 1; i <= 3; i++)
			for (int j = 1; j <= 3; j++)
				if (box_l[i][j] == -1 && box_move(i, j, x, y, 3, -1)) {
					if (winning(1) == 0)
						return 1;
					box_move(x, y, i, j, 3, -1);
				}
	}
	return 0;
}
void computer() {
	if (winning(-1) > 0) {
		cout << "电脑认为自己快赢了" << endl;
		for (int i = 1; i <= 3; i++)
			for (int j = 1; j <= 3; j++)
				if (box_p[i][j] != -1 && (box_px[0][i] == 2 || box_py[0][j] == 2)) {
					if (fill(i, j, 1))
						return;
				}
		if (bx[0] == 2) {
			for (int i = 1; i <= 3; i++)
				if (box_p[i][i] != -1 && fill(i, i, 1))
					return;
		}
		if (by[0] == 2) {
			for (int i = 1; i <= 3; i++)
				if (box_p[i][4 - i] != -1 && fill(i, 4 - i, 1))
					return;
		}
	}
	if (winning(1) > 0) {
		cout << "电脑认为你快赢了" << endl;
		int cnt = 0;
		for (int i = 1; i <= 3; i++)
			for (int j = 1; j <= 3; j++) {
				int w = (box_px[1][i] == 2) + (box_py[1][j] == 2);
				if (i == j && bx[1] == 2)
					w++;
				if (i + j == 4 && by[1] == 2)
					w++;
				if (w == 0)
					continue;
				aa[++cnt].x = i;
				aa[cnt].y = j;
				aa[cnt].h = w;
			}
		sort(aa + 1, aa + cnt + 1, cmp);
		for (int i = 1; i <= cnt; i++) {
			printf("电脑想在%d,%d阻止你,w=%d\n", aa[i].x, aa[i].y, aa[i].h);
			if (box_p2[3] > 0) {
				if (fill(aa[i].x, aa[i].y, 3))
					return;
				else
					continue;
			}
			if (box_p2[2] > 0) {
				if (fill(aa[i].x, aa[i].y, 2))
					return;
				else
					continue;
			}
			if (box_p2[1] > 0) {
				if (fill(aa[i].x, aa[i].y, 1))
					return;
				else
					continue;
			}
		}
	}
	if (box_l[2][2] == 0) {
		cout << "电脑决定占领中心" << endl;
		if (box_p1[3] > 0) {
			box_p1[3]--;
			box_pbox_lace(2, 2, 3, -1);
			return;
		}
		if (fill(2, 2, 3))
			return;
		if (fill(2, 2, 2))
			return;
	}
	int cnt = 0;
	for (int i = 1; i <= 3; i++)
		for (int j = 1; j <= 3; j++)
			if (box_p[i][j] != -1) {
				if (box_l[i][j] > 0)
					continue;
				int t = box_p[i][j];
				box_p[i][j] = -1;
				aa[++cnt].x = i;
				aa[cnt].y = j;
				aa[cnt].h = winning(-1);
				box_p[i][j] = t;
			}
	sort(aa + 1, aa + cnt + 1, cmp);
	int j = 1;
	for (int i = 1; i <= cnt; i++) {
		if (aa[i].h == aa[j].h)
			j = i;
		else
			break;
	}
	j = rand() % j + 1;
	if (fill(aa[j].x, aa[j].y, 1))
		return;
	for (int i = 1; i <= cnt; i++)
		if (fill(aa[i].x, aa[i].y, 1))
			return;
}
int box_game() {
	srand((unsigned int)time(NULL));
	while (true) {
		cout << "请选择 ① 放一个盒子 还是 ② 移动一个盒子 (输入数字)" << endl;
		int choice, size, x1, y1, x2, y2;
		cin >> choice;
		if (choice == 1) {
			cout << "你现在有盒子 小:" << box_p2[1] << " 中:" << box_p2[2] << " 大:" << box_p2[3] << endl;
			cout << "请选择盒子的大小 ① 小 ② 中 ③ 大 (输入数字)" << endl;
			cin >> size;
			if (size > 3 || size < 1) {
				cout << "非法输入" << endl;
				continue;
			}
			if (box_p2[size] <= 0) {
				cout << "盒子没了" << endl;
				continue;
			}
			cout << "请输入放置的位置(输入两个整数，如：1 1)" << endl;
			cin >> x1 >> y1;
			if (!box_pbox_lace(x1, y1, size, 1)) {
				cout << "放置失败" << endl;
				continue;
			}
			cout << "放置成功" << endl;
			box_p2[size]--;
			box_showbox_square();
		} else if (choice == 2) {
			cout << "请输入移走的位置(输入两个整数，如：1 1)" << endl;
			cin >> x1 >> y1;
			cout << "请输入放置的位置(输入两个整数，如：1 1)" << endl;
			cin >> x2 >> y2;
			// 判断移动的箱子
			if (box_l[x1][y1] == 1)
				size = 3;
			else if (box_m[x1][y1] == 1 && box_l[x1][y1] == 0)
				size = 2;
			else if (box_s[x1][y1] == 1 && box_l[x1][y1] == 0 && box_m[x1][y1] == 0)
				size = 1;
			else {
				cout << "没有可以移动的盒子" << endl;
				continue;
			}
			if (!box_move(x1, y1, x2, y2, size, 1)) {
				cout << "移动失败" << endl;
				continue;
			}
			box_showbox_square();
		} else
			continue;
		int winner = findWinner();
		if (winner != 0) {
			return winner;
		}
		computer();
		cout << "电脑下棋" << endl;
		box_showbox_square();
		winner = findWinner();
		if (winner != 0) {
			return winner;
		}
	}
}
void box_showWinner(int winner) {
	if (winner == 1) {
		cout << "玩家胜利" << endl;
	} else {
		cout << "电脑胜利" << endl;
	}
}
void box_intro() {
	cout << "欢迎来到盒子游戏" << endl;
	Sleep(1000);
	if (f_666 == 1) {
		cout << "尊贵的vip,自动帮您使用云下载，您无需等待" << endl;
		Sleep(1000);
	} else if (xia_box == 0) {
		clear();
		cout << "正在";
		Sleep(1000);
		cout << "加载";
		Sleep(1000);
		cout << "中";
		Sleep(1000);
		cout << ".";
		Sleep(1000);
		cout << ".";
		Sleep(1000);
		cout << ".";
		Sleep(1000);
		clear();
		cout << "正在加载中";
		Sleep(1000);
		cout << ".";
		Sleep(1000);
		cout << ".";
		Sleep(1000);
		cout << ".";
		Sleep(1000);
		clear();
		cout << "加载成功";
		Sleep(1000);
		xia_box = 1;
	}
	clear();
	cout << "正在帮您初始化" << endl;
	box_p1[1] = 2, box_p1[2] = 2, box_p1[3] = 2;
	box_p2[1] = 2, box_p2[2] = 2, box_p2[3] = 2;
	for (int i = 0; i <= 4; i++) {
		for (int j = 0; j <= 4; j++) {
			box_s[i][j] = 0;
			box_m[i][j] = 0;
			box_l[i][j] = 0;
			box_p[i][j] = 0;
		}
	}
	for (int i = 0; i <= 2; i++) {
		for (int j = 0; j <= 4; j++) {
			box_px[i][j] = 0, box_py[i][j] = 0;
		}
	}
	for (int i = 0; i <= 14; i++) {
		aa[i].x = 0;
		aa[i].y = 0;
		aa[i].h = 0;
	}
	Sleep(2000);
	clear();
	cout << "玩家和电脑各拥有大中小号盒子各2个，" << endl;
	cout << "双方轮流在九宫格的棋盘中放入或移动一个盒子，每个盒子都可盖住任意比他小的盒子。" << endl;
	cout << "若你方团队的盒子率先在棋盘上连成一条直线则挑战成功，否则挑战失败。" << endl;
	cout << "用正数表示玩家的盒子，负数表示电脑的盒子，1、2、3表示盒子的小中大。" << endl;
	cout << "开始吧！" << endl;
	box_showbox_square();
}
//int getch() {
// 不回显的输入
//struct termios nts, ots;
// 得到当前终端(0表示标准输入)的设置
//if (tcgetattr(0, &ots) < 0)
//return EOF;
// 设置终端为Raw原始模式，该模式下所有的输入数据以字节为单位被处理
//nts = ots;
//cfmakeraw(&nts);
// 设置上更改之后的设置
//if (tcsetattr(0, TCsANOW, &nts) < 0)
//return EOF;
// 设置还原成老的模式
//int cr;
//cr = getchar();
//if (tcsetattr(0, TCsANOW, &ots) < 0)
//return EOF;
//return cr;
//}