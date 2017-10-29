/**************************************************************
     function������һ��"Effective C++"�����һ��
	           ȫ���������Ը��顣
	 author��Demon
	 Time:2017/10/29
***************************************************************/

#include<iostream>
using namespace std;
//��rule one:View C++ as a federation languages

//����class ר������,��const����enum(������ȡһ��enum��ַ��

//��Prefer const,enum and inline to #define


//��Use const whenever possible
   

//��Make sure that the objects are initialized before they are used

int main()
{

	//��rule one:View C++ as a federation languages
	

	//��Prefer const,enum and inline to #define
	/*
	1.���ڵ����ĳ����������const����enum���#define
	2.�������1�����峣��ָ�룬��������ͨ������ͷ�ļ��У�(�Ա㱻��ͬ��Դ�������
	  �б�Ҫ��ָ���ָ����ָ֮������Ϊconst��
	char const* const p = "С���";
	�������2������class ר������
	3.������ʽ�����ĺ꣬��ø���inline���#define
	*/

	//��Use const whenever possible
	/*
	    1.������ʹ��const������operator*������ֵ���ԼӸ�const��
	    ԭ�򣺽�ĳЩ��������Ϊconst�����԰�����������������
		      const���Ա�ʩ�����κ��������ڵĶ��󣬺���������
			  ��������ֵ����Ա�����ȵȡ�
	    2.��const��non-const��Ա��������ʵ�ʵȼ۵�ʵ��ʱ����
		  non-const�����Ա��������const�����Ա�������Ա���
		  �����ظ���
	*/

	//��Make sure that the objects are initialized before they are used
	/*
	   1.Ϊ�������ͽ����ֹ���ʼ������ΪC++����֤��ʼ�����ǡ�
	   2.���캯�����ʹ�ó�Ա��ʼֵ�У�����Ҫ�ڹ��캯����ʹ��
	     ��ֵ������ע�⣺��ʼ�����г��ĳ�Ա����������Ӧ��
		 ��������class������˳����ͬ�ġ�
	   3.Ϊ�˱��⡰����뵥Ԫ֮��ʼ������"���⣬��local static����
	     ���non-local static

		 ���뵥Ԫ1.
		 class A
		 {
		    int GetID();
		 };
		 extern A a;         //����д��
		 static extern A a; //������д����local static�������non-locak static
		 ���뵥Ԫ.
		 class B
		 {
		   int flag=a.GetID();
		 };
	*/
	cout << "�չ��չ�" << endl;
	return 0;
}