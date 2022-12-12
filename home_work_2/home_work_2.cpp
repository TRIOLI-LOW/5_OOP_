#include<iostream>
#include<Windows.h>
class figure  {
public:
	figure() {
		
	}
	 virtual void get_print() {
	
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
		this->a = a;
		c = a;
		this->b = b;
		this->A = A ;
		C = A;
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
	
	triange() : triange(10, 20, 30, 50, 60, 70, "Треугольник") {  }
	 void  get_print() override {
		std::cout << name << ": " << std::endl;
		std::cout << "Стороны:  a = " << a << ", b = " << b << ", c = " << c << std::endl;
		std::cout << "Углы:  A = " << A << ", B = " << B << ", C = " << C << std::endl;
		std::cout << std::endl;
	}

};

class rt_triange : public triange {
public:
	rt_triange() : triange(10, 20, 30, 60, 30, "Прямоугольный треугольник") {  }
	};
	class rvst_triange : public triange {
	public:
		rvst_triange() : triange(15, "Равносторонний треугольник") {  }
	};
	class rbd_triange : public triange {
	public:
		rbd_triange() : triange(50, 60, 50, 60, "Равнобедренный треугольник") { }
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
		quadrilateral(int a, int b, int A, int B, std::string name)  {
			this->a = a;
			c = a;
			this->b = b;
			d = b;
			this->A = A ;
			C = A;
			this->B = B ;
			D = B;

			this->name = name;
		}

	public:
		
		void get_print() override{
			std::cout << name << ": " << std::endl;
			std::cout << "Стороны:  a = " << a << ", b = " << b << ", c = " << c << ", d = " << d << std::endl;
			std::cout << "Углы:  A = " << A << ", B = " << B << ", C = " << C << ", D = " << D << std::endl;
			std::cout << std::endl;
		}
		quadrilateral() : quadrilateral(20, 20, 30, 40, 50, 60, 70, 80, "Четырехугольник") {  }


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

		parallelogram(int a, std::string name) {
			this->a = a;
			d = b = c = a;
			A = B = C = D = 90;
			this->name = name;
			
		}
		parallelogram(int a, int b, std::string name) {
			this->a = a;
			this->b = b;
			c = a;
			d = b;
			A = B = C = D = 90;
			this->name = name;
			
		}
		parallelogram(int a, int A, int B, std::string name) {
			this->a = a ;
			b = c = d = a;
			this->A = A;
			C = A;
			this->B = B;
			D = B;
			this->name = name;
			
		}
		parallelogram (int a, int b, int A, int B, std::string name) {
			this->a = a;
			c = a;
			this->b = b;
			d = b;
			this->A = A;
			C = A;
			this->B = B;
			D = B;

			this->name = name;
			
		}
	public:
		parallelogram() : parallelogram(30, 20, 70, 110, "Параллелограм") {
		
		}
		void get_print() override {
			std::cout << name << ": " << std::endl;
			std::cout << "Стороны:  a = " << a << ", b = " << b << ", c = " << c << ", d = " << d << std::endl;
			std::cout << "Углы:  A = " << A << ", B = " << B << ", C = " << C << ", D = " << D << std::endl;
			std::cout << std::endl;
		}


	};
	class quadr : public parallelogram {
	public:
		quadr() : parallelogram(15, "Квадрат") {  }
	};
	class romb : public parallelogram {
	public:
		romb() : parallelogram(10, 70, 110, "Ромб") {  }
	};
	class prm_quadre : public parallelogram {
	public:
		prm_quadre() : parallelogram(10, 20, "Прямоугольник") {  }
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
		figure* q_kv = new quadr;
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
