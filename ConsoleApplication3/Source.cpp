#include <stdio.h>
#include<locale.h>
#include <iostream>
#include<stdint.h>
#include<math.h>
#include<stdlib.h>
#include<time.h>
using namespace std;


char u;
void main()
{
	setlocale(LC_ALL, "Russian");
	cout << "������ ����� ���������������� ����������? Y/N" << endl;
		cin >> u;
		if (u == 'y')
		{
			cout << "�� ������? y/n" << endl;
			cin >> u;
			if (u =='y')
			{
			start:
				cout << "������ ����������? y/n" << endl;
				cin >> u;
				if (u == 'y')
				{
					cout << "����� ����? y/n" << endl;
					cin >> u;
					if (u == 'y')
					{
						int i;
						cout << "������ ������ ��������?" << endl;
						cout << "1. �� ����" << endl;
						cout << "2. ��" << endl;
						cout << "3. ���" << endl;
						cin >> i;
						switch (i)
						{
						case 1: cout << "�������" << endl;
						case 2: {
							cout << "������ �������� ������� �����? y/n" << endl;
							cin >> u;
							if (u == 'y')
							{
								cout << "�����" << endl;
							}
							else
							{
								cout << "������ � ����, ��� ����� �������� � �������, ���� ���� �� ����� �������? y/n" << endl;
								cin >> u;
								if (u == 'y')
								{
									cout << "�������" << endl;
								}
								else
								{
									cout << "��������" << endl;
								}
							}
						}break;
							case 3:{
								cout << "... � ����? y/n" << endl;
								cin >> u;
								if (u == 'y')
								{
									cout << "��������" << endl;
								}
								else
								{
									cout << "� ��� ���� �������� �����? y/n" << endl;
									cin >> u;
									if (u == 'y')
									{
										cout << "�����" << endl;
									}
									else
									{
										cout << "�����" << endl;
									}
								}
							}break;
						}
					}
					else
					{
						cout << "�� ��������� ������? y/n" << endl;
						cin >> u;
						if (u == 'y')
						{
							cout << "����������" << endl;
						}
						else
						{
							cout << "�����" << endl;
						}

					}
				}
				else
				{
					cout << "������ ���������� �� 8 ����� � ����? y/n" << endl;
					cin >> u;
					if (u == 'y')
					{
						cout << "������ ����� �����? y/n" << endl;
						cin >> u;
						if (u == 'y')
						{
							cout << "������" << endl;
						}
						else
						{
							cout << "�������" << endl;
						}
					}
					else
					{
						cout << "���� ������? y/n" << endl;
						cin >> u;
						if (u == 'y')
						{
							cout << "����" << endl;
						}
						else
						{
							cout << "����" << endl;
						}
					}
				}
			}
			
			else
			{
				cout << "������ ������? y/n" << endl;
				cin >> u;
				if (u == 'y')
				{
					cout << "�������� � ������!" << endl;
				}
				else
					goto start;
			}
		}
		else
		{
			cout << "������ ����������� � ���������? y/n" << endl;
			cin >> u;
			if (u == 'y')
			{
				cout << "������ ��������? y/n" << endl;
				cin >> u;
				if (u == 'y')
				{
					cout << "������ ������? y/n" << endl;
					cin >> u;
					if (u == 'y')
					{
						cout << "������" << endl;
					}
					else
					{
						cout << "����������" <<endl;
					}
				}
				else
				{
					cout << "�� ������? y/n" << endl;
					cin >> u;
					if (u == 'y')
					{
						cout << "������� �����" << endl;
					}
					else
					{
						cout << "�������" << endl;
					}
				}
			}
			else
			{
				cout << "������ ����������� � �������? y/n" << endl;
				cin >> u;
				if (u == 'y')
				{
					
					cout << "�� ������? y/n" << endl;
					cin >> u;
					if (u == 'y')
					{
						cout << "������� �����" << endl;
					}
					else
					{
						cout << "�������" << endl;
					}

				}
				else
				{
					cout << "�����" << endl;
				}
			}
		}
}
