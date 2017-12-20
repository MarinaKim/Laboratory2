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
	cout << "Õîòèòå ñòàòü ïðîôåññèîíàëüíûì ìóçûêàíòîì? Y/N" << endl;
		cin >> u;
		if (u == 'y')
		{
			cout << "âû áîãàòû? y/n" << endl;
			cin >> u;
			if (u =='y')
			{
			start:
				cout << "Ëþáèòå îòðûâàòüñÿ? y/n" << endl;
				cin >> u;
				if (u == 'y')
				{
					cout << "Ïüåòå ïèâî? y/n" << endl;
					cin >> u;
					if (u == 'y')
					{
						int i;
						cout << "Õîòèòå èãðàòü êëàññèêó?" << endl;
						cout << "1. íå çíàþ" << endl;
						cout << "2. äà" << endl;
						cout << "3. íåò" << endl;
						cin >> i;
						switch (i)
						{
						case 1: cout << "ÒÐÎÌÁÎÍ" << endl;
						case 2: {
							cout << "Ãîòîâû ðàáîòàòü êðóãëûå ñóòêè? y/n" << endl;
							cin >> u;
							if (u == 'y')
							{
								cout << "ÃÎÁÎÉ" << endl;
							}
							else
							{
								cout << "Ãîòîâû ê òîìó, ÷òî áóäóò ïðîáëåìû ñ ðàáîòîé, äàæå åñëè âû êðóòî èãðàåòå? y/n" << endl;
								cin >> u;
								if (u == 'y')
								{
									cout << "ÊËÀÐÍÅÒ" << endl;
								}
								else
								{
									cout << "ÂÀËÒÎÐÍÀ" << endl;
								}
							}
						}break;
							case 3:{
								cout << "... à äæàç? y/n" << endl;
								cin >> u;
								if (u == 'y')
								{
									cout << "ÑÀÊÑÎÔÎÍ" << endl;
								}
								else
								{
									cout << "Ó âàñ åñòü íåìåöêèå êîðíè? y/n" << endl;
									cin >> u;
									if (u == 'y')
									{
										cout << "ÒÐÓÁÀ" << endl;
									}
									else
									{
										cout << "ÄÓÄÓÊ" << endl;
									}
								}
							}break;
						}
					}
					else
					{
						cout << "Âû ñòðàñòíàÿ íàòóðà? y/n" << endl;
						cin >> u;
						if (u == 'y')
						{
							cout << "ÂÈÎËÎÍ×ÅËÜ" << endl;
						}
						else
						{
							cout << "ÄÎÌÐÀ" << endl;
						}

					}
				}
				else
				{
					cout << "Ãîòîâû çàíèìàòüñÿ ïî 8 ÷àñîâ â äåíü? y/n" << endl;
					cin >> u;
					if (u == 'y')
					{
						cout << "Õîòèòå ó÷èòü äåòåé? y/n" << endl;
						cin >> u;
						if (u == 'y')
						{
							cout << "ÔËÅÉÒÀ" << endl;
						}
						else
						{
							cout << "ÑÊÐÈÏÊÀ" << endl;
						}
					}
					else
					{
						cout << "Íîòû çíàåòå? y/n" << endl;
						cin >> u;
						if (u == 'y')
						{
							cout << "ÀÐÔÀ" << endl;
						}
						else
						{
							cout << "ÀËÜÒ" << endl;
						}
					}
				}
			}
			
			else
			{
				cout << "ëþáèòå äåíüãè? y/n" << endl;
				cin >> u;
				if (u == 'y')
				{
					cout << "ÇÀÁÓÄÜÒÅ Î ÌÓÇÛÊÅ!" << endl;
				}
				else
					goto start;
			}
		}
		else
		{
			cout << "Õîòèòå âñòðå÷àòüñÿ ñ äåâóøêàìè? y/n" << endl;
			cin >> u;
			if (u == 'y')
			{
				cout << "Ëþáèòå ãëóïûøåê? y/n" << endl;
				cin >> u;
				if (u == 'y')
				{
					cout << "Ëþáèòå âûïèòü? y/n" << endl;
					cin >> u;
					if (u == 'y')
					{
						cout << "ÃÈÒÀÐÀ" << endl;
					}
					else
					{
						cout << "ÔÎÐÒÅÏÈÀÍÎ" <<endl;
					}
				}
				else
				{
					cout << "Âû ïàðåíü? y/n" << endl;
					cin >> u;
					if (u == 'y')
					{
						cout << "ÎÏÅÐÍÛÉ ÏÅÂÅÖ" << endl;
					}
					else
					{
						cout << "ÓÄÀÐÍÛÅ" << endl;
					}
				}
			}
			else
			{
				cout << "Õîòèòå âñòðå÷àòüñÿ ñ ïàðíÿìè? y/n" << endl;
				cin >> u;
				if (u == 'y')
				{
					
					cout << "Âû ïàðåíü? y/n" << endl;
					cin >> u;
					if (u == 'y')
					{
						cout << "ÎÏÅÐÍÛÉ ÏÅÂÅÖ" << endl;
					}
					else
					{
						cout << "ÓÄÀÐÍÛÅ" << endl;
					}

				}
				else
				{
					cout << "ÔÀÃÎÒ" << endl;
				}
			}
		}
}
