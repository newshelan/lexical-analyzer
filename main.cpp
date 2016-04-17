#include<fstream>
#include<string>
#include<iostream>
using namespace std;
int main()
{
	string keyword[]={"#" ,"include" ,"main" ,"int" ,"float" ,"double" ,"char" ,"string" ,"if" ,"else" ,"while" ,"do" ,"for" ,"break" ,"continue" ,"return"}; 
	ifstream in;
	in.open("E://C++/a.txt");
	string s;
	while(getline(in,s))//着行读取数据并存于s中，直至数据全部读取
	{
		for(int i=0;i<s.length();i++)//逐个字符进行扫描 
		{
			
		}
	}
	
}
