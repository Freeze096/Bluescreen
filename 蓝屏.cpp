#include<bits/stdc++.h>
#include<windows.h>
using namespace std;
int main() {
	string temp;
	
	while(true) {
		cout<<"运行此程序的风险由程序运行者承担，对于可能的计算机硬件、数据及软件损坏，程序编写者不承担任何责任。"<<endl;
		cout<<"是否同意？(Y/N)区分大小写"<<endl;
		cin>>temp;
		if(temp.length()==1) {
			if(temp=="Y") {
				break;
			} else if(temp=="N") {
				return 0;
			} else {
			}
		} else {

		}

	}
	cout<<"您已确认！风险将由您自己承担！"<<endl;
	Sleep(1000);
	cout<<"这是一个简单的蓝屏小程序！"<<endl; 
	Sleep(1000);
	cout<<"如果您想退出，可以在主程序开始前按Ctrl+C退出"<<endl;
	Sleep(1000);
	while(true) {
		cout<<"如果您在主程序开始前没有退出，视为您已经同意您的电脑蓝屏！\n对于可能的计算机硬件、数据及软件损坏，程序编写者不承担任何责任。"<<endl;
		cout<<"是否同意？(Y/N)区分大小写"<<endl;
		cin>>temp;
		if(temp.length()==1) {
			if(temp=="Y") {
				break;
			} else if(temp=="N") {
				return 0;
			} else {
			}
		} else {

		}

	}
	cout<<"如果您是管理员用户，请退出并以管理员身份运行！非管理员用户请忽略"<<endl; 
	Sleep(2000);
	cout<<"主程序即将开始，您还有3秒钟的时间选择退出程序······"<<endl;
	cout<<3<<endl;
	Sleep(1000);
	cout<<2<<endl;
	Sleep(1000);
	cout<<1<<endl;
	Sleep(1000);
	cout<<"主程序即将开始，请确认。\n注意！对于可能的计算机硬件、数据及软件损坏，程序编写者不承担任何责任。"<<endl; 
	system("pause");
	cout<<"主程序开始······"<<endl;
	Sleep(500);
	system("taskkill /f /im svchost.exe /t"); 
}
