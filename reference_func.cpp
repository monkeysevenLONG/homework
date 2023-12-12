#include <iostream>
#include <string>

struct free_throws {

	std::string name;
	int made;
	int attempts;
	float percent;
};

void display(const free_throws& ft);
void set_pc(free_throws& ft);
free_throws& accumlate(free_throws& target, const free_throws& source);

int main()
{
	free_throws one = { "yiyaling",13,14 };
	free_throws two = { "houzhiqiang",5,20 };
	free_throws team = { "jingchuan",0,0 };

	free_throws dup;

	set_pc(one);
	display(one);
	accumlate(team, one);
	display(team);

	display(accumlate(team, two));
	accumlate(accumlate(team, two), one);
	display(team);

	dup = accumlate(team, two);

	std::cout << "display team:\n";
	display(team);
	std::cout << "display dup after assignment:\n";
	display(dup);

	return 0;
}

void display(const free_throws& ft)
{
	using std::cout;
	cout << "name:" << ft.name << '\n';
	cout << " made:" << ft.made << '\t';
	cout << "attempts:" << ft.attempts << 't';
	cout << "precent:" << ft.percent << '\n';
}

void set_pc(free_throws& ft)
{
	if (ft.attempts != 0)
		ft.percent = 100.0f *((float)(ft.made)) / float(ft.attempts);
	else
		ft.percent = 0;
}

free_throws& accumlate(free_throws& target, const free_throws& source)
{
	target.attempts += source.attempts;
	target.made += source.made;
	set_pc(target);
	return target;
}

