#include<iostream>
#include<Windows.h>
class figure  {
public:
	figure() {
		
	}
	
	  void get_print(figure* fig){
		 
	
	 };
};
class triange: public figure {
private: 
	int a = 0;
	int b = 0;
	int c = 0;

	int A = 0;
	int B = 0;
	int C = 0;

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
	triange(int a, int b, int A, int B, int C, std::string name) {
		this->a = a;
		this->b = b;
		c = 90;
		this->A = A;
		this->B = B;
		this->C = C;

		this->name = name;

	}

	triange(int a, int b, int A, int B, std::string name) {
		this->a = a = c;
		this->b = b;
		this->A = A = C;
		this->B = B;
		
		this->name = name;

	}
	triange(int a, std::string name) {
		b = c = a;
		this->a = a;
		A = B = C = 60;
		this->name = name;
		
	}
public: 	
	
	triange() : triange(10, 20, 30, 50, 60, 70, "Треугольник") { get_print(); }
	virtual void  get_print() {
		std::cout << name << ": " << std::endl;
		std::cout << "Стороны:  a = " << a << ", b = " << b << ", c = " << c << std::endl;
		std::cout << "Углы:  A = " << A << ", B = " << B << ", C = " << C << std::endl;
		std::cout << std::endl;
	}

};

class rt_triange : public triange {
public:
	rt_triange() : triange(10, 20, 30, 60, 30, "Прямоугольный треугольник") { get_print(); }
	};
	class rvst_triange : public triange {
	public:
		rvst_triange() : triange(15, "Равносторонний треугольник") { get_print(); }
	};
	class rbd_triange : public triange {
	public:
		rbd_triange() : triange(50, 60, 50, 60, "Равнобедренный треугольник") { get_print(); }
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
		quadrilateral(int a, int b, int A, int C, std::string name) {
			this->a = a = c;
			this->b = b = d;

			this->A = A = C;
			this->B = B = D;

			this->name = name;
		}
	public:
		virtual void get_print() {
			std::cout << name << ": " << std::endl;
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

		int A = 0;
		int B = 0;

		std::string name = " ";
	protected:
		parallelogram(int a, std::string name) : parallelogram() {
			this->a = a = b;
			A = B = 90;
			this->name = name;
		}
		parallelogram(int a, int b, std::string name) : parallelogram() {
			this->a = a;
			this->b = b;
			A = B = 90;
			this->name = name;
		}
		parallelogram(int a, int A, int B, std::string name) :parallelogram() {
			this->a = a = b;
			this->A = A;
			this->B = B;
			this->name = name;
		}
	public:
		parallelogram() : quadrilateral(10, 20, 70, 110, "Параллелограм") { get_print(); }


	};
	class quadr : public parallelogram {
	public:
		quadr() : parallelogram(10, "Квадрат") {  }
	};
	class romb : public parallelogram {
	public:
		romb() : parallelogram(10, 70, 110, "Ромб") {  }
	};
	class prm_quadre : public parallelogram {
	public:
		prm_quadre() : parallelogram(10, 20, "Прямоугольник") {  }
	};

	void print_info() {

	}



	int main() {
		SetConsoleCP(1251);
		SetConsoleOutputCP(1251);
		
		figure* t = new triange;
		figure* q = new quadrilateral;
		print_info();// как я понял, в качестве аргумента нужно передать указатель на базовый класс, но мне кажется я что-то делаю не так
		// и вообще плохо понял как именно требуется от меня вывести информацию о фигуре
		
		

	}
