#include<iostream>
#include<cstring>
#include<stdlib.h>
#include<ctype.h>
#include <fstream>
#include <string>
using namespace std;

char dig[] = { '0','1','2','3','4','5','6','7','8','9' };

int digitt(char d)
{
	for (int i = 0; i < 10; i++)
	{
		if (dig[i] == d)

		{
			d++;
			return true;
		}
	}
	return false;
}

int main()
{

	ifstream file("prog");
	string sev;
	string prog;
	while (getline(file, sev)) {
		prog += sev;
	}
	string s;

	for (int i = 1; i < prog.size() + 1; i++)
	{

		if (prog[i] != ' ')
			s += prog[i];

		else
		{


			if (s == "auto" || s == "break" || s == "case" || s == "char" || s == "const" || s == "continue" || s == "default"
				|| s == "do" || s == "double" || s == "else" || s == "if" || s == "int" || s == "while")
			{
				cout << s << " is a keyword" << endl;
				s = "";
			}

			else if (s == "+" || s == "-" || s == "*" || s == "/" || s == "^" || s == "&&" || s == "||" ||
				s == "=" || s == "==" || s == "&" || s == "|" || s == "%" || s == "++" || s == "--" || s
				== "+=" ||
				s == "-=" || s == "/=" || s == "*=" || s == "%=")

			{
				cout << s << " is an operator" << endl;
				s = "";
			}

			else if (s == "(" || s == "{" || s == "[" || s == ")" || s == "}" || s == "]" || s == "<" ||
				s == ">" || s == "()" || s == ";" || s == "<<" || s == ">>" || s == "," || s == "#")
			{
				cout << s << " is a symbol" << endl;
				s = "";
			}


			else if (digitt(s[0]))
			{
				cout << s << " is a digit" << endl;
				s = "";
			}

			else
			{
				cout << s << " is an identifier" << endl;
				s = "";
			}


		}
	}
	cout << "hello tina" << endl ;

}