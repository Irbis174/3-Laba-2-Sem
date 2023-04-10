#include <iostream>

using namespace std;


class Plants
{
protected:
	string name, season;
	int cnt;
public:
	Plants()
	{
		cout << "����� ���������?" << endl; cin >> name;
		cout << "� ����� ����� ���� ��� �����?" << endl; cin >> season;
		cout << "������� ��� ������?" << endl; cin >> cnt;
	}
	Plants(string name, string season, int cnt) : name(name), season(season), cnt(cnt) {}
	virtual ~Plants()
	{
		cout << "���������� ��� �������� ������" << endl;
	};
	virtual void output() = 0;
	void info()
	{
		cout << "�������� - ��� ������������� �������" << endl;
	}
};

class Apple : virtual public Plants
{
protected:
	string answer, yes;
public:
	Apple()
	{
		cout << "������������!" << endl; cin >> answer;
		cout << "����� ����� ������?" << endl; cin >> yes;
	}
	Apple(string answer, string yes) : answer(answer), yes(yes) {};
	~Apple()
	{
		cout << "���������� ��� ������ ������" << endl;
	}
	void hello()
	{
	 	cout << "����� �� ������ Apple" << endl;
	}
	void output() override
	{
		cout << "������ �����: ������, ���� �������, ������" << endl;
	}
};

class Cherry : virtual public Plants
{
protected:
	string question;
	string variable;
public:
	Cherry()
	{
		cout << "��� ����?" << endl; cin >> question;
		cout << "�����?" << endl; cin >> variable;
	}
	Cherry(string question, string variable): question(question), variable(variable) {};
	~Cherry()
	{
		cout << "���������� ��� ����� ������" << endl;
	}
	void quest()
	{
	cout << "����� �� ������ Cherry" << endl;
	}
	void output() override
	{
		cout << "����� �����: �����, ���� ������" << endl;
	}
};

class Pear : virtual public Plants
{
protected:
	int number;
	string what_for;
public:
	Pear()
	{
		cout << "������ ������� ����� (�� ����������� �����)" << endl; cin >> number;
		cout << "� ����� ��� ���-�� ������?" << endl; cin >> what_for;
	}
	Pear(int number, string what_for);
	~Pear()
	{
		cout << "���������� ��� ����� ������" << endl;
	}
	void idk()
	{
	cout << "����� �� ������ Pear" << endl;
	}
	void output() override
	{
		cout << "����� �����: ���� �������, ���������" << endl;
	}
};

class Apple_Cherry final : public Apple, public Cherry
{
protected:
	string untitled;
	int fifteen;
public:
	Apple_Cherry()
	{
		cout << "�������, ��� ��� ���� ���� ������� �����" << endl; cin >> untitled;
		while (true)
		{
			cout << "����� ������ ����� �� ��� ����?" << endl; cin >> fifteen;
			if (fifteen == 15)
			{
				cout << "�����! � ��������� �������� � ����� �������!" << endl;
				break;
			}
			else
			{
				cout << "�����������, ������ ���� ������ ������" << endl;
			}
		}
	}
	Apple_Cherry(string untitled, int fifteen) : untitled(untitled), fifteen(fifteen) {};
	~Apple_Cherry()
	{
		cout << "���������� ��� ������-����� ������" << endl;
	}
	void no_idea()
	{
		cout << "����� �� ������ Apple_Cherry" << endl;
	}
	void output() override final
	{
		cout << "������ ������ � ����� ����� ����: ����������, ���������" << endl;
	}
};

class Apple_Pear final : public Apple, public Pear
{
protected:
	string reaction, end;
public:
	Apple_Pear()
	{
		cout << "��� �������������!?" << endl; cin >> reaction;
		cout << "��-��, ������� ����� ��� �� ���������, �� ��� ����� �����" << endl; cin >> end;
	}
	Apple_Pear(string reaction, string end) : reaction(reaction), end(end) {};
	~Apple_Pear()
	{
		cout << "���������� ��� ������-����� ������" << endl;
	}
	void what()
	{
		cout << "����� �� ������ Apple_Pear" << endl;
	}
	void output()  override final
	{
		cout << "������ ������ � ����� ����� ����: ��������, �����������" << endl;
	}
}; 
