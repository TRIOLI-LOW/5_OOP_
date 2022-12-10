
#include <iostream>
#include <Windows.h>


class figure {
private:
	int sides = 0;
	std::string name = "Фигура";

protected:
	figure(int sides, std::string name) {
		this->sides = sides;
		this->name = name;
	};
public:

	figure() : figure (0,"Фигура") {
	std::cout << "Колличество сторон: \n";

}
	void get_print() {
		std::cout << name << ": ";
		std::cout << sides << std::endl;
	}
	

};
class tri : public figure {
public:
	tri() : figure(3,"Треугольник") {
	
	}
};
class quadre : public figure {
public:
	quadre() : figure(4, "Квадрат") {
		
	}
};

int main()
{
	SetConsoleCP(1251);
	SetConsoleOutputCP(1251);
	
	figure f;
	f.get_print();
	tri tr;
	tr.get_print();
	quadre q;
	q.get_print();




}


