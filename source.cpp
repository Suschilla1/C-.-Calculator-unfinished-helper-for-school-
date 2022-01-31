#include <iostream>
#include <windows.h>
using namespace std;
int main()
{
	int x;
	int y{};
	int z;
	int a{};
	int b{};
	int c{};
	int k{};
	int j;
	int g;
	int h;
	int p{};
	string name;
	cout << "Welcome to COMPLEX CALCULAYOR V 1.0(BETA)" << endl;
	cout << "BY Poyraz" << endl;
	PlaySound(L"complex.wav", NULL, SND_SYNC);
	cout << "Press 1 to proceed or 2 to cancel the process" << endl;
	cin >> j;
	if ((int)j == 1)
	{


		cout << "Please enter your name" << endl;
		cin >> name;
		cout << "Thank you," << name << endl;
		bool played = PlaySound(L"Jarvis welcome back sir. IRONMAN.wav", NULL, SND_SYNC);
		cout << " Code" << played << "Initialized" << endl;
		PlaySound(L"c1in.wav", NULL, SND_SYNC);
		cout << "How may I help, Sir" << endl;
		PlaySound(L"howmayihelp.wav", NULL, SND_SYNC);
		cout << "Option 1 calculator or Option 2(Underworks)" << endl;
		PlaySound(L"1or2.wav", NULL, SND_SYNC);
		cin >> x;
		if ((int)x == 1)
		{
			{
				cout << "Please choose amount of variables 2-5" << endl;
				PlaySound(L"welcome.wav", NULL, SND_SYNC);
				cin >> y;
			}
			if ((int)y == 4)
			{
				cout << "Your selected number of variables is " << (int)y << endl;
				cin >> a;
				cin >> b;
				cin >> c;
				cin >> g;


				cout << "Please select a mathemetical equation " << endl;
				PlaySound(L"matheq.wav", NULL, SND_SYNC);
				cout << "Addition-1,Substraction-2, Multiplacation-3,Division-4,All-5" << endl;
				cin >> z;


				if ((int)z == 1)
				{
					cout << "You chose option" << (int)z << endl;
					PlaySound(L"add.wav", NULL, SND_SYNC);
					cout << "Your answer is" << a + b + c + g << endl;
				}
				else if ((int)z == 2)
				{
					cout << "You chose option" << (int)z << endl;
					PlaySound(L"sub.wav", NULL, SND_SYNC);
					cout << "Your answer is" << a - b - c - g << endl;
				}
				else if ((int)z == 3)
				{
					cout << "You chose option" << (int)z << endl;
					PlaySound(L"multi.wav", NULL, SND_SYNC);
					cout << "Your answer is" << a * b * c * g << endl;
				}
				else if ((int)z == 4)
				{
					cout << "You chose option" << (int)z << endl;
					PlaySound(L"dib,wav", NULL, SND_SYNC);
					cout << "Your answer is" << (float)a / b / c / g << endl;
				}
				else if ((int)z == 5)
				{
					cout << "You chose option" << (int)z << endl;
					PlaySound(L"all.wav", NULL, SND_SYNC);
					cout << "Your answers are " << endl;
					cout << "Addiition" << a + b + c + g << endl;
					cout << "Substraction" << a - b - c - g << endl;
					cout << "Multiplacation" << a * b * c * g << endl;
					cout << "Division" << (float)a / b / c / g << endl;
					cout << "Anything else I can help with sir" << endl;
					PlaySound(L"end.wav", NULL, SND_SYNC);
					cout << "Option 1 (NO) or Option 2 (underworks) " << endl;
					cin >> k;
					if ((int)k == 1)
					{
						cout << "Have a nice day" << endl;
						//add sound effect
						return 0;
					}
					else if ((int)k == 2)
					{
						cout << "INVALID/OPTION UNDERWORKS" << endl;
						PlaySound(L"invin.wav", NULL, SND_SYNC);
						return 0;
					}
					else if ((int)k > 2)
					{
						cout << "INVALID" << endl;
						PlaySound(L"invin.wav", NULL, SND_SYNC);
					}
					else if ((int)k < 1)
					{
						cout << "INVALID" << endl;
						PlaySound(L"invin.wav", NULL, SND_SYNC);
					}
					return 0;
				}
			}
			if ((int)y == 2)
			{
				{
					cout << "Your selected number of variables is " << (int)y << endl;
					cin >> a;
					cin >> b;

				}

				cout << "Please select a mathemetical equation " << endl;
				PlaySound(L"matheq.wav", NULL, SND_SYNC);
				cout << "Addition-1,Substraction-2, Multiplacation-3,Division-4,All-5" << endl;
				cin >> z;


				if ((int)z == 1)
				{
					cout << "You chose option" << (int)z << endl;
					PlaySound(L"add.wav", NULL, SND_SYNC);
					//PlaySound add to code pls
					cout << "Your answer is" << a + b << endl;
				}
				else if ((int)z == 2)
				{
					cout << "You chose option" << (int)z << endl;
					PlaySound(L"sub.wav", NULL, SND_SYNC);
					cout << "Your answer is" << a - b << endl;
				}
				else if ((int)z == 3)
				{
					cout << "You chose option" << (int)z << endl;
					PlaySound(L"multi.wav", NULL, SND_SYNC);
					cout << "Your answer is" << a * b << endl;
				}
				else if ((int)z == 4)
				{
					cout << "You chose option" << (int)z << endl;
					PlaySound(L"dib.wav", NULL, SND_SYNC);
					cout << "Your answer is" << (float)a / b << endl;
				}
				else if ((int)z == 5)
				{
					cout << "You chose option" << (int)z << endl;
					PlaySound(L"all.wav", NULL, SND_SYNC);
					cout << "Your answers are " << endl;
					cout << "Addiition" << a + b << endl;
					cout << "Substraction" << a - b << endl;
					cout << "Multiplacation" << a * b << endl;
					cout << "Division" << (float)a / b << endl;
					cout << "Anything else I can help with sir" << endl;
					PlaySound(L"end.wav", NULL, SND_SYNC);
					cout << "Option 1 (NO) or Option 2 (underworks) " << endl;
					cin >> k;
					if ((int)k == 1)
					{
						cout << "Have a nice day" << endl;
						//add sound effect
						return 0;
					}
					else if ((int)k == 2)
					{
						cout << "INVALID/OPTION UNDERWORKS" << endl;
						PlaySound(L"invin.wav", NULL, SND_SYNC);
						return 0;
					}
					else if ((int)k > 2)
					{
						cout << "INVALID" << endl;
						PlaySound(L"invin.wav", NULL, SND_SYNC);
					}
					else if ((int)k < 1)
					{
						cout << "INVALID" << endl;
						PlaySound(L"invin.wav", NULL, SND_SYNC);
					}
				}
			}
			if ((int)y == 5)
			{
				cout << "Your selected number of variables is " << (int)y << endl;
				cin >> a;
				cin >> b;
				cin >> c;
				cin >> g;
				cin >> j;


				cout << "Please select a mathemetical equation " << endl;
				PlaySound(L"matheq.wav", NULL, SND_SYNC);
				cout << "Addition-1,Substraction-2, Multiplacation-3,Division-4,All-5" << endl;
				cin >> z;


				if ((int)z == 1)
				{
					cout << "You chose option" << (int)z << endl;
					PlaySound(L"add.wav", NULL, SND_SYNC);
					cout << "Your answer is" << a + b + c + g + j << endl;
				}
				else if ((int)z == 2)
				{
					cout << "You chose option" << (int)z << endl;
					PlaySound(L"sub.wav", NULL, SND_SYNC);
					cout << "Your answer is" << a - b - c - g - j << endl;
				}
				else if ((int)z == 3)
				{
					cout << "You chose option" << (int)z << endl;
					PlaySound(L"multi.wav", NULL, SND_SYNC);
					cout << "Your answer is" << a * b * c * g * j << endl;
				}
				else if ((int)z == 4)
				{
					cout << "You chose option" << (int)z << endl;
					PlaySound(L"dib,wav", NULL, SND_SYNC);
					cout << "Your answer is" << (float)a / b / c / g / j << endl;
				}
				else if ((int)z == 5)
				{
					cout << "You chose option" << (int)z << endl;
					PlaySound(L"all.wav", NULL, SND_SYNC);
					cout << "Your answers are " << endl;
					cout << "Addiition" << a + b + c + g + j << endl;
					cout << "Substraction" << a - b - c - g - j << endl;
					cout << "Multiplacation" << a * b * c * g * j << endl;
					cout << "Division" << (float)a / b / c / g << endl;
					cout << "Anything else I can help with sir" << endl;
					PlaySound(L"end.wav", NULL, SND_SYNC);
					cout << "Option 1 (NO) or Option 2 (underworks) " << endl;
					cin >> k;
					if ((int)k == 1)
					{
						cout << "Have a nice day" << endl;
						//add sound effect
						return 0;
					}
					else if ((int)k == 2)
					{
						cout << "INVALID/OPTION UNDERWORKS" << endl;
						PlaySound(L"invin.wav", NULL, SND_SYNC);
						return 0;
					}
					else if ((int)k > 2)
					{
						cout << "INVALID" << endl;
						PlaySound(L"invin.wav", NULL, SND_SYNC);
					}
					else if ((int)k < 1)
					{
						cout << "INVALID" << endl;
						PlaySound(L"invin.wav", NULL, SND_SYNC);
					}
					return 0;
				}
			}
			if ((int)y == 2)
			{
				{
					cout << "Your selected number of variables is " << (int)y << endl;
					cin >> a;
					cin >> b;

				}

				cout << "Please select a mathemetical equation " << endl;
				PlaySound(L"matheq.wav", NULL, SND_SYNC);
				cout << "Addition-1,Substraction-2, Multiplacation-3,Division-4,All-5" << endl;
				cin >> z;


				if ((int)z == 1)
				{
					cout << "You chose option" << (int)z << endl;
					PlaySound(L"add.wav", NULL, SND_SYNC);
					//PlaySound add to code pls
					cout << "Your answer is" << a + b << endl;
				}
				else if ((int)z == 2)
				{
					cout << "You chose option" << (int)z << endl;
					PlaySound(L"sub.wav", NULL, SND_SYNC);
					cout << "Your answer is" << a - b << endl;
				}
				else if ((int)z == 3)
				{
					cout << "You chose option" << (int)z << endl;
					PlaySound(L"multi.wav", NULL, SND_SYNC);
					cout << "Your answer is" << a * b << endl;
				}
				else if ((int)z == 4)
				{
					cout << "You chose option" << (int)z << endl;
					PlaySound(L"dib.wav", NULL, SND_SYNC);
					cout << "Your answer is" << (float)a / b << endl;
				}
				else if ((int)z == 5)
				{
					cout << "You chose option" << (int)z << endl;
					PlaySound(L"all.wav", NULL, SND_SYNC);
					cout << "Your answers are " << endl;
					cout << "Addiition" << a + b << endl;
					cout << "Substraction" << a - b << endl;
					cout << "Multiplacation" << a * b << endl;
					cout << "Division" << (float)a / b << endl;
					cout << "Anything else I can help with sir" << endl;
					PlaySound(L"end.wav", NULL, SND_SYNC);
					cout << "Option 1 (NO) or Option 2 (underworks) " << endl;
					cin >> k;
					if ((int)k == 1)
					{
						cout << "Have a nice day" << endl;
						//add sound effect
						return 0;
					}
					else if ((int)k == 2)
					{
						cout << "INVALID/OPTION UNDERWORKS" << endl;
						PlaySound(L"invin.wav", NULL, SND_SYNC);
						return 0;
					}
					else if ((int)k > 2)
					{
						cout << "INVALID" << endl;
						PlaySound(L"invin.wav", NULL, SND_SYNC);
					}
					else if ((int)k < 1)
					{
						cout << "INVALID" << endl;
						PlaySound(L"invin.wav", NULL, SND_SYNC);
					}
				}
			}
			else if ((int)y == 3)
			{
				cout << "Your selected number of variables is " << (int)y << endl;
				cin >> a;
				cin >> b;
				cin >> c;


				cout << "Please select a mathemetical equation " << endl;
				PlaySound(L"matheq.wav", NULL, SND_SYNC);
				cout << "Addition-1,Substraction-2, Multiplacation-3,Division-4,All-5" << endl;
				cin >> z;


				if ((int)z == 1)
				{
					cout << "You chose option" << (int)z << endl;
					PlaySound(L"add.wav", NULL, SND_SYNC);
					cout << "Your answer is" << a + b + c << endl;
				}
				else if ((int)z == 2)
				{
					cout << "You chose option" << (int)z << endl;
					PlaySound(L"sub.wav", NULL, SND_SYNC);
					cout << "Your answer is" << a - b - c << endl;
				}
				else if ((int)z == 3)
				{
					cout << "You chose option" << (int)z << endl;
					PlaySound(L"multi.wav", NULL, SND_SYNC);
					cout << "Your answer is" << a * b * c << endl;
				}
				else if ((int)z == 4)
				{
					cout << "You chose option" << (int)z << endl;
					PlaySound(L"dib,wav", NULL, SND_SYNC);
					cout << "Your answer is" << a / b / c << endl;
				}
				else if ((int)z == 5)
				{
					cout << "You chose option" << (int)z << endl;
					PlaySound(L"all.wav", NULL, SND_SYNC);
					cout << "Your answers are " << endl;
					cout << "Addiition" << a + b + c << endl;
					cout << "Substraction" << a - b - c << endl;
					cout << "Multiplacation" << a * b * c << endl;
					cout << "Division" << (float)a / b / c << endl;
					cout << "Anything else I can help with sir" << endl;
					PlaySound(L"end.wav", NULL, SND_SYNC);
					cout << "Option 1 (NO) or Option 2 (underworks) " << endl;
					cin >> k;
					if ((int)k == 1)
					{
						cout << "Have a nice day" << endl;
						//add sound effect
						return 0;
					}
					else if ((int)k == 2)
					{
						cout << "INVALID/OPTION UNDERWORKS" << endl;
						PlaySound(L"invin.wav", NULL, SND_SYNC);
						return 0;
					}
					else if ((int)k > 2)
					{
						cout << "INVALID" << endl;
						PlaySound(L"invin.wav", NULL, SND_SYNC);
					}
					else if ((int)k < 1)
					{
						cout << "INVALID" << endl;
						PlaySound(L"invin.wav", NULL, SND_SYNC);
					}
					if ((int)k == 1)
					{
						cout << "Have a nice day" << endl;
					}



				}
				return 0;
				if ((int)y > 5 || y < 2)
					cout << "INVALID" << endl;
				PlaySound(L"invin.wav", NULL, SND_SYNC);
			}

		}



	}
	else if ((int)j == 2)
	{
		cout << "Welcome to grade giver 1.0 beta by Poyraz" << endl;
		// add playsound command later on in the coding process
		cout << "Please choose an option 1- Numeral to Alphabetical" << endl;
		cin >> h;
		cout << "Thank you, your selected option is" << h << endl;
	}
}
