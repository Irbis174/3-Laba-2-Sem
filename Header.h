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
		cout << "Какое расстение?" << endl; cin >> name;
		cout << "В какое время года даёт плоды?" << endl; cin >> season;
		cout << "Сколько даёт плодов?" << endl; cin >> cnt;
	}
	Plants(string name, string season, int cnt) : name(name), season(season), cnt(cnt) {}
	virtual ~Plants()
	{
		cout << "Деструктор для растения вызван" << endl;
	};
	virtual void output() = 0;
	void info()
	{
		cout << "Растения - это биологическое царство" << endl;
	}
};

class Apple : virtual public Plants
{
protected:
	string answer, yes;
public:
	Apple()
	{
		cout << "Здравствуйте!" << endl; cin >> answer;
		cout << "Может пойдём дальше?" << endl; cin >> yes;
	}
	Apple(string answer, string yes) : answer(answer), yes(yes) {};
	~Apple()
	{
		cout << "Деструктор для яблока вызван" << endl;
	}
	void hello()
	{
	 	cout << "метод из класса Apple" << endl;
	}
	void output() override
	{
		cout << "Яблоко может: упасть, быть сладким, сгнить" << endl;
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
		cout << "Как дела?" << endl; cin >> question;
		cout << "Точно?" << endl; cin >> variable;
	}
	Cherry(string question, string variable): question(question), variable(variable) {};
	~Cherry()
	{
		cout << "Деструктор для вишни вызван" << endl;
	}
	void quest()
	{
	cout << "Метод из класса Cherry" << endl;
	}
	void output() override
	{
		cout << "Вишня может: расти, быть кислой" << endl;
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
		cout << "Просто введите число (не спрашивайте зачем)" << endl; cin >> number;
		cout << "А может ещё что-то введёте?" << endl; cin >> what_for;
	}
	Pear(int number, string what_for);
	~Pear()
	{
		cout << "Деструктор для груши вызван" << endl;
	}
	void idk()
	{
	cout << "Метод из класса Pear" << endl;
	}
	void output() override
	{
		cout << "Груша может: быть вкусной, съеденной" << endl;
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
		cout << "Надеюсь, что эта лаба была сделана верно" << endl; cin >> untitled;
		while (true)
		{
			cout << "Какая оценка будет за эту лабу?" << endl; cin >> fifteen;
			if (fifteen == 15)
			{
				cout << "Верно! Я полностью согласен с такой оценкой!" << endl;
				break;
			}
			else
			{
				cout << "Неправильно, должна быть другая оценка" << endl;
			}
		}
	}
	Apple_Cherry(string untitled, int fifteen) : untitled(untitled), fifteen(fifteen) {};
	~Apple_Cherry()
	{
		cout << "Деструктор для Яблока-Вишни вызван" << endl;
	}
	void no_idea()
	{
		cout << "Метод из класса Apple_Cherry" << endl;
	}
	void output() override final
	{
		cout << "Гибрид яблока и вишни может быть: интересным, съедобным" << endl;
	}
};

class Apple_Pear final : public Apple, public Pear
{
protected:
	string reaction, end;
public:
	Apple_Pear()
	{
		cout << "Оно разговаривает!?" << endl; cin >> reaction;
		cout << "Да-да, прошлый класс был не последним, но это точно конец" << endl; cin >> end;
	}
	Apple_Pear(string reaction, string end) : reaction(reaction), end(end) {};
	~Apple_Pear()
	{
		cout << "Деструктор для Яблока-Груши вызван" << endl;
	}
	void what()
	{
		cout << "Метод из класса Apple_Pear" << endl;
	}
	void output()  override final
	{
		cout << "Гибрид яблока и груши может быть: странным, несъедобным" << endl;
	}
}; 
