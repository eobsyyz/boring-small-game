/************************
	���������������_max
	���ߣ�Сǿ
	���ڣ�2023��12��3��
	˵�����˳�����©�������½�
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

int sl_a[105][105], sl_c[105][105], box_s[5][5]/*�����ϵ�С���� 0 �� -1 ���� +1 ��� ��ͬ*/,
    box_m[5][5]/*�����ϵ��к���*/, box_l[5][5]/*�����ϵĴ����*/, box_p1[4] = { 0, 2, 2, 2 },
            box_p2[4] = { 0, 2, 2, 2 }/*���Ժ���ҵĢ�С���Т۴�и���*/, box_p[5][5]/*��ǰ����˭ռ��*/,
                        box_px[2][5], box_py[2][5];
struct node {
	int x, y, h;
} aa[15];
char sl_mb[105][105];
bool f_666 = 0;
bool cmp(node a, node b), box_pbox_lace(int x, int y, int size, int q)/*��ɫq��size���ӷŵ�x��y�е�λ��*/,
     box_move(int x1, int y1, int x2, int y2, int size, int q)/*��ɫq��size���Ӵ�x1��y1��ת�Ƶ�x2��y2��*/;
int boss1 = 10000, boss2 = 59999, boss3 = 109999, me = 6000, jin_bi = 2000, fuzi = 0, hui = 0, gong = 0, jian = 0,
    shou = 0, yanzh = 0, xia_jing = 0, xia_youxi = 0, xia_mei = 0, fuzi1 = 0, hui1 = 0, gong1 = 0, jian1 = 0, shou1 = 0,
    power2, st = 0, yu = 114, wnsp = 0, ydsp = 0, sp_6 = 0, yd = 0, nt = 0, lg = 0, ls = 0, hj = 0, txs = 0, fen = 0,
            as = 0, zx5 = 0, cntc = 0, xia_box = 0;
string mima_youxi = "XiaoQiang2021", mima, String;
void launch()/*������*/, guan()/*��ʼ*/, zhuang(int x)/*ת������*/, mai(int y)/*������*/,
     shi_yong(int x)/*���ڵ�����*/, dl()/*��¼*/, gamebox()/*��Ϸ����*/, number(int n)/*��������ַ�n*/,
     aircraft(int n)/*������n��*/, mei()/*ÿ��*/, jisuan()/*������Ϸ*/, caipiao()/*��Ʊ*/, wuqi(int x)/*������ʽ*/,
     bu_xue(int y)/*��Ѫ*/, little_photo()/*С��Ƶ*/, see()/*�鿴*/, gouwu()/*����*/, begin()/*������*/, mban(int n, int m)
     /*ɨ�׵Ĵ�*/, box_intro(), box_showWinner(int winner), computer()
     , box_showbox_square()/*�����ǰ����*/, printl(int n, int m);
int bx[3], by[3];
int gongji(int x)/*����*/, fill(int x, int y, int size)/*����������size��С������ռ��x��y��*/,
    findWinner()/*���С��С��Խ�����ͣ�����Ϊ3�����ʤ������1������Ϊ-3�����ʤ������-1�����򷵻�0������Ϸ*/,
    winning(), box_game();
int main() {

	srand(time(0));
	//��¼

	_114;
	// ��ʼ��Ϸ

	_114514;

	return 0;
}

void see() {
	cout << "				  ���Ե�" << endl;
	Sleep(2000);
	cout << "		   ������Ҫ�鿴ʲô?  1.֪����Ǯ�����  2.���������" << endl;
	cin >> String;
	if (String == "1") {
		printf("				       %.1f\n", qingbao);
	} else if (String == "2") {
		cout << "				������";
		if (xia_jing > 0) {
			cout << "����PC��  ";
		}
		if (xia_youxi > 0) {
			cout << "��Ϸ����  ";
		}
		if (xia_mei > 0) {
			cout << "����С����  ";
		}
		cout << endl;
	} else {
		cout << "		������Ҳ������һ��׼����(Ц��)" << endl;
	}
}

void little_photo() {  //С��Ƶ
	cout << "			�����ǻ�������ֳ��������Ǹ���Сǿ���տ�ֱ��" << endl;
	cout << "					����ת̨��..." << endl;
	Sleep(2000);
	cout << "					���Ժ�" << endl;
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
	cout << "�������ɹ���" << endl;
	Sleep(2000);
	clear();
	cout << "------------------" << endl;
	cout << "[  �ѿ������Ƶ  ]" << endl;
	cout << "[                ]" << endl;
	cout << "[     /-/-       ]" << endl;
	cout << "[    ��o  o��    ]" << endl;
	cout << "[    ��__/��     ]" << endl;
	cout << "[ ---- o--o ---- ]" << endl;
	cout << "[     HAPPY ??    ]" << endl;
	cout << "[��ԪǮ��Ч������]" << endl;
	cout << "[     ......     ]" << endl;
	cout << "[                ]" << endl;
	cout << "------------------" << endl;
	cout << "[��ϲ�����Ԫһ��]" << endl;
	cout << "[֪����������Ԫһ��]" << endl;
	cout << "------------------" << endl;
	cout << "					�ظ��������" << endl;
	cin >> String;
	qingbao += 5.1;
	Sleep(2000);
	clear();
}

void mei() {
	clear();
	cout << "				���ڼ�����-----" << endl;
	if (xia_mei == 0) {
		for (int i = 18; i >= 12; i--) {
			cout << "			���ڰ���������(Ԥ�ƻ���" << i << "��...)" << endl;
			Sleep(1000);
			clear();

		}
		cout << "			���ڰ���������(Ԥ�ƻ���7��...)" << endl;
		Sleep(1000);
		clear();
		for (int i = 6; i >= 3; i--) {
			cout << "			���ڰ���������(Ԥ�ƻ���" << i << "��...)" << endl;
			Sleep(1000);
			clear();
		}
		cout << "			���ڰ���������(Ԥ�ƻ���1��...)" << endl;
		Sleep(1000);
		clear();
		cout << "				          ���سɹ�" << endl;
		xia_mei += 1;
		Sleep(2000);
	}
	cout << "                                    ���߻��ڿ�����..." << endl;
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
	cout << "���ǹ���Ա��?(��/��)" << endl;
	cin >> a;
	if (a == "��") {
		cout << "����Ա����?" << endl;
		cin >> a;
		if (a == mima_youxi) {
			cout << "??" << endl;
			Sleep(1000);
			clear();
			cout << "�Ƿ����boss��ֵ?(��/��)" << endl;
			cin >> a;
			if (a == "��") {
				int b;
				cout << "boss1��Ѫ��?" << endl;
				cin >> b;
				boss1 = b;
				cout << "boss2��Ѫ��?" << endl;
				cin >> b;
				boss2 = b;
				cout << "boss3��Ѫ��?" << endl;
				cin >> b;
				boss3 = b;
				cout << "���ĳɹ�,�Ƿ�����Ϸ(�粻������Ϸ,����ֵ�༭��Ч)(��/��)" << endl;
				cin >> a;
				if (a == "��") {
					cout << "";
				} else {
					cout << "Ĭ�ϲ�������Ϸ����ֵ�༭ɾ��" << endl;
					exit(0);
				}
			} else {
				cout << "�Ժ�Ҫ�����������" << endl;
			}
		} else {
			cout << "��װ����Ա�������㣡����" << endl;
		}
	} else {
		cout << "�õ�?? ,���Ծ� (�䨌 `?" << endl;
	}
}

void mai(int y) {     //������
	if (y == 1) {
		if (jin_bi >= 1000) {
			cout << "��װ������" << endl;
			fuzi = 1;
			hui = 0, gong = 0, jian = 0, shou = 0;
			fuzi1 = 1;
			jin_bi -= 1000;
		} else {
			cout << "��Ҳ���" << endl;
			cout << "~~" << endl;
		}
	}
	if (y == 2) {
		if (jin_bi >= 1600) {
			cout << "��װ��������" << endl;
			fuzi = 0;
			hui = 1, gong = 0, jian = 0, shou = 0;
			hui1 = 1;
			jin_bi -= 1600;
		} else {
			cout << "��Ҳ���" << endl;
			cout << "~~" << endl;
		}

	}
	if (y == 3) {
		if (jin_bi >= 2000) {
			cout << "��װ������" << endl;
			fuzi = 0;
			hui = 0, gong = 1, jian = 0, shou = 0;
			gong1 = 1;
			jin_bi -= 2000;
		} else {
			cout << "��Ҳ���" << endl;
			cout << "~~" << endl;
		}

	}
	if (y == 4) {
		if (jin_bi >= 5000) {
			cout << "��װ����??" << endl;
			fuzi = 0;
			hui = 0, gong = 0, jian = 1, shou = 0;
			jian1 = 1;
			jin_bi -= 5000;
		} else {
			cout << "��Ҳ���" << endl;
			cout << "~~" << endl;
		}

	}
	if (y == 5) {
		if (jin_bi >= 8000) {
			cout << "��װ������" << endl;
			fuzi = 0;
			hui = 0, gong = 0, jian = 0, shou = 1;
			shou1 += 3;
			jin_bi -= 8000;
		} else {
			cout << "��Ҳ���" << endl;
			cout << "~~" << endl;
		}

	}

}

void bu_xue(int y) {  //��Ѫ
	if (y <= jin_bi) {
		jin_bi -= y;
		me += y;
		cout << "��Ѫ�ɹ�������л" << endl;
	} else {
		cout << "��Ѫʧ�ܣ���ûǮ" << endl;
	}
}

void wuqi(int x) {
	int y;
	cout << "�����ڿ��Ի�Ǯ�����������ӿ�1����1000���" << endl;
	cout << "������ڿ�2����1600���" << endl;
	cout << "�򹭼���3����2000���" << endl;
	cout << "��??��4����5000���" << endl;
	cout << "�����񵯿�5����8000�����3��" << endl;
	cout << "��Ѫ����6,��1��һ�1Ѫ��" << endl;
	cout << "��������" << jin_bi << "���" << endl;
	cin >> y;
	if (y == 1 || y == 2 || y == 3 || y == 4 || y == 5) {
		mai(y);
	} else if (y == 6) {
		cout << "������Ѫ" << endl;
		cin >> y;
		bu_xue(y);
	}
}

void shi_yong(int x) { //���ڵ�����
	cout << "������ʹ�õ�������";
	if (fuzi == 1) {
		cout << "����" << endl;
	} else if (hui == 1) {
		cout << "������" << endl;
	} else if (gong == 1) {
		cout << "����" << endl;
	} else if (jian == 1) {
		cout << "��??" << endl;
	} else if (shou == 1) {
		cout << "����" << endl;
	} else {
		cout << "ȭͷ" << endl;
	}
}

int gongji(int x) {   //����boss�ͷ���
	if (fuzi == 1) {
		int shanghai = rand() % 150 + 100;
		jin_bi += 366;
		if (boss1 > 0) {
			int boss1s = rand() % 200 + 500;
			boss1 -= shanghai;
			me -= boss1s;
			cout << "���ø��ӹ�����boss,����˺�" << shanghai << ",boss1Ѫ��" << boss1 << ",boss1��������,����˺�" << boss1s <<
			     ",�ҵ�Ѫ��" << me << endl;
		} else if (boss1 < 1 && boss2 > 0) {
			int boss2s = rand() % 500 + 1100;
			boss2 -= shanghai;
			me -= boss2s;
			cout << "���ø��ӹ�����boss,����˺�" << shanghai << ",boss2Ѫ��" << boss2 << ",boss2��������,����˺�" << boss2s <<
			     ",�ҵ�Ѫ��" << me << endl;
		} else if (boss2 < 1 && boss3 > 0) {
			int boss3s = rand() % 1000 + 2456;
			boss3 -= shanghai;
			me -= boss3s;
			cout << "���ø��ӹ�����boss3,����˺�" << shanghai << ",boss3Ѫ��" << boss3 << ",boss3��������,����˺�" << boss3s <<
			     ",�ҵ�Ѫ��" << me << endl;
		}
	} else if (hui == 1) {
		int shanghai = rand() % 150 + 400;
		jin_bi += 888;
		if (boss1 > 0) {
			int boss1s = rand() % 200 + 500;
			boss1 -= shanghai;
			me -= boss1s;
			cout << "���û����ڹ�����boss,����˺�" << shanghai << ",boss1Ѫ��" << boss1 << ",boss1��������,����˺�" << boss1s <<
			     ",�ҵ�Ѫ��" << me << endl;
		} else if (boss1 < 1 && boss2 > 0) {
			int boss2s = rand() % 500 + 1100;
			boss2 -= shanghai;
			me -= boss2s;
			cout << "���û����ڹ�����boss2,����˺�" << shanghai << ",boss2Ѫ��" << boss2 << ",boss2��������,����˺�" << boss2s <<
			     ",�ҵ�Ѫ��" << me << endl;
		} else if (boss2 < 1 && boss3 > 0) {
			int boss3s = rand() % 1000 + 2000;
			boss3 -= shanghai;
			me -= boss3s;
			cout << "���û����ڹ�����boss3,����˺�" << shanghai << ",boss3Ѫ��" << boss3 << ",boss3��������,����˺�" << boss3s <<
			     ",�ҵ�Ѫ��" << me << endl;
		}
	} else if (gong == 1) {
		jin_bi += 1567;
		int shanghai = rand() % 200 + 901;
		if (boss1 > 0) {
			int boss1s = rand() % 200 + 500;
			boss1 -= shanghai;
			me -= boss1s;
			cout << "���ù���������boss,����˺�" << shanghai << ",boss1Ѫ��" << boss1 << ",boss1��������,����˺�" << boss1s <<
			     ",�ҵ�Ѫ��" << me << endl;
		} else if (boss1 < 1 && boss2 > 0) {
			int boss2s = rand() % 500 + 1100;
			boss2 -= shanghai;
			me -= boss2s;
			cout << "���ù���������boss,����˺�" << shanghai << ",boss2Ѫ��" << boss2 << ",boss2��������,����˺�" << boss2s <<
			     ",�ҵ�Ѫ��" << me << endl;
		} else if (boss2 < 1 && boss3 > 0) {
			int boss3s = rand() % 1000 + 2409;
			boss3 -= shanghai;
			me -= boss3s;
			cout << "���ù���������boss3,����˺�" << shanghai << ",boss3Ѫ��" << boss3 << ",boss3��������,����˺�" << boss3s <<
			     ",�ҵ�Ѫ��" << me << endl;
		}
	} else if (jian == 1) {
		int shanghai = rand() % 300 + 3309;
		jin_bi += 1913;
		if (boss1 > 0) {
			int boss1s = rand() % 200 + 300;
			boss1 -= shanghai;
			me -= boss1s;
			cout << "���ý�??������boss,����˺�" << shanghai << ",boss1Ѫ��" << boss1 << ",boss1��������,����˺�" << boss1s <<
			     ",�ҵ�Ѫ��" << me << endl;
		} else if (boss1 < 1 && boss2 > 0) {
			int boss2s = rand() % 500 + 1200;
			boss2 -= shanghai;
			me -= boss2s;
			cout << "���ý�??������boss,����˺�" << shanghai << ",boss2Ѫ��" << boss2 << ",boss2��������,����˺�" << boss2s <<
			     ",�ҵ�Ѫ��" << me << endl;
		} else if (boss2 < 1 && boss3 > 0) {
			int boss3s = rand() % 1000 + 2398;
			boss3 -= shanghai;
			me -= boss3s;
			cout << "���ý�??������boss3,����˺�" << shanghai << ",boss3Ѫ��" << boss3 << ",boss3��������,����˺�" << boss3s <<
			     ",�ҵ�Ѫ��" << me << endl;
		}
	} else if (shou == 1) {
		if (shou1 == 0) {
			cout << "������" << endl;
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
				cout << "�������񵯹�����boss,����˺�" << shanghai << ",boss1Ѫ��" << boss1 << ",boss1��������,����˺�" << boss1s <<
				     ",�ҵ�Ѫ��" << me << endl;
			} else if (boss1 < 1 && boss2 > 0) {
				int boss2s = rand() % 450 + 1099;
				boss2 -= shanghai;
				me -= boss2s;
				cout << "�������񵯹�����boss,����˺�" << shanghai << ",boss2Ѫ��" << boss2 << ",boss2��������,����˺�" << boss2s <<
				     ",�ҵ�Ѫ��" << me << endl;
			} else if (boss2 < 1 && boss3 > 0) {
				int boss3s = rand() % 500 + 2000;
				boss3 -= shanghai;
				me -= boss3s;
				cout << "�������񵯹�����boss3,����˺�" << shanghai << ",boss3Ѫ��" << boss3 << ",boss3��������,����˺�" << boss3s <<
				     ",�ҵ�Ѫ��" << me << endl;
			}
		}

	} else {
		int shanghai = rand() % 5 + 20;
		jin_bi += 100000;
		if (boss1 > 0) {
			int boss1s = rand() % 200 + 500;
			boss1 -= shanghai;
			me -= boss1s;
			cout << "����ȭͷ������boss,����˺�" << shanghai << ",boss1Ѫ��" << boss1 << ",boss1��������,����˺�" << boss1s <<
			     ",�ҵ�Ѫ��" << me << endl;
		} else if (boss1 < 1 && boss2 > 0) {
			int boss2s = rand() % 500 + 1100;
			boss2 -= shanghai;
			me -= boss2s;
			cout << "����ȭͷ������boss2,����˺�" << shanghai << ",boss2Ѫ��" << boss2 << ",boss2��������,����˺�" << boss2s <<
			     ",�ҵ�Ѫ��" << me << endl;
		} else if (boss2 < 1 && boss3 > 0) {
			int boss3s = rand() % 1000 + 2100;
			boss3 -= shanghai;
			me -= boss3s;
			cout << "����ȭͷ������boss3,����˺�" << shanghai << ",boss3Ѫ��" << boss3 << ",boss3��������,����˺�" << boss3s <<
			     ",�ҵ�Ѫ��" << me << endl;
		}
	}
	if (me <= 0) {
		cout << "������������Ϸʧ��" << endl;
		return 1;
	}
	return 0;
}

void zhuang(int x) {  //ת������
	if (fuzi == 1) {
		if (hui1 == 1) {
			fuzi = 0, hui = 1;
			cout << "װ��������" << endl;
		} else if (gong1 == 1) {
			fuzi = 0, gong = 1;
			cout << "װ������" << endl;
		} else if (jian1 == 1) {
			fuzi = 0, jian = 1;
			cout << "װ����??" << endl;
		} else if (shou1 >= 1) {
			fuzi = 0, shou = 1;
			cout << "װ������" << endl;
		} else {
			cout << "��װ��ת��" << endl;
		}
	} else if (hui == 1) {
		if (gong1 == 1) {
			hui = 0, gong = 1;
			cout << "װ������" << endl;
		} else if (jian1 == 1) {
			hui = 0, jian = 1;
			cout << "װ����??" << endl;
		} else if (shou1 >= 1) {
			hui = 0, shou = 1;
			cout << "װ������" << endl;
		} else if (fuzi1 == 1) {
			hui = 0, fuzi = 1;
			cout << "װ������" << endl;
		} else {
			cout << "��װ��ת��" << endl;
		}
	} else if (gong == 1) {
		if (jian1 == 1) {
			gong = 0, jian = 1;
			cout << "װ����??" << endl;
		} else if (shou1 >= 1) {
			gong = 0, shou = 1;
			cout << "װ������" << endl;
		} else if (fuzi1 == 1) {
			gong = 0, fuzi = 1;
			cout << "װ������" << endl;
		} else if (hui1 == 1) {
			gong = 0, hui = 1;
			cout << "װ��������" << endl;
		} else {
			cout << "��װ��ת��" << endl;
		}
	} else if (jian == 1) {
		if (shou1 >= 1) {
			jian = 0, shou = 1;
			cout << "װ������" << endl;
		} else if (fuzi1 == 1) {
			jian = 0, fuzi = 1;
			cout << "װ������" << endl;
		} else if (hui1 == 1) {
			jian = 0, hui = 1;
			cout << "װ��������" << endl;
		} else if (gong1 == 1) {
			jian = 0, gong = 1;
			cout << "װ������" << endl;
		} else {
			cout << "��װ��ת��" << endl;
		}
	} else if (shou == 1) {
		if (fuzi1 == 1) {
			shou = 0, fuzi = 1;
			cout << "װ������" << endl;
		} else if (hui1 == 1) {
			shou = 0, hui = 1;
			cout << "װ��������" << endl;
		} else if (gong1 == 1) {
			shou = 0, gong = 1;
			cout << "װ������" << endl;
		} else if (jian1 == 1) {
			shou = 0, jian = 1;
			cout << "װ����??" << endl;
		} else if (shou1 >= 1) {
			shou = 0, shou = 1;
			cout << "װ������" << endl;
		} else {
			cout << "��װ��ת��" << endl;
		}
	}
}

void jisuan() {
	srand(time(0));
	int tsum = 0;
	int maxt = 0;
	int mint = 100;
	int wrongCount = 0, rightCount = 0;
	for (int i = 1; i <= 10; i++) { //��д��ѭ������
		int a = rand() % 10 + 1;
		int b = rand() % 10 + 1;
		int op = rand() % 4 + 1;
		int res;
		if (op == 1) { // �ӷ�
			cout << a << " + " << b << " = " << endl;
			res = a + b;
		}
		if (op == 2) { // ����
			if (a < b) {
				int c = a;
				a = b;
				b = c;
			}
			cout << a << " - " << b << " = " << endl;
			res = a - b;
		}
		if (op == 3) { // �˷�
			cout << a << " * " << b << " = " << endl;
			res = a * b;
		}
		if (op == 4) { // ����
			cout << a *b << " / " << a << " = " << endl;
			res = b;
		}
		int ans, beg = time(0); // ��ʼʱ��
		cout << "��������ļ�������" << endl;
		cin >> ans;
		if (ans == res) {
			cout << "(�ޣ���)V ����ˣ�" << endl;
			rightCount++;
		} else {
			cout << "�ѩҩn�ѩ� ����ˣ�" << endl;
			wrongCount++;
		}
		cout << endl;
		int end = time(0); // ����ʱ��
		tsum += end - beg;
		maxt = max(maxt, end - beg);
		mint = min(mint, end - beg);
		cout << "������ʱ��" << end - beg << " ��" << endl << endl;
	}
	cout << "(������)~* ��Ϸ������" << endl;
	cout << "�ܼƣ�" << rightCount * 10 << " ��" << endl;
	cout << "�ԣ�" << rightCount << " ��" << endl;
	cout << "��" << wrongCount << " ��" << endl;
	cout << "����ʱ��" << tsum << " ��" << endl;
	cout << "ƽ����ʱ��" << tsum / 10.0 << " ��" << endl;
	cout << "������ʱ��" << maxt << " ��" << endl;
	cout << "�����ʱ��" << mint << " ��" << endl;
}

void dl() {
	srand(time(0));
	cout << "   				              ^" << endl;
	cout << "			��ӭ�����������4.0max|" << endl;
	Sleep(1000);
	cout << "	��ѡ���¼��ʽ��----------------------------------" << endl;
	Sleep(1000);
	cout << "		1.�����˺ţ�ֱ�ӵ�¼   2.ע���˺�   3.�����¼" << endl;
	string s;
	cin >> s;
	if (s == "1") {
		cout << "				���Ե�~~" << endl;
		Sleep(2000);
		cout << "				OK~~" << endl;
		cout << "				�˺����ּ�����^^" << endl;
		cin >> s;
		if (s == "eo����ԭ����") {
			Sleep(1000);
			cout << "				���Ե�~~" << endl;
			Sleep(2000);
			cout << "				�˺ŵ�¼�ɹ�" << endl;
			cout << "				����������" << endl;
			cin >> s;
			if (s == "XiaoQiang2021") {
				cout << "				û������";
				qingbao += 100000000;
				cout << "��";
				cout << "��" << endl;
				cout << "				�������ں���" << endl;
				Sleep(5000);
				st += 3500;
				cout << "				��½�ɹ�" << endl;
			} else {
				cout << "				�����ð�䣬������" << endl;
				exit(0);
			}
		} else if (s == "e0����ԭũ��") {
			Sleep(1000);
			cout << "				���Ե�~~" << endl;
			Sleep(2000);
			cout << "				�˺ŵ�¼�ɹ�" << endl;
			cout << "				����������" << endl;
			cin >> s;
			if (s == "don'tknow") {
				cout << "				û������";
				qingbao += 10000;
				cout << "��";
				st += 3500;
				cout << "��" << endl;
				cout << "				�������ں���" << endl;
				Sleep(5000);
				cout << "				��¼�ɹ�" << endl;
			} else {
				cout << "				�����ð�䣬������" << endl;
				exit(0);
			}
		} else {
			cout << "				�����ð�䣬������" << endl;
			exit(0);
		}
	} else if (s == "2") {
		bool flag = true;
		while (flag == 1) {
			cout << "		ѡ��ע�᷽ʽ-------------------------------" << endl;
			cout << "			1.��֤��   2.΢�ŵ�¼   3.QQ��¼" << endl;
			cin >> s;
			if (s == "3") {
				cout << "				�ݲ�֧�ִ˵�¼��ʽ" << endl;
				Sleep(1000);
				cout << "				���Ժ�" << endl;
				Sleep(1000);
			} else if (s == "2") {
				cout << "				��������΢��PC..." << endl;
				Sleep(1000);
			} else if (s == "1") {
				cout << "				�ֻ���֤�뻹�ǿ��Ե�¼��" << endl;
				cout << "				���������ֻ�����(11λ��)" << endl;
				cin >> mima;
				if (mima.length() != 11) {
					cout << "				���󣡣�������ʮһλ����" << endl;
					Sleep(2000);
				} else {
					flag = 0;
					int temp = rand() % 100000;
					cout << "				��֤���ѷ���(10����Ӧ�����յ�)" << endl;
					Sleep(rand() % 10 + 1);
					cout << "		d=====(������*) ��֤��" << temp << "(ע��" << 20 << "������Ч����Ҫй¶,������Ǵ��˺�����)" << endl;
					cin >> yanzh;
					if (yanzh == temp) {
						cout << "				���ס���˺ţ�����" << endl;
					} else {
						cout << "				��֤�����" << endl;
						cout << "				���Ե�" << endl;
						flag = 1;
						Sleep(2000);
					}
				}
			}
		}
	} else if (s == "4") {
		cout << "                           ����vip,�ڲ��¼" << endl;
		cout << "				��¼�ɹ�" << endl;
		f_666 = 1;
	} else {
		cout << "				�����¼�ͱ�����" << endl;
		exit(0);
	}
}

void gamebox() {
	Sleep(1000);
	clear();
	cout << "			����������Ϸ����(����)-------------------" << endl;
	Sleep(1000);
	if (f_666 == 1) {
		cout << "����vip,������ȴ�����" << endl;
		xia_youxi = 1;
		Sleep(1000);
	} else if (xia_youxi == 0) {
		for (int i = 25; i >= 1; i--) {
			cout << "			����������Ϸ����(����)-------------------" << endl;
			cout << "			���ڰ���������(Ԥ�ƻ���" << i << "��...)" << endl;
			Sleep(1000);
			clear();
		}
		cout << "				���سɹ�" << endl;
		xia_youxi += 1;
	}
	bool Bool = true;
	int q2 = time(0);
	int d = rand() % 2 + 1;
	int f = 0;
	string q1;
	while (Bool == true) {
		cout << "��ӭ������Ϸ���ӣ���Ҫ��ʲô��1.������Ϸ2.ʯͷ������3.ŷ����Ϸ4.100���ڼӼ��˳���5.����ս��6.�˳�" << endl;
		if (f_666 == 1)
			cout << "                        114.ɨ��(�ڲ���Ϸ��bug)  7.è������  8.������Ϸ" << endl;
		cin >> q1;
		if (q1 == "1") {
			int n, number, sum;
			bool flag = true;
			string str;
			srand((unsigned int)time(NULL));
			number = rand() % 20;
			cout << "׼����������ϷҪ��ʼ��" << endl;
			cout << "�ظ���no����׼��һ�£��ظ����⿪ʼ��Ϸ..." << endl;
			cin >> str;
			if (str == "no" || str == "No" || str == "nO" || str == "NO") {
				cout << "��׼��һ�£���ӭ�´�������Ӵ~" << endl;
			} else {
				cout << endl << "|��Ϸ��ʼ|" << endl << "�����м��λ����أ�" << endl;
				cin >> sum;
				cout << "������ﲩʿ�������������(����" << sum << "�λ���Ŷ~)��";
				while (sum) {
					cin >> n;
					if (number > n) {
						cout << "�� ��С�� ��" << endl;
					} else if (number < n) {
						cout << "�� �´��� ��" << endl;
					} else {
						cout << "�¶���~�������" << endl;
						cout << endl << "��ϲ��ɹ���ɣ�( ?? �� ?? )y" << endl;
						cout << "����һ�ΰɣ��ظ������˻�no������׼��һ�£��ظ����⿪ʼ��Ϸ..." << endl;
						cin >> str;
						flag = false;
						break;
					}
					sum--;
					if (sum)
						cout << endl << "�����²¿�����������ﲩʿ����Ǹ����֣�" << endl;
				}
				if (flag) {
					cout << endl << "����������Ŷ~���ﲩʿ���������������: " << number << endl;
					cout << "����һ�ΰɣ��ظ������˻�no������׼��һ�£��ظ����⿪ʼ��Ϸ..." << endl;
					cin >> str;
				}
			}
		} else if (q1 == "2") {
			string str;
			string c;
			cout << "1.���ҷ�2.�����ҷ�3.�ٺٺٷ�4.�㲻֪���ķ�5.�˳�^,^" << endl;
			cin >> c;
			if (c == "1") {
				cout << "0��ʾʯͷ��1��ʾ������2��ʾ��" << endl;
				cin >> str;
				if (str == "0") {
					cout << "�ҳ�2,��" << endl;
					cout << "������������" << endl;

				} else if (str == "1") {
					cout << "�ҳ�0,ʯͷ" << endl;
					cout << "������������" << endl;

				} else if (str == "2") {
					cout << "�ҳ�1,����" << endl;
					cout << "������������" << endl;

				} else {
					cout << "�����bug��û�ţ�" << endl;
				}
			} else if (c == "2") {
				cout << "0��ʾʯͷ��1��ʾ������2��ʾ��" << endl;
				cin >> str;
				if (str == "0") {
					cout << "�ҳ�1,����" << endl;
					cout << "����������" << endl;

				} else if (str == "1") {
					cout << "�ҳ�2,��" << endl;
					cout << "����������" << endl;

				} else if (str == "2") {
					cout << "�ҳ�0,ʯͷ" << endl;
					cout << "����������" << endl;

				} else {
					cout << "�����bug��û�ţ�" << endl;
				}
			} else if (c == "3") {
				cout << "0��ʾʯͷ��1��ʾ������2��ʾ��" << endl;
				cin >> str;
				if (str == "0") {
					cout << "�ҳ�0,ʯͷ" << endl;
					cout << "�ף�����ƽ����" << endl;

				} else if (str == "1") {
					cout << "�ҳ�1,����" << endl;
					cout << "�ף�����ƽ����" << endl;

				} else if (str == "2") {
					cout << "�ҳ�2,��" << endl;
					cout << "�ף�����ƽ����" << endl;

				} else {
					cout << "�����bug��û�ţ�" << endl;
				}
			} else if (c == "4") {
				cout << "0��ʾʯͷ��1��ʾ������2��ʾ��" << endl;
				int b = rand() % 3;
				cin >> str;
				if (b == 0 && str == "0" || b == 1 && str == "1" || b == 2 && str == "2") {
					if (str == "0") {
						cout << "�ҳ�0,ʯͷ" << endl;
						cout << "�ף�����ƽ����" << endl;

					} else if (str == "1") {
						cout << "�ҳ�1,����" << endl;
						cout << "�ף�����ƽ����" << endl;

					} else if (str == "2") {
						cout << "�ҳ�2,��" << endl;
						cout << "�ף�����ƽ����" << endl;

					} else {
						cout << "�����bug��û�ţ�" << endl;
					}
				} else if (b == 0 && str == "1" || b == 1 && str == "2" || b == 2 && str == "0") {
					if (str == "0") {
						cout << "�ҳ�2,��" << endl;
						cout << "������������" << endl;

					} else if (str == "1") {
						cout << "�ҳ�0,ʯͷ" << endl;
						cout << "������������" << endl;

					} else if (str == "2") {
						cout << "�ҳ�1,����" << endl;
						cout << "������������" << endl;

					} else {
						cout << "�����bug��û�ţ�" << endl;
					}
				} else if (str == "0" && b == 1 || str == "1" && b == 2 || str == "2" && b == 0) {
					if (str == "0") {
						cout << "�ҳ�1,����" << endl;
						cout << "����������" << endl;

					} else if (str == "1") {
						cout << "�ҳ�2,��" << endl;
						cout << "����������" << endl;

					} else if (str == "2") {
						cout << "�ҳ�0,ʯͷ" << endl;
						cout << "����������" << endl;

					} else {
						cout << "�����bug��û�ţ�" << endl;
					}
				} else {
					cout << "�����bug��û�ţ�" << endl;
				}
			} else if (c == "5") {
				cout << "���ð�" << endl;
			} else {
				cout << "�����������" << endl;
			}
		} else if (q1 == "3") {
			srand(time(0));

			cout << "�����뱦������------";
			int d = 0;
			int a, tot = 150, score = 0; //tot�ǳ�ʼ���֣�score�����ջ���
			cout << "������1~5������1������" << endl;
			cin >> a;
			if (a == rand() % 5 + 1) {
				cout << "��ϲ����˱��䣡";
				score += 300;
				cout << "����������һ�����䣬�һ�������300���֣���������Ƿ�ᳬ��175���֣���һ�α�������100���֣�ÿ�α������ֻ��������10~150���֣�������������3��"
				     << endl;
			} else {
				cout << "��������ٸ���һ�λ���ɣ�";
				cin >> a;

				if (a == rand() % 5 + 1) {
					cout << "���ڵȵ��㣬����û������";
					score += 150;
					cout << "����������һ�����䣬�һ�������150���֣���������Ƿ�ᳬ��175���֣���һ�α�������100���֣�ÿ�α������ֻ��������10~150���֣�������������3��"
					     << endl;
				} else {
					cout << "�ݰ������ţ�";
				}
			}
			if (score >= 100) {
				score -= 100;    //��������100����
				cout << "�����������ֿ�ʼ�ɣ�" << endl;
				cin >> a;
				int res = rand() % 141 + 10; //�������10~150�Ļ���
				score += res;            //����һ�ֲ����Ļ����ۼӵ�score��
				cout << "^_^���ؽ�����Ŀǰ����Ϊ��" << score << endl;
				if (score >= 100) {
					score -= 100;
					cout << "��������׬�˲��ٻ��֣���" << endl << endl;
					cout << "�����������ּ�����" << endl;
					cin >> a;

					res = rand() % 141 + 10;
					score += res;
					cout << "^_^���ؽ�����Ŀǰ����Ϊ��" << score << endl;
					if (score >= 100) {
						score -= 100;
						cout << "����Ȼ���ߵ����һ�أ���" << endl << endl;
						cout << "���ɣ�������������һ��ʤ����" << endl;
						cin >> a;

						res = rand() % 141 + 10;
						score += res;
						cout << "^_^���ؽ�����Ŀǰ����Ϊ��" << score << endl << endl;
					} else {
						cout << "��Ŷ���Ѿ�����������" << endl;
					}
				} else {
					cout << "����Ե�ټ�������" << endl;
				}
			}
			cout << "���λ������Ŀǰ����Ϊ��" << score << endl;

			if (score > tot) { //�ж����ջ����Ƿ���ڿ�ʼ����
				cout << "��You're a lucky guy!��";
			} else {
				cout << "��What happened?��";
			}
			if (score >= 175) {
				cout << "��ϲ�㣬��Ϊŷŷŷŷŷ�ʣ��������ؽ������ֽ�һ����������";
				int  b;
				cout << "�����������ֵ�һ�ο��䣺" << endl;
				cin >> a;
				b = rand() % 41 + 60;
				cout << "���λ�û��֣�" << b << endl << endl;
				if (b >= 90) {
					cout << "��ŷ��װ����" << endl;
				} else {
					cout << "ɶ��û�У������������ֵڶ��ο��䣺" << endl;
					cin >> a;
					/*�ѵڶ��ο���ķ����ۼӵ�score��*/
					b += rand() % 41 + 60;
					cout << "���ο�����л��֣�" << b << endl << endl;
					if (b >= 166) {
						cout << "��ϡ��Ƥ����" << endl;
					} else {
						cout << "ɶ��û�У������������ֵ����ο��䣺" << endl;
						cin >> a;
						/*�ѵ����ο���ķ����ۼӵ�score��*/
						b += rand() % 41 + 60;
						cout << "���ο�����л��֣�" << b << endl << endl;
						if (b >= 238) {
							cout << "�����ޡ�" << endl;
						} else {
							cout << "��лл���٣���" << endl;
						}
					}
				}
			} else {
				cout << "�������" << endl;
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
				cout << "				��ӭ��������ս��" << endl;
				cout << "				�ظ����⿪ʼ��Ϸ" << endl;
				cin >> x;
				clear();
				cout << "				boss1�������㣬��ô��?" << endl;
				cout << "				1.����2.����������ѡ��2��" << endl;
				cin >> x;
				if (x == "2") {
					int y;
					cout << "			boss1�Ѿ�������������ˣ�С��" << endl;
					cout << "			boss1��Ѫ��Ϊ" << boss1 << "С�ģ����Ѫ��ֻ��" << me << endl;
					cout << "			�����ڿ��Ի�Ǯ�����������ӿ�1����1000���" << endl;
					cout << "			������ڿ�2����1600���" << endl;
					cout << "			�򹭼���3����2000���" << endl;
					cout << "			��??��4����5000���" << endl;
					cout << "			�����񵯿�5����8000�����3��" << endl;
					cout << "			��Ѫ����6,��1��һ�1Ѫ��" << endl;
					cout << "			��������" << jin_bi << "���" << endl;
					cin >> y;
					if (y == 1 || y == 2 || y == 3 || y == 4 || y == 5) {
						mai(y);
					} else if (y == 6) {
						cout << "			��Ҫ������Ѫ��" << endl;
						cin >> y;
						bu_xue(y);
						cout << "			Ҫ��Ҫ������" << endl;
						cin >> x;
						if (x == "Ҫ") {
							wuqi(1);
						} else {
							cout << "				Ĭ�ϲ�Ҫ" << endl;
						}
					} else {
						cout << "				��Ҫ���������ˣ�angry!!!" << endl;
					}
					cout << "				���н��" << jin_bi << "��ú���ϡ" << endl;
					cout << "				������ʽ��ʼ" << endl;
					while (boss1 > 0) {
						shi_yong(1);
						cout << "				��1��������2������" << endl;
						cin >> y;
						if (y == 1) {
							guany = gongji(1);
							if (guany == 1) {
								break;
							}
						} else if (y == 2) {
							zhuang(1);
						}
						cout << "				Ҫ��Ҫ������" << endl;
						cin >> z;
						if (z == "Ҫ") {
							wuqi(1);
						} else {
							cout << "				Ĭ�ϲ�Ҫ" << endl;
						}
					}
					if (me <= 0) {
						break;
					}
					me += 5000;
					cout << "			boss1 out!,boss2��������,����Ѫ��Ϊ" << boss2 << "���Ѫ��Ϊ" << me << endl;
					jin_bi += 500;
					cout << "				�����ڵĽ��" << jin_bi << endl;
					while (boss2 > 0) {
						shi_yong(1);
						cout << "				��1��������2������" << endl;
						cin >> y;
						if (y == 1) {
							guany = gongji(1);
							if (guany == 1) {
								break;
							}
						} else if (y == 2) {
							zhuang(1);
						}
						cout << "				Ҫ��Ҫ������" << endl;
						cin >> z;
						if (z == "Ҫ") {
							wuqi(1);
						} else {
							cout << "				Ĭ�ϲ�Ҫ" << endl;
						}
					}
					if (me <= 0) {
						break;
					}
					me += 10000;
					cout << "				boss2 out!,boss3��������,����Ѫ��Ϊ" << boss3 << "���Ѫ��Ϊ" << me << endl;
					jin_bi += 5000;
					cout << "			�����ڵĽ��" << jin_bi << endl;
					while (boss3 > 0) {
						shi_yong(1);
						cout << "				��1��������2������" << endl;
						cin >> z;
						if (z == "1") {
							guany = gongji(1);
							if (guany == 1) {
								break;
							}
						} else if (y == 2) {
							zhuang(1);
						}
						cout << "				Ҫ��Ҫ������" << endl;
						cin >> z;
						if (z == "Ҫ") {
							wuqi(1);
						} else {
							cout << "				Ĭ�ϲ�Ҫ" << endl;
						}
					}
					if (me <= 0) {
						break;
					}
					cout << "			����bossȫ����ɱ,��Ϸ�ɹ�������лл����" << endl;
					cout << endl;
					cout << "				Ҫ����һ����(Ҫ/��Ҫ)" << endl;
					cin >> z;
					if (z == "Ҫ") {
						cout << endl;
						cout << "--------------------------------------------" << endl;
						cout << endl;
						_bool = false;
					} else {
						_bool = false;
						cout << "				лл" << endl;
					}
				}
				if (x == "1") {
					cout << "һ�����Ҳû�У������㣡����" << endl;
					_bool = false;
				}
			}
		} else if (q1 == "6") {
			Bool = false;
		} else if (q1 == "114" && f_666 == 1) {
			srand((unsigned int)time(NULL));
			cout << "                             ɨ����Ϸ" << endl;
			cout << "                               ������" << endl;
			cout << "                          Warning!!��bug!" << endl;
			cout << "                          �����Ƿ�����(��/��)" << endl;
			cin >> String;
			if (String != "��")
				break;
			cout << "                         ��*���ĸ���" << endl;
			int n, m;
			cin >> n >> m;

			printl(n, m);
		} else if (q1 == "7") {
			srand((unsigned int)time(NULL));
			cout << "                    ��������" << endl;
			bool flag = 1, s6 = 0, s328 = 0, s68 = 0, s648 = 0, s128 = 0, my = 0, nsp = 0, ysp = 0, yd = 0;
			while (flag == true) {
				cout << "   ԭʯ:" << st << "   �ϳ���" << yu << endl;
				cout << "   1.ԭʯ�̵�  2.�һ��ϳ���  3.�鿨  4.����600��  5.�ϳ�  6.���и�Ա  7.�˳�" << endl;
				cin >> q1;
				if (q1 == "1") {
					clear();
					cout << "              ԭʯ�̵�" << endl;
					Sleep(1000);
					if (s6 == 0) {
						cout << "          �׳�6Ԫ,һ��ʮ��,��Ҫ��5" << endl << endl;
					}
					if (s128 == 0) {
						cout << "          5�Ƕ���ɸѡ,����ֻ��128Ԫ!��Ҫ��6" << endl << endl;
					}
					if (s68 == 0) {
						cout << "          �׳�68Ԫ,50��ԭʯ,��Ҫ��7" << endl << endl;
					}
					if (s328 == 0) {
						cout << "          ˮ�µ�Ǯ��328Ԫ,4��ʮ��,��Ҫ��8" << endl << endl;
					}
					if (s648 == 0) {
						cout << "          �׳�648Ԫ,10��ʮ��,��Ҫ��9" << endl << endl;
					}
					if (my == 0) {
						cout << "          ��֪��˭���µ�Ǯ��,��֮1288Ԫ,700��ԭʯ+1��ʮ��,��Ҫ��10" << endl << endl;
					}
					if (s648 == 0) {
						cout << "          ÿ��648Ԫ,1��������Ƭ,��Ҫ��11" << endl << endl;
					}
					cin >> q1;
					if (q1 == "5" && s6 == 0) {
						if (qingbao >= 6) {
							s6 = 1;
							qingbao -= 6;
							yu += 6000;
							cout << "             ����ɹ�!" << endl;
						} else {
							cout << "            ûǮ!!!" << endl;
						}
					} else if (q1 == "6" && s128 == 0) {
						if (qingbao >= 128) {
							s128 = 1;
							qingbao -= 128;
							zx5++;;
							cout << "             ����ɹ�!" << endl;
						} else {
							cout << "            ûǮ!!!" << endl;
						}
					} else if (q1 == "7" && s68 == 0) {
						if (qingbao >= 68) {
							s68 = 1;
							qingbao -= 68;
							st += 50;
							cout << "             ����ɹ�!" << endl;
						} else {
							cout << "            ûǮ!!!" << endl;
						}
					} else if (q1 == "8" && s328 == 0) {
						if (qingbao >= 328) {
							s328 = 1;
							qingbao -= 328;
							yu += 24000;
							cout << "             ����ɹ�!" << endl;
						} else {
							cout << "            ûǮ!!!" << endl;
						}
					} else if (q1 == "9" && s648 == 0) {
						if (qingbao >= 648) {
							s648 = 1;
							qingbao -= 648;
							yu += 60000;
							cout << "             ����ɹ�!" << endl;
						} else {
							cout << "            ûǮ!!!" << endl;
						}
					} else if (q1 == "10" && my == 0) {
						if (qingbao >= 1288) {
							my = 1;
							qingbao -= 1288;
							yu += 6000;
							st += 700;
							cout << "             ����ɹ�!" << endl;
						} else {
							cout << "            ûǮ!!!" << endl;
						}
					} else if (q1 == "11" && nsp == 0) {
						if (qingbao >= 648) {
							nsp = 1;
							qingbao -= 648;
							wnsp++;
							cout << "             ����ɹ�!" << endl;
						} else {
							cout << "            ûǮ!!!" << endl;
						}
					}
				} else if (q1 == "3") {
					cout << "                   ���ճ���Ϊ������" << endl;
					while (true) {
						cout << "          1.������  2.�ѳ鿨��  3.����  4.ʮ����  5.һ������  6.�˳�" << endl;
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
														cout << "\033[1;36;43m" << " �� " << "\033[0m";

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
							cout << "                      �ѳ�" << cntc << "��" << endl;
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
														cout << "\033[1;36;43m" << " �� " << "\033[0m";

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
					cout << "                    ���γɹ�" << endl;
				} else if (q1 == "7") {
					flag = 0;
				} else if (q1 == "6") {
					cout << "����" << yd << "��ҹ��" << nt << "������ʹ" << ls << "������" << lg << "��������" << fen << "����" << as <<
					     "��������" << endl;
				} else if (q1 == "5") {
					clear();
					cout << "                          ��ӭ���ϳɸ�Ա" << endl;
					cout << "                 ����" << wnsp << "��������Ƭ," << ydsp << "��ҹ����Ƭ" << sp_6 << "��������Ƭ" << endl;
					cout << "                  ��Ҫת��ʲô" << endl;
					cout << "1.������Ƭתҹ����Ƭ  2.������Ƭת6����Ƭ  3.ʮ��������Ƭת����ʹ  4.ʮ��ҹ����Ƭ��1��ҹ��" << endl;
					cin >> q1;
					if (q1 == "1") {
						if (wnsp > 0) {
							cout << "                 ��Ҫת����" << endl;
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
								cout << "           û����ô��������Ƭ" << endl;
							} else {
								cout << "                    �һ��ɹ�" << endl;
							}
						} else {
							cout << "                 ��û��������Ƭ" << endl;
						}
					} else if (q1 == "2") {
						cout << "                 ��Ҫת����" << endl;
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
							cout << "           û����ô��������Ƭ" << endl;
						} else {
							cout << "                    �һ��ɹ�" << endl;
						}
					} else if (q1 == "4") {
						if (ydsp > 9) {
							cout << "                   ת���ɹ�" << endl;
							ydsp -= 10;
							yd++;
						}
					}
				} else if (q1 == "2") {
					clear();
					cout << "         ������" << st << "ԭʯ��Ҫ�һ�����ԭʯ" << endl;
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
						cout << "            û����ô��ԭʯ" << endl;
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
	cout << "			һ�Ų�Ʊ5ԪǮ���������л�����ʮ��Ԫ��" << endl;
	Sleep(2000);
	if (qingbao >= 5) {
		cout << "				�Կ�������֧��..." << endl;
		Sleep(1000);
		qingbao -= 5;
		cout << "				֪��������5Ԫ..." << endl;
		Sleep(1000);
		cout << "			�����򵥵� ��λ�� 1~3ÿλ�� �ո����" << endl;
		cout << "				�н��˷�10��Ԫ" << endl;
		cin >> e >> f >> g;
		cout << "				���ڼ򵥲�Ʊ������" << endl;
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
			cout << "				��ϲ���н��ˣ�" << endl;
			qingbao += 100000;
		} else {
			cout << "				��~~δ�н�^`^" << endl;
		}
	} else {
		cout << "				��ûǮ��һ��С��Ƶ5Ԫ��ȥ������" << endl;
	}
}

void gouwu() {
	clear();
	cout << "			   ��Ҫ����: 1.����PC�� ���� 2.�Ա�PC��" << endl;
	cin >> String;
	if (String == "1") {
		clear();
		if (xia_jing == 0) {
			for (int i = 10; i >= 1; i--) {
				cout << "			���ڰ���������(Ԥ�ƻ���" << i << "��...)" << endl;
				Sleep(1000);
				clear();
			}
			cout << "				���سɹ�" << endl;
			xia_jing += 1;
		}
		cout << "	------------------------------------------" << endl;
		cout << "				[	��Ʒ	 ]" << endl;
		cout << "				[      /-/-      ]" << endl;
		cout << "				[   1.Ь����     ]" << endl;
		cout << "				[   2.�·�       ]" << endl;
		cout << "				[   3.�䶳ʳƷ   ]" << endl;
		cout << "				[   4.�˳�	 ]" << endl;
		cout << "				[ ---- o--o ---- ]" << endl;
		cout << "				[     ......     ]" << endl;
		cout << "				[                ]" << endl;
		cout << "	-------------------------------------------" << endl;
		cin >> String;
		if (String == "1") {
			cout << "	1.����Ь  2.����Ь  3.�߸�Ь  4.��ͨЬ  5.��Ь" << endl;
			cin >> String;
			if (String == "1") {
				int a;
				cout << "				��˫��" << endl;
				cin >> a;
				cout << "				�Ƿ���������(��/��)" << endl;
				cin >> String;
				if (String == "��") {
					cout << "			���ڼ���۸�----------" << endl;
					Sleep(3000);
					bool b = true;
					while (b == true) {
						cout << "				��֧��" << a * 688 << "ԪǮ" << endl;
						cout << "				Ĭ��ʹ��֪����" << endl;
						int temp;
						cin >> temp;
						if (temp >= a * 688 && qingbao >= temp) {
							cout << "				֪��������" << temp << "Ԫ" << endl;
							qingbao -= temp;
							b = 0;
						} else if (temp >= a * 688 && qingbao < temp) {
							cout << "				��ûǮ��ȥˢˢ����Ƶ��" << endl;
							b = 0;
						} else {
							cout << "				��Ǯ������" << endl;
						}
					}
				} else {
					cout << "				���������" << endl;
				}
			} else if (String == "2") {
				cout << "				�ܱ�Ǹ����治��" << endl;
			} else if (String == "3") {
				cout << "				����ʣһ˫��" << endl;
				cout << "				�Ƿ���(��/��)" << endl;
				cin >> String;
				if (String == "��") {
					bool b = true;
					while (b == true) {
						cout << "			��֧��6888Ԫ������ֱ��3000��ֻ��3888Ԫ" << endl;
						cout << "				Ĭ��ʹ��֪����" << endl;
						int temp;
						cin >> temp;
						if (temp >= 3888 && qingbao >= temp) {
							cout << "				֪��������" << temp << "Ԫ" << endl;
							qingbao -= temp;
							b = 0;
						} else if (temp >= 3888 && qingbao < temp) {
							cout << "				��ûǮ��ȥˢˢ����Ƶ��" << endl;
							b = 0;
						} else {
							cout << "				��Ǯ������" << endl;
						}
					}
				}
			} else if (String == "4") {
				cout << "��ͨЬ��ʣ8˫!!!����" << endl;
				cout << "��";
				Sleep(2000);
				cout << "����";
				Sleep(2000);
				cout << "ѽ";
				Sleep(1000);
				cout << "!" << endl;
				cout << "				�ܱ�Ǹ���������" << endl;
			} else if (String == "5") {
				cout << "				����ͷ��˭������Ь��?" << endl;
			} else {
				cout << "				��������ս�ҵļ�����?" << endl;
			}
		} else if (String == "2") {
			cout << "				�ܱ�Ǹ����ʱû���·�һ����" << endl;
		} else  if (String == "3") {
			cout << "			1.�䶳���  2.�䶳���  3.�䶳���ȼ�ʳʳƷ" << endl;
			cin >> String;
			if (String == "1") {
				cout << "				������������꣬����������" << endl;
			} else if (String == "2") {
				cout << "			1.���� 2.���� 3.������ 4.ä����(ֱ��20Ԫ)" << endl;
				cin >> String;
				if (String == "1") { //����
					cout << "				���ջ�ʣ������(ÿ���޹�1��/60Ԫ)" << endl;
					cout << "				�Ƿ���(��/��)" << endl;
					cin >> String;
					if (String == "��") {
						bool b = true;
						while (b == true) {
							cout << "				��֧��60Ԫ��Ĭ��֪����" << endl;
							int temp;
							cin >> temp;
							if (temp >= 60 && qingbao >= temp) {
								cout << "				֪��������" << temp << "Ԫ" << endl;
								qingbao -= temp;
								b = 0;
							} else if (temp >= 60 && qingbao < temp) {
								cout << "				��ûǮ��ȥˢˢ����Ƶ��" << endl;
								b = 0;
							} else {
								cout << "				��Ǯ������" << endl;
							}
						}
					}
				} else if (String == "2") { //����
					int a;
					cout << "				���մ���30Ԫ/2��" << endl;
					cout << "				��Ҫ�򼸶�?" << endl;
					cin >> a;
					a *= 30;
					cout << "		���ڰ������۸����Ժ�---------------" << endl;
					Sleep(2000);
					bool b = true;
					while (b == true) {
						cout << "				��֧��" << a << "Ԫ" << endl;
						int temp;
						cin >> temp;
						if (temp >= a && qingbao >= temp) {
							cout << "				֪��������" << temp << "Ԫ" << endl;
							b = false;
							qingbao -= temp;
						} else if (temp >= a && qingbao < temp) {
							cout << "				��ûǮ��ȥˢˢ����Ƶ��" << endl;
							b = false;
						} else {
							cout << "				��Ǯ������" << endl;
						}
					}
				} else if (String == "3" || String == "4") {
					cout << "			���������������꣬����������" << endl;
				} else {
					cout << "				�����BUG,û��" << endl;
				}
			} else if (String == "3") {
				cout << "			����������Щ�����̼Ҹ��˿ͳ���ô�õĶ���������" << endl;
			}
		}
	} else if (String == "2") {
		cout << "			�ܱ�Ǹ�����������δ¼���Ա�PC��" << endl;
		cout << "				�������ؾ���PC��" << endl;
	}
}

void begin() {
	Sleep(1000);
	clear();
	bool flag = true;
	cout << "		    -----------�� ӭ �� �� �� �� �� ��-------------" << endl;
	cout << "				    ���������ʲô?	" << endl;
	while (flag == 1) { //�������
		cout << "1.���� 2.����Ϸ 3.�˳� 4.����С����  5.�����  6.ѡ���ⲻ֪��ôѡ  7.ˢС��Ƶ  8.�鿴  9.��Ʊ  10.봽�" <<
		     endl;
		cin >> String;
		if (String == "4") {
			mei();
		} else if (String == "7") { //ˢС��Ƶ
			little_photo();
		} else if (String == "3") {
			cout << "				�������ˣ����˳�ʲôѽ(Ctrl 4)" << endl;
			Sleep(3000);
			break;
		} else if (String == "10") { //봽�
			clear();
			cout << "           ���ڽ���999Ԫ�����ɿ�ͨ���������ȴ��Ա" << endl;
			int a;
			cin >> a;
			if (a >= 999 && qingbao >= 999) {
				qingbao -= a;
				Sleep(1000);
				cout << "                            ��ͨ�ɹ�" << endl;
				f_666 = 1;
			} else {
				cout << "        ������!!!" << endl;
			}
		} else if (String == "1") { //����
			gouwu();
		} else if (String == "6") { //ѡ������ôѡ
			cout << "��3��ѡ���4�������֣�" << endl;
			cin >> String;
			if (String == "3") {
				int a = rand() % 3;
				if (a == 0) {
					cout << "					  ��..." << endl;
					Sleep(2000);
					cout << "a" << endl;
				} else if (a == 1) {
					cout << "					  ��..." << endl;
					Sleep(2000);
					cout << "b" << endl;
				} else if (a == 2) {
					cout << "						��..." << endl;
					Sleep(2000);
					cout << "c" << endl;
				}
			} else if (String == "4") {
				int a = rand() % 4;
				if (a == 0) {
					cout << "					  ��..." << endl;
					Sleep(2000);
					cout << "a" << endl;
				} else if (a == 1) {
					cout << "					  ��..." << endl;
					Sleep(2000);
					cout << "b" << endl;
				} else if (a == 2) {
					cout << "					  ��..." << endl;
					Sleep(2000);
					cout << "c" << endl;
				} else if (a == 3) {
					cout << "						��..." << endl;
					Sleep(2000);
					cout << "d" << endl;
				}
			} else {
				cout << "		������Ҳ������һ��׼����(Ц��)" << endl;
			}
		} else if (String == "8") { //�鿴
			see();
		} else if (String == "9") { //��Ʊ
			caipiao();
		} else if (String == "2") { //��Ϸ����
			gamebox();
		}
	}
}

void printl(int n, int m) {
	srand((unsigned int)time(NULL));
	int cnt = 0;
	cout << "                             ���ڼ�����..." << endl;
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
		cout << "      '*'Ϊδ֪�Ƿ�Ϊ��" << endl;
		cout << "        ����������Ҫ��������,��(1,1)" << endl;
		int x, y;
		cin >> x >> y;
		sl_mb[x][y] = -1;
		if (sl_a[x][y] == 1) {
			flag = 0;
			cout << "��ϲ��ɹ��������Ϸ" << endl;
		} else if (n * m - cnt == cur) {
			flag = 0;
			cout << "��ϲ��ͨ����ɨ����Ϸ��" << endl;
		}
		if (sl_c[x][y] == 0 && sl_a[x][y] == 0) {
			for (int i = x - 1; i <= x + 1; i++) {
				for (int j = y - 1; j <= y + 1; j++) {
					sl_mb[i][j] = -1;
				}
			}
		}
	}
	cout << "��Ϸ���---" << endl;
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
	// ���㵱ǰ����˭�ĺ���ռ��
	int a[5][5] = {}; // ��ǰ�����ϵĺ��� + - ��ʾ��ɫ ���ֱ�ʾ���Ӵ�С
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
	// ��������
	string border[4] = { "", "�����������Щ��������Щ���������", "�����������੤�������੤��������", "�����������੤�������੤��������" };
	for (int i = 1; i <= 3; i++) {
		cout << border[i] << endl;
		cout << "��";
		for (int j = 1; j <= 3; j++) {
			if (a[i][j] > 0) {
				cout << " +" << a[i][j] << " ��";
			} else if (a[i][j] < 0) {
				cout << " " << a[i][j] << " ��";
			} else {
				cout << "    ��";
			}
		}
		cout << endl;
	}
	cout << "�����������ة��������ة���������" << endl;
}
int findWinner() {
	// ���㵱ǰ����˭ռ�ݣ�ֻ��¼��ɫ-1 +1������¼���Ӵ�С
	int b[5][5] = {}; // ��ǰ����˭ռ��
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
	// �����
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
	// �����
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
	// ���Խ���
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
		printf("������ͼ��(%d,%d)��%d\n", x, y, size);
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
		cout << "������ͼ��(" << x1 << "," << y1 << ")" << "ת�Ƶ�(" << x2 << "," << y2 << ")" << endl;
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
	// ���㵱ǰ����˭ռ��
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
int fill(int x, int y, int size) { //����������size��С������ռ��x��y��
	cout << "������ͼ��" << x << ',' << y << "����" << endl;
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
		cout << "������Ϊ�Լ���Ӯ��" << endl;
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
		cout << "������Ϊ���Ӯ��" << endl;
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
			printf("��������%d,%d��ֹ��,w=%d\n", aa[i].x, aa[i].y, aa[i].h);
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
		cout << "���Ծ���ռ������" << endl;
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
		cout << "��ѡ�� �� ��һ������ ���� �� �ƶ�һ������ (��������)" << endl;
		int choice, size, x1, y1, x2, y2;
		cin >> choice;
		if (choice == 1) {
			cout << "�������к��� С:" << box_p2[1] << " ��:" << box_p2[2] << " ��:" << box_p2[3] << endl;
			cout << "��ѡ����ӵĴ�С �� С �� �� �� �� (��������)" << endl;
			cin >> size;
			if (size > 3 || size < 1) {
				cout << "�Ƿ�����" << endl;
				continue;
			}
			if (box_p2[size] <= 0) {
				cout << "����û��" << endl;
				continue;
			}
			cout << "��������õ�λ��(���������������磺1 1)" << endl;
			cin >> x1 >> y1;
			if (!box_pbox_lace(x1, y1, size, 1)) {
				cout << "����ʧ��" << endl;
				continue;
			}
			cout << "���óɹ�" << endl;
			box_p2[size]--;
			box_showbox_square();
		} else if (choice == 2) {
			cout << "���������ߵ�λ��(���������������磺1 1)" << endl;
			cin >> x1 >> y1;
			cout << "��������õ�λ��(���������������磺1 1)" << endl;
			cin >> x2 >> y2;
			// �ж��ƶ�������
			if (box_l[x1][y1] == 1)
				size = 3;
			else if (box_m[x1][y1] == 1 && box_l[x1][y1] == 0)
				size = 2;
			else if (box_s[x1][y1] == 1 && box_l[x1][y1] == 0 && box_m[x1][y1] == 0)
				size = 1;
			else {
				cout << "û�п����ƶ��ĺ���" << endl;
				continue;
			}
			if (!box_move(x1, y1, x2, y2, size, 1)) {
				cout << "�ƶ�ʧ��" << endl;
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
		cout << "��������" << endl;
		box_showbox_square();
		winner = findWinner();
		if (winner != 0) {
			return winner;
		}
	}
}
void box_showWinner(int winner) {
	if (winner == 1) {
		cout << "���ʤ��" << endl;
	} else {
		cout << "����ʤ��" << endl;
	}
}
void box_intro() {
	cout << "��ӭ����������Ϸ" << endl;
	Sleep(1000);
	if (f_666 == 1) {
		cout << "����vip,�Զ�����ʹ�������أ�������ȴ�" << endl;
		Sleep(1000);
	} else if (xia_box == 0) {
		clear();
		cout << "����";
		Sleep(1000);
		cout << "����";
		Sleep(1000);
		cout << "��";
		Sleep(1000);
		cout << ".";
		Sleep(1000);
		cout << ".";
		Sleep(1000);
		cout << ".";
		Sleep(1000);
		clear();
		cout << "���ڼ�����";
		Sleep(1000);
		cout << ".";
		Sleep(1000);
		cout << ".";
		Sleep(1000);
		cout << ".";
		Sleep(1000);
		clear();
		cout << "���سɹ�";
		Sleep(1000);
		xia_box = 1;
	}
	clear();
	cout << "���ڰ�����ʼ��" << endl;
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
	cout << "��Һ͵��Ը�ӵ�д���С�ź��Ӹ�2����" << endl;
	cout << "˫�������ھŹ���������з�����ƶ�һ�����ӣ�ÿ�����Ӷ��ɸ�ס�������С�ĺ��ӡ�" << endl;
	cout << "���㷽�Ŷӵĺ�������������������һ��ֱ������ս�ɹ���������սʧ�ܡ�" << endl;
	cout << "��������ʾ��ҵĺ��ӣ�������ʾ���Եĺ��ӣ�1��2��3��ʾ���ӵ�С�д�" << endl;
	cout << "��ʼ�ɣ�" << endl;
	box_showbox_square();
}
//int getch() {
// �����Ե�����
//struct termios nts, ots;
// �õ���ǰ�ն�(0��ʾ��׼����)������
//if (tcgetattr(0, &ots) < 0)
//return EOF;
// �����ն�ΪRawԭʼģʽ����ģʽ�����е������������ֽ�Ϊ��λ������
//nts = ots;
//cfmakeraw(&nts);
// �����ϸ���֮�������
//if (tcsetattr(0, TCsANOW, &nts) < 0)
//return EOF;
// ���û�ԭ���ϵ�ģʽ
//int cr;
//cr = getchar();
//if (tcsetattr(0, TCsANOW, &ots) < 0)
//return EOF;
//return cr;
//}