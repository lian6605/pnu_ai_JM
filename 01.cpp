//Start C++


//#include <iostream>
//
//int main(void)
//{
//	int num = 20;
//	std::cout << "Hello World!" << std::endl;
//	std::cout << "Hello "<<"World!" << std::endl;
//	std::cout << num << '  ' << 'A';
//	std::cout << '  ' << 3.14 << std::endl;
//	return 0;
//} 



//#include <iostream>
//
//int main(void)
//{
//	int val1;
//	std::cout << "first number input : ";
//	std::cin >> val1;
//
//	int val2;
//	std::cout << "second number input : ";
//	std::cin >> val2;
//
//	int val3;
//	std::cout << "third number input : ";
//	std::cin >> val3;
//
//	int result = val1 + val2 + val3;
//	std::cout << "summary : " << result << std::endl;
//	return 0;
//}


//#include <iostream>
//
//int main(void)
//{
//	int val1, val2;
//	int result = 0;
//	std::cout << "두 개의 숫자입력 : ";
//	std::cin >> val1 >> val2;
//
//	if (val1 < val2)
//	{
//		for (int i = val1 + 1; i < val2; i++)
//			result += i;
//	}
//	else
//	{
//		for (int i = val2 + 2; i < val1; i++)
//			result += i;
//	}
//
//	std::cout << "두 수 사이의 정수 합: " << result << std::endl;
//	return 0;
//}

//
//#include <iostream>
//
//int main(void)
//{
//	char name[100];
//	char lang[200];
//
//	std::cout << "Name? ";
//	std::cin >> name;
//
//	std::cout << "Programming language? ";
//	std::cin >> lang;
//
//	std::cout << "My name is " << name << ". \n";
//	std::cout << "My favorite language is " << lang << " ." << std::endl;
//	return 0;
//}



//#include <iostream>
//
//int Adder(int num1 = 1, int num2 = 2)
//{
//	return num1 + num2;
//}
//
//int main(void)
//{
//	std::cout << Adder() << std::endl;
//	std::cout << Adder(5) << std::endl;
//	std::cout << Adder(3, 5) << std::endl;
//	return 0;
//}

//#include <iostream>
//
//inline int SQUARE(int x)
//{
//	return x * x;
//}
//
//int main(void)
//{
//	std::cout << SQUARE(5) << std::endl;
//	std::cout << SQUARE(12) << std::endl;
//	return 0;
//}
//
//
//#include <stdio.h>
//#define square(x) x * x
//
//int main(int argc, char **argv)
//{
//	printf("square(3) : %d \n", square(3));
//	return 0;
//}
//



//#include <iostream>
//
//namespace BestComImpl
//{
//	void SimpleFunc(void)
//	{
//		std::cout << "BestCom Definition" << std::endl;
//	}
//}
//
//namespace ProgComImpl
//{
//	void SimpleFunc(void)
//	{
//		std::cout << "ProgCom Definition" << std::endl;
//	}
//}
//
//int main(void)
//{
//	BestComImpl::SimpleFunc();
//	ProgComImpl::SimpleFunc();
//	return 0;
//}



//#include <iostream>
//
//namespace BestComImpl
//{
//	void SimpleFunc(void);
//}
//
//namespace ProgComImpl
//{
//	void SimpleFunc(void);
//}
//
//int main(void)
//{
//	BestComImpl::SimpleFunc();
//	ProgComImpl::SimpleFunc();
//	return 0;
//}
//
//void BestComImpl::SimpleFunc(void)
//{
//	std::cout << "BestCom Definition" << std::endl;
//}
//
//void ProgComImpl::SimpleFunc(void)
//{
//	std::cout << "ProgCom Definition" << std::endl;
//}

//
//#include <iostream>
//
//namespace BestComImpl
//{
//	void SimpleFunc(void);
//}
//
//namespace BestComImpl
//{
//	void PrettyFunc(void);
//}
//
//namespace ProgComImpl
//{
//	void SimpleFunc(void);
//}
//
//int main(void)
//{
//	BestComImpl::SimpleFunc();
//	return 0;
//}
//
//
//void BestComImpl::SimpleFunc(void)
//{
//	std::cout << "BestCom Definition" << std::endl;
//	PrettyFunc();
//	ProgComImpl::SimpleFunc();
//}
//
//void BestComImpl::PrettyFunc(void)
//{
//	std::cout << "So Pretty!!" << std::endl;
//}
//
//void ProgComImpl::SimpleFunc(void)
//{
//	std::cout << "ProgCom Definition" << std::endl;
//}




//#include <iostream>
//
//namespace BestComImpl
//{
//	void SimpleFunc(void);
//}
//
//namespace BestComImpl
//{
//	void PrettyFunc(void);
//}
//
//namespace ProgComImpl
//{
//	void SimpleFunc(void);
//}
//
//int main(void)
//{
//	BestComImpl::SimpleFunc();
//	return 0;
//}
//
//void BestComImpl::SimpleFunc(void)
//{
//	std::cout << "BestCom Definition" << std::endl;
//	PrettyFunc();
//	ProgComImpl::SimpleFunc();
//}
//
//void BestComImpl::PrettyFunc(void)
//{
//	std::cout << "So Pretty!!" << std::endl;
//}
//
//void ProgComImpl::SimpleFunc(void)
//{
//	std::cout << "ProgCom Definition" << std::endl;
 //}

//#include <iostream>
//
//namespace Hybrid
//{
//	void HybFunc(void)
//	{
//		std::cout << "So Simple function!" << std::endl;
//		std::cout << "In namespace Hybrid!" << std::endl;
//	}
//}
//
//int main(void)
//{
//	using Hybrid::HybFunc;
//	HybFunc();
//	return 0;
//}



//#include <iostream>
//using std::cin;
//using std::cout;
//using std::endl;
//
//int main(void)
//{
//	int num = 20;
//	cout << "Hello World!" << endl;
//	cout << "Hello " << "World!" << endl;
//	cout << num << '  ' << 'A';
//	cout << '  ' << 3.14 << endl;
//	return 0;
//}



#include <iostream>
using namespace std;

namespace AAA
{
	namespace BBB
	{
		namespace CCC
		{
			int num1;
			int num2;
		}
	}
}

int main(void)
{
	AAA::BBB::CCC::num1 = 20;
	AAA::BBB::CCC::num2 = 30;

	namespace ABC = AAA::BBB::CCC;
	cout << ABC::num1 << endl;
	cout << ABC::num2 << endl;
	return 0;
}
