/**************************************************************
     function：测试一下"Effective C++"该书第一章
	           全部内容来自该书。
	 author：Demon
	 Time:2017/10/29
***************************************************************/

#include<iostream>
using namespace std;
//●rule 1:View C++ as a federation languages



//●rule 2：Prefer const,enum and inline to #define


//●rule 3：Use const whenever possible
  

//●rule 4：Make sure that the objects are initialized before they are used

int main()
{

	//★View C++ as a federation languages
	

	//★Prefer const,enum and inline to #define
	/*
	1.对于单纯的常量，最好用const或者enum替代#define
	2.特殊情况1：定义常量指针，常量定义通常放在头文件中，(以便被不同的源码包含）
	  有必要将指针和指针所指之物声明为const。
	char const* const p = "小结节";
	特殊情况2：定义class 专属常量，用const或者enum(不可以取一个enum地址）
	3.对于形式函数的宏，最好改用inline替代#define
	*/

	//★Use const whenever possible
	/*
	    1.尽可能使用const（比如operator*，返回值可以加个const）
	    原因：将某些东西声明为const，可以帮助编译器侦测出错误。
		      const可以被施加于任何作用域内的对象，函数参数，
			  函数返回值，成员函数等等。
	    2.当const和non-const成员函数有着实质等价的实现时，令
		  non-const本版成员函数调用const本版成员函数可以避免
		  代码重复。
	*/

	//★Make sure that the objects are initialized before they are used
	/*
	   1.为内置类型进行手工初始化，因为C++不保证初始化它们。
	   2.构造函数最好使用成员初始值列，而不要在构造函数中使用
	     赋值操作。注意：初始化列列出的成员变量其排序应该
		 和它们在class的声明顺序相同的。
	   3.为了避免“跨编译单元之初始化次序"问题，用local static对象
	     替代non-local static

		 编译单元1.
		 class A
		 {
		    public:
		    int GetID();
		 };
		 extern A a;         //不好写法
		 static extern A a; //这样子写，用local static对象替代non-local static
		 编译单元2.
		 class B
		 {
		   public:
		   int flag=a.GetID();
		 };
	*/
	cout << "收工收工" << endl;
	return 0;
}
