#include<iostream>
#include<cstdlib>
using namespace std;

//ȫ�ֱ���
int g_a = 10;
int g_b = 20;
const int c_g_a = 30;

int main() {
	/// <summary>
	/// 1 ������ǰ��������  ������Ķ����ƴ��� ���� ֻ��
	/// 2 ������ǰ��ȫ����  ȫ�ֱ��� ��̬���� ���� ����ʱ��os����
	/// 3 �����к�ջ��  �ɱ������Զ������ͷ� �����Ĳ���ֵ �ֲ�����
	/// 4 �����к󣩶���  �ɳ���Ա������ͷ� ����ʱ��os����
	/// �������� ������
	/// </summary>
	/// <returns></returns>
	
	//��ͨ�ֲ�����(д�ں�������)
	int a = 10, b = 20;
	cout << (int)&a << " " << (int)&b << endl;
	//��������(ȫ����)
	cout << (int)&g_a << " " << (int)&g_b << endl;
	//��̬������ȫ���� ���ڣ�
	static int s_a = 10;
	static int s_b = 20;
	cout << (int)&s_a << " " << (int)&s_b << endl;
	//������ȫ������: �ַ������� const(ȫ�ֱ��� �ֲ�����)
	cout << (int)&"hello world!" << endl;
	const int c_a = 10;
	cout << (int)&c_a << endl;
	cout << (int)&c_g_a << endl;
	return 0;
}