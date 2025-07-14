
#include<iostream>
#define IOS ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
using namespace std;
typedef long long ll;
const int N=100010;
//C/C++:
// -------------------- 数据设计 --------------------
/*
    棋盘:
        map[i][j]表示坐标(i,j)的值
        0表示空地
        1表示黑子
        2表示白子
    如: map[3][6] = 1  表示(3,6)的位置是黑子
*/
int map[19][19];

// 表示当前回合数  偶数表示黑棋落子  奇数表示白棋落子
// 如: flag = 20 表示当前是第[20]次落子  由黑方落子
int flag;
// -------------------- service --------------------
/*
    负责人: 王文良 
    功能: init: 初始化游戏数据
        将棋盘的值初始化为0
        当前回合设为黑棋(flag设为0)
    参数: void
    返回值: void
*/
void init() {
    for (int i = 0; i < 19; ++i) {
        for (int j = 0; j < 19; ++j) {
            map[i][j] = 0;
        }
    }
    flag = 0;
}
/*
    *难点1
    负责人: 王文良 
    功能: isWin: 根据传入的坐标(map对应位置)和flag值 判断落点后是否获胜
    参数:
        x: 当前回合落子的x坐标
        y: 当前回合落子的y坐标
    返回值:
        0表示没有获胜
        1表示黑子胜利
        2表示白子胜利
*/
int isWin(int x, int y) {//胜负判断 
    int color = (flag % 2 == 0) ? 1 : 2;

    // 检查横向
    int count = 1;//当遇到一处不连续时 循环停止 终止判断 
    for (int i = y - 1; i >= 0 && map[x][i] == color; --i) ++count;
    for (int i = y + 1; i < 19 && map[x][i] == color; ++i) ++count;
    if (count >= 5) return color;

    // 检查纵向
    count = 1;
    for (int i = x - 1; i >= 0 && map[i][y] == color; --i) ++count;
    for (int i = x + 1; i < 19 && map[i][y] == color; ++i) ++count;
    if (count >= 5) return color;

    // 检查正对角线
    count = 1;
    for (int i = x - 1, j = y - 1; i >= 0 && j >= 0 && map[i][j] == color; --i, --j) ++count;
    for (int i = x + 1, j = y + 1; i < 19 && j < 19 && map[i][j] == color; ++i, ++j) ++count;
    if (count >= 5) return color;

    // 检查反对角线
    count = 1;
    for (int i = x - 1, j = y + 1; i >= 0 && j < 19 && map[i][j] == color; --i, ++j) ++count;
    for (int i = x + 1, j = y - 1; i < 19 && j >= 0 && map[i][j] == color; ++i, --j) ++count;
    if (count >= 5) return color;

    return 0;
}
/*
    负责人:王文良 
    功能: playerMove: 在指定位置落子
        如果map[x][y]是空地 则修改map[x][y]的值:改为相应颜色(flag对应颜色)        否则不操作
    参数:
        x: 当前回合落子的x坐标
        y: 当前回合落子的y坐标
    返回值:
        0表示落子失败 (棋盘已经有子)
        1表示落子成功

*/
int playerMove(int x, int y) {//落子函数 
    if (map[x][y] == 0) {
        map[x][y] = (flag % 2 == 0) ? 1 : 2;
        return 1;
    }
    return 0;
}
 //-------------------- view --------------------




/*
    负责人: 张三
    功能: gameView_ShowMap: 根据map数组 打印游戏棋盘
    参数: void
    返回值: void
*/
void gameView_ShowMap() {
    cout << "  ";
    for (int i = 0; i < 19; ++i) {
        cout << i % 10 << " ";//打印列号 
    }
    cout << std::endl;
    for (int i = 0; i < 19; ++i) {//打印行号 
        cout << i % 10 << " ";
        for (int j = 0; j < 19; ++j) {
            if (map[i][j] == 0) {
                cout << "+ ";
            } else if (map[i][j] == 1) {
                cout << "X ";
            } else {
                cout << "O ";
            }
        }
        cout << std::endl;
    }
}
/*
    负责人: 张三
    功能: winView: 根据flag的值  打印游戏胜利界面  用户可以按任意键回到主菜单
    参数: void
    返回值: void
*/
void winView() {
    int winner = (flag % 2 == 0) ? 1 : 2;
    if (winner == 1) {
        cout << "黑子胜利！" << endl;
    } else {
        cout << "白子胜利！" << endl;
    }
    cout << "按任意键回到主菜单..." << endl;
    getchar();
}
/*
    *难点2
    负责人: 张三
    功能: gameView: 游戏界面整合
        初始化游戏数据(调用函数init())
        while(1){
            打印游戏界面(调用函数gameView_ShowMap())
            接收玩家坐标输入

            落子(调用落子函数playerMove())
                (如果落子失败 重新开始循环)

            判断游戏是否胜利(调用胜利判断函数isWin())
                (如果游戏胜利 调用胜利界面函数 然后结束当前界面)
            切换玩家(修改flag值)
        }
    参数: void
    返回值: void
*/
void gameView() {
    init();
    while (true) {
        gameView_ShowMap();
        int x, y;
        cout << (flag % 2 == 0 ? "黑子" : "白子") << "落子，请输入坐标(x y): ";
        std::cin >> x >> y;
        if (x < 0 || x >= 19 || y < 0 || y >= 19) {
            cout << "坐标超出范围，请重新输入。" << endl;
            continue;
        }
        if (!playerMove(x, y)) {
            cout << "该位置已有棋子，请重新选择。" << endl;
            continue;
        }
        if (isWin(x, y)) {
            gameView_ShowMap();
            winView();
            break;
        }
        ++flag;
    }
}

/*
    负责人: 张三
    功能: menuView: 展示选项, 玩家可以在这里选择进入游戏, 进入设置或退出游戏
        进入游戏: 调用游戏界面函数gameView();
        进入设置: 敬请期待...
        退出游戏: 调用exit(0);
    参数: void
    返回值: void
*/
void menuView() {//菜单界面 
    int choice;
    while (true) {
        cout << "1. 进入游戏" << std::endl;
        cout << "2. 进入设置" << std::endl;
        cout << "3. 退出游戏" << std::endl;
        cout << "请输入你的选择: ";
        cin >> choice;
        switch (choice) {
        case 1:
            gameView();
            break;
        case 2:
            cout << "敬请期待..." << endl;
            break;
        case 3:
            exit(0);
        default:
            cout << "无效的选择，请重新输入。" << endl;
        }
    }
}
// -------------------- view --------------------

int main()
{
    menuView();
    return 0;
}

