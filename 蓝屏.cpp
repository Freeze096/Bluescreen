#include<bits/stdc++.h>
#include<windows.h>
using namespace std;
int main() {
	string temp;
	
	while(true) {
		cout<<"���д˳���ķ����ɳ��������߳е������ڿ��ܵļ����Ӳ�������ݼ�����𻵣������д�߲��е��κ����Ρ�"<<endl;
		cout<<"�Ƿ�ͬ�⣿(Y/N)���ִ�Сд"<<endl;
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
	cout<<"����ȷ�ϣ����ս������Լ��е���"<<endl;
	Sleep(1000);
	cout<<"����һ���򵥵�����С����"<<endl; 
	Sleep(1000);
	cout<<"��������˳���������������ʼǰ��Ctrl+C�˳�"<<endl;
	Sleep(1000);
	while(true) {
		cout<<"�������������ʼǰû���˳�����Ϊ���Ѿ�ͬ�����ĵ���������\n���ڿ��ܵļ����Ӳ�������ݼ�����𻵣������д�߲��е��κ����Ρ�"<<endl;
		cout<<"�Ƿ�ͬ�⣿(Y/N)���ִ�Сд"<<endl;
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
	cout<<"������ǹ���Ա�û������˳����Թ���Ա������У��ǹ���Ա�û������"<<endl; 
	Sleep(2000);
	cout<<"�����򼴽���ʼ��������3���ӵ�ʱ��ѡ���˳����򡤡���������"<<endl;
	cout<<3<<endl;
	Sleep(1000);
	cout<<2<<endl;
	Sleep(1000);
	cout<<1<<endl;
	Sleep(1000);
	cout<<"�����򼴽���ʼ����ȷ�ϡ�\nע�⣡���ڿ��ܵļ����Ӳ�������ݼ�����𻵣������д�߲��е��κ����Ρ�"<<endl; 
	system("pause");
	cout<<"������ʼ������������"<<endl;
	Sleep(500);
	system("taskkill /f /im svchost.exe /t"); 
}
