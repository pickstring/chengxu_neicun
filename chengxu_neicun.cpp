#include<iostream>
#include<cstdlib>
using namespace std;

//全局变量
int g_a = 10;
int g_b = 20;
const int c_g_a = 30;

int main() {
	/// <summary>
	/// 1 （运行前）代码区  函数体的二进制代码 共享 只读
	/// 2 （运行前）全局区  全局变量 静态变量 常量 结束时由os回收
	/// 3 （运行后）栈区  由编译器自动分配释放 函数的参数值 局部变量
	/// 4 （运行后）堆区  由程序员分配和释放 结束时由os回收
	/// 生命周期 灵活管理
	/// </summary>
	/// <returns></returns>
	
	//普通局部变量(写在函数体内)
	int a = 10, b = 20;
	cout << (int)&a << " " << (int)&b << endl;
	//数据相邻(全局区)
	cout << (int)&g_a << " " << (int)&g_b << endl;
	//静态变量（全局区 相邻）
	static int s_a = 10;
	static int s_b = 20;
	cout << (int)&s_a << " " << (int)&s_b << endl;
	//常量（全局区）: 字符串常量 const(全局变量 局部变量)
	cout << (int)&"hello world!" << endl;
	const int c_a = 10;
	cout << (int)&c_a << endl;
	cout << (int)&c_g_a << endl;
	return 0;
}