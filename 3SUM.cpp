/*Given an array a of positive integers with length n, determine if there exist three distinct indices i, j, k such that ai+aj+ak ends in the digit 3.

Input
The first line contains an integer t (1≤t≤1000) — the number of test cases.

The first line of each test case contains an integer n (3≤n≤2⋅105) — the length of the array.

The second line of each test case contains n integers a1,a2,…,an (1≤ai≤109) — the elements of the array.

The sum of n across all test cases does not exceed 2⋅105.

Output
Output t lines, each of which contains the answer to the corresponding test case. Output "YES" if there exist three distinct indices i, j, k satisfying the constraints in the statement, and "NO" otherwise.

You can output the answer in any case (for example, the strings "yEs", "yes", "Yes" and "YES" will be recognized as a positive answer).*/

#include <iostream>
#include <math.h>
#include <map>
#include <vector>
using namespace std; 
int sum = 0;
int ts, tr, l;

vector<int> v;

map<int,int> mapa;
bool buscar(int sum)
{
	if (sum == 3)
	{
		return true;
	}
	return false;
}
int sumar(int i, int j, int k)
{   
	sum = v[k] + v[i] + v[j];
	sum = sum%10;
	return sum;
}
void capturar(int tr)
{
	for (int i = 0; i < tr; i++)
	{
		int num1;
		cin >> num1;
		num1 = num1%10; 
		mapa[num1]++;
	}
	for (auto x : mapa)
		{
			if(x.second > 3){
			do{
             x.second--;
			}while(x.second > 3);
			}
			for (int i = 0; i < x.second; i++)
			{
				v.push_back(x.first);
			}
		}
}
void leer(int tr, bool tf)
{

	

	for (int i = tr; i >=0 ; i--)
	{
		if (tf == false)
		{
			break;
		}
		for (int j = i + 1; j < v.size(); j++)
		{
			if (tf == false)
			{
				break;
			}
			for (int k = j + 1; k < v.size(); k++)
			{
				if (buscar(sumar(i, j, k)))
				{
					cout << "YES";
					tf = false;
					break;
				} 
				sum = 0;
			}
		}
	}
	if (tf)
	{
		cout << "NO";
		
	}
}

int main()
{
	bool tf = true;
	cin >> ts;
	while (ts--)
	{
		cin >> tr;
		capturar(tr);
		leer(tr, tf);
		cout << endl;
		mapa.clear();
		v.clear();
	}

	return 0;
}
