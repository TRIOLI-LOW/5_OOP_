#include<iostream>
#include<Windows.h>
class figure {
private:
	int sides = 0;
	std::string name = "Фигура";
public:
	figure() {
		get_print();
	}
	virtual bool chek() {
		if (sides == 0) {
			return true;
		}
		else return false;
	}
	virtual void get_print() {

		std::cout << name << ": " << std::endl;
			if (chek() == true) {
				std::cout << "Правильная" << std::endl;
			}
			else {
				std::cout << "Неправильная" << std::endl;
			}
		
		std::cout << "Колличество сторон: " << sides << std::endl;
	}




	

	
};
class triange : public figure {
private:
	int a = 0;
	int b = 0;
	int c = 0;

	int A = 0;
	int B = 0;
	int C = 0;
	int g = 0;

	int sides = 3;
	
	std::string name = " ";
protected:
	triange(int a, int b, int c, int A, int B, int C, std::string name) {
		this->a = a;
		this->b = b;
		this->c = c;

		this->A = A;
		this->B = B;
		this->C = C;
		
		this->name = name;
	}

public:

	triange() : triange(10, 20, 30, 50, 60, 70, "Треугольник") { get_print(); }
	bool chek() override {
		g = A + B + C;
		if (name == "Прямоугольный треугольник") {
			if ((C == 90) && (g == 180)) {
				return true;
			}
			else return false;	
		}
		else if (name == "Равносторонний треугольник") {
			if ((a == b == c) && (A == B == C == 60) ) {
				return true;
			}
			else return false; 
		}
		else if (name == "Равнобедренный треугольник") {
			if ( (A == C) && (a == c)) {
				return true;
			}
			else return false;
		}
		 else if (name == "Треугольник") {
			if ((A + B + C == 180) && (sides == 3)) {
				return true;
			}
			else return false; 
		}
	}
	void  get_print() override {
		std::cout << name << ": " << std::endl;
		if (chek() == true) {
			std::cout << "Правильная" << std::endl;
		}
		else {
			std::cout << "Неправильная" << std::endl;
		}

		std::cout << "Стороны:  a = " << a << ", b = " << b << ", c = " << c << std::endl;
		std::cout << "Углы:  A = " << A << ", B = " << B << ", C = " << C << std::endl;
		std::cout << std::endl;
	}

};

class rt_triange : public triange {
public:
	rt_triange() : triange(10,10, 20, 35, 60, 90, "Прямоугольный треугольник") { get_print(); }

};
class rvst_triange : public triange {
public:
	rvst_triange() : triange(10, 19, 20, 32, 11, 15, "Равносторонний треугольник") { get_print(); }
};
class rbd_triange : public triange {
public:
	rbd_triange() : triange(50, 20 ,50, 60, 50, 60, "Равнобедренный треугольник") { get_print(); }
};

class quadrilateral : public figure {
private:
	int a = 0;
	int b = 0;
	int c = 0;
	int d = 0;

	int A = 0;
	int B = 0;
	int C = 0;
	int D = 0;

	int sides = 4;
	std::string name = " ";
protected:
	quadrilateral(int a, int b, int c, int d, int A, int B, int C, int D, std::string name) {
		this->a = a;
		this->b = b;
		this->c = c;
		this->d = d;

		this->A = A;
		this->B = B;
		this->C = C;
		this->D = D;

		
		this->name = name;
	}

public:
	bool chek() override {
		
		
		 if (name == "Четырехугольник") {
			if ((A + B + C + D == 360) && (sides == 4)) {
				return true;
			}
			else return false;
		}
	}
	void get_print() override {
		std::cout << name << ": " << std::endl;
		if (chek() == true) {
			std::cout << "Правильная" << std::endl;
		}
		else {
			std::cout << "Неправильная" << std::endl;
		}
		std::cout << "Стороны:  a = " << a << ", b = " << b << ", c = " << c << ", d = " << d << std::endl;
		std::cout << "Углы:  A = " << A << ", B = " << B << ", C = " << C << ", D = " << D << std::endl;
		std::cout << std::endl;
	}
	quadrilateral() : quadrilateral(10, 20, 30, 40, 50, 60, 70, 80, "Четырехугольник") { get_print(); }


};




class parallelogram : public quadrilateral {
private:
	int a = 0;
	int b = 0;
	int c = 0;
	int d = 0;

	int A = 0;
	int B = 0;
	int C = 0;
	int D = 0;

	std::string name = " ";
protected:
	parallelogram(int a, int b, int c, int d, int A, int B, int C, int D, std::string name){
		this->a = a;
		this->b = b;
		this->c = c;
		this->d = d;

		this->A = A;
		this->B = B;
		this->C = C;
		this->D = D;

		this->name = name;
		
	}
	
public:
	parallelogram() : parallelogram(10, 10, 10, 10, 70, 110, 70, 110, "Параллелограмм") { get_print(); }
	bool chek() override {
		if (name == "Прямоугольник") {
			if ((a = c) && (b = d) && (A = B = C = D = 90)) {
				return true;
			}
			else return false;
		}
		
		else if (name == "Ромб") {
			if ((a = b = c = d) && (A = C) && (B = D)) {
				return true;
			}
			else return false;
		}
		else if (name == "Квадрат") {
			if ((A = B = C = D = 90) && (a = b = c = d)) {
				return true;
			}
			else return false;
		}
		else if (name == "Параллелограмм") {
			if ((a == c) && (b == d) && (A == C) && (B == D)) {
				return true;
			}
			else return true;
		}
	};
	void get_print() override {
		std::cout << name << ": " << std::endl;
		if (chek() == true) {
			std::cout << "Правильная" << std::endl;
		}
		else {
			std::cout << "Неправильная" << std::endl;
		}
		std::cout << "Стороны:  a = " << a << ", b = " << b << ", c = " << c << ", d = " << d << std::endl;
		std::cout << "Углы:  A = " << A << ", B = " << B << ", C = " << C << ", D = " << D << std::endl;
		std::cout << std::endl;
	}


	

	

};
class quadr : public parallelogram {
public:
	quadr() : parallelogram(10, 10, 10, 10, 90, 90, 90, 90, "Квадрат") { get_print(); }
};
class romb : public parallelogram {
public:
	romb() : parallelogram(10, 50, 10,50, 110, 70, 70, 110, "Ромб") { get_print(); }
};
class prm_quadre : public parallelogram {
public:
	prm_quadre() : parallelogram(10,20, 10,20, 90,90,90,90, "Прямоугольник") { get_print(); }
};

void print_info(figure* fig) {	
	fig->get_print();
}



int main() {
	SetConsoleCP(1251);
	SetConsoleOutputCP(1251);

	figure* t = new triange;
	print_info(t);
	figure* r_t = new rt_triange;
	print_info(r_t);
	figure* rvb_t = new rbd_triange;
	print_info(rvb_t);
	figure* rvst_ = new rvst_triange;
	print_info(rvst_);

	figure* q = new quadrilateral;
	print_info(q);
	figure* q_pr = new prm_quadre;
	print_info(q_pr);
	figure* q_kv= new quadr;
	print_info(q_kv);
	figure* q_r = new romb;
    print_info(q_r);
	figure* q_pa = new parallelogram;
	print_info(q_pa);

	delete t;
	delete r_t;
	delete rvb_t;
	delete rvst_;
	delete q;
	delete q_pr;
	delete q_kv;
	delete q_r;
	delete q_pa;
}
