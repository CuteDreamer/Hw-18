#include <iostream>
#include <string>
using namespace std;

//////////////////////////////// TASK 3 ////////////////////////////

//struct Date {
//	unsigned short day;
//	unsigned short month;
//	unsigned short year;
//};
//struct Address {
//	char* city;
//	char* street;
//	unsigned short house;
//};
//
//struct Name {
//	char* name;
//	char* surname;
//	char* patronymic;
//};
//
//struct Progress {
//	unsigned short* credits;
//	unsigned short* courseworks;
//	unsigned short* exams;
//};
//
//struct Student {
//	Name fullname;
//	Date birthdate;
//	Address address;
//	char* phone_num;
//	Progress prog;
//
//};
//
//void Input_fullname(Name& fullname)
//{
//	cout << "Input your fullname!!";
//	fullname.name = new char[50];
//	cout << "Input name: ";
//	cin >> fullname.name;
//	fullname.surname = new char[50];
//	cout << "Input surname: ";
//	cin >> fullname.surname;
//	fullname.patronymic = new char[50];
//	cout << "Input patronymic: ";
//	cin >> fullname.patronymic;
//}
//
//void Input_Date(Date& birthdate)
//{
//	cout << "Input your birthday!!! \n";
//	cout << "Input day: ";
//	cin >> birthdate.day;
//	cout << "Input month: ";
//	cin >> birthdate.month;
//	cout << "Input year: ";
//	cin >> birthdate.year;
//}
//
//void Input_Adress(Address& address)
//{
//	cout << "Input adress!!";
//	cout << "Input city: ";
//	address.city = new char[50];
//	cin >> address.city;
//	cout << "Input street: ";
//	address.street = new char[50];
//	cin >> address.street;
//	cout << "Input house: ";
//	cin >> address.house;
//}
//
//void Input_progress(Progress& prog)
//{
//	cout << "Input progress!!";
//	cout << "Input credits: ";
//	prog.credits = new unsigned short[1];
//	cin >> prog.credits[0];
//	cout << "Input courseworks: ";
//	prog.courseworks = new unsigned short[1];
//	cin >> prog.courseworks[0];
//	cout << "Input exams: ";
//	prog.exams = new unsigned short[1];
//	cin >> prog.exams[0];
//}
//
//void print_student_info(Student& student)
//{
//	cout << "Stud name: \n";
//	cout << student.fullname.name << "\n";
//	cout << student.fullname.surname << "\n";
//	cout << student.fullname.patronymic << "\n";
//
//	cout << "Stud adress: \n";
//	cout << student.address.city << "\n";
//	cout << student.address.street << "\n";
//	cout << student.address.house << "\n";
//
//	cout << "Stud birthdate: \n";
//	cout << student.birthdate.day << "\n";
//	cout << student.birthdate.month << "\n";
//	cout << student.birthdate.year << "\n";
//
//	cout << "Stud progress: \n";
//	cout << *student.prog.credits << "\n";
//	cout << *student.prog.courseworks << "\n";
//	cout << *student.prog.exams << "\n";
//
//	cout << student.phone_num;
//}
//
//void delete_student(Student& student)
//{
//	delete[] student.fullname.name;
//	delete[] student.fullname.surname;
//	delete[] student.fullname.patronymic;
//	delete[] student.address.city;
//	delete[] student.address.street;
//	delete[] student.phone_num;
//	delete[] student.prog.credits;
//	delete[] student.prog.courseworks;
//	delete[] student.prog.exams;
//}
//
//int main()
//{
//	Student student;
//
//	Input_fullname(student.fullname);
//	Input_Date(student.birthdate);
//	Input_Adress(student.address);
//	cout << "Input phone num: ";
//	student.phone_num = new char[15];
//	cin >> student.phone_num;
//	Input_progress(student.prog);
//	print_student_info(student);
//	delete_student(student);
//
//}



//////////////////////////// TASK 6 ///////////////////////////    Задолбался я с этим заданием, я не уверен что оно правильное.
struct Input_date {
	unsigned short day;
	unsigned short month;
	unsigned short year;
};
struct Actual_date {
	unsigned short day;
	unsigned short month;
	unsigned short year;
};
struct Sold_Date {
	unsigned short day;
	unsigned short month;
	unsigned short year;
};

struct Warranty_period {
	unsigned short day;
	unsigned short month;
	unsigned short year;
};
struct Device {
	char* type;
	char* name;
	char* model;
	char* brand;
	Warranty_period warranty;
	double price;
	Sold_Date sold;	
};

int compare_dates(Sold_Date date1, Sold_Date date2) {
	if (date1.year < date2.year) {
		return -1;
	}
	else if (date1.year > date2.year) {
		return 1;
	}
	else {
		
		if (date1.month < date2.month) {
			return -1;
		}
		else if (date1.month > date2.month) {
			return 1;
		}
		else {
			
			if (date1.day < date2.day) {
				return -1;
			}
			else if (date1.day > date2.day) {
				return 1;
			}
			else {
				
				return 0;
			}
		}
	}
}

void Input_device(Device& dev)
{
	cout << "Input type of device: ";
	dev.type = new char[50];
	cin >> dev.type;
	cout << "Input device name: ";
	dev.name = new char[50];
	cin >> dev.name;
	cout << "Input device model: ";
	dev.model = new char[50];
	cin >> dev.model;
	cout << "Input device brand: ";
	dev.brand = new char[50];
	cin >> dev.brand;
	cout << "Input price: ";
	cin >> dev.price;
}

void warranty(Warranty_period& period)
{
	cout << "Input date of waranty period!!";
	cout << "Input day";
	cin >> period.day;
	cout << "Input month";
	cin >> period.month;
	cout << "Input year";
	cin >> period.year;
}

void sold_date(Sold_Date& sold)
{
	cout << "Input date of sold!!";
	cout << "Input day";
	cin >> sold.day;
	cout << "Input month";
	cin >> sold.month;
	cout << "Input year";
	cin >> sold.year;
}

void actual_date(Actual_date& today)
{
	cout << "Input actual date!!";
	cout << "Input day";
	cin >> today.day;
	cout << "Input month";
	cin >> today.month;
	cout << "Input year";
	cin >> today.year;
}

void input_date(Input_date& interest_date)
{
	cout << "Input date!!";
	cout << "Input day";
	cin >> interest_date.day;
	cout << "Input month";
	cin >> interest_date.month;
	cout << "Input year";
	cin >> interest_date.year;
}
void delete_dev(Device& dev)
{
	delete[] dev.type;
	delete[] dev.name;
	delete[] dev.model;
	delete[] dev.brand;
}

void check_warranty(Device& dev, Actual_date& today)
{
	Sold_Date end_warranty;
	end_warranty.day = dev.sold.day + dev.warranty.day;
	end_warranty.month = dev.sold.month + dev.warranty.month;
	end_warranty.year = dev.sold.year + dev.warranty.year;

	if (end_warranty.day > 30) {
		end_warranty.day -= 30;
		end_warranty.month++;
	}
	if (end_warranty.month > 12) {
		end_warranty.month -= 12;
		end_warranty.year++;
	}
	if (today.year < end_warranty.year ||
		(today.year == end_warranty.year && today.month < end_warranty.month) ||
		(today.year == end_warranty.year && today.month == end_warranty.month && today.day <= end_warranty.day)) {
		cout << "The warranty is still valid.\n";
	}
	else {
		cout << "The warranty has expired.\n";
	}
}

void check_count_sales(Device sales[], int sales_count, Sold_Date& start_date, Sold_Date& end_date) {
	int count = 0;
	for (int i = 0; i < sales_count; i++) {
		if (compare_dates(sales[i].sold, start_date) >= 0 &&
			compare_dates(sales[i].sold, end_date) <= 0) {
			count++;
		}
	}
	cout << "Number of sales: " << count << "\n";
}

void print_device_types(Device sales[], int sales_count) {
	for (int i = 0; i < sales_count; i++) {
		cout << sales[i].type << "\n";
	}
}

double total_sales(Device sales[], int sales_count, Sold_Date& start_date, Sold_Date& end_date) {
	double total = 0;
	for (int i = 0; i < sales_count; i++) {
		if (compare_dates(sales[i].sold, start_date) >= 0 &&
			compare_dates(sales[i].sold, end_date) <= 0) {
			total += sales[i].price;
		}
	}
	return total;
}

int main()
{
	const int MAX_SALES = 1000;
	Device* sales = new Device[MAX_SALES];
	int sales_count = 0;
	Device dev;

	// Вводим данные об устройстве
	Input_device(dev);

	// Добавляем устройство в массив продаж
	sales[sales_count] = dev;
	sales_count++;

	// Проверяем гарантию
	Actual_date today;
	actual_date(today);
	check_warranty(dev, today);

	// Проверяем количество продаж
	Sold_Date start_date, end_date;
	sold_date(start_date);
	sold_date(end_date);
	check_count_sales(sales, sales_count, start_date, end_date);

	// Выводим все типы изделий
	print_device_types(sales, sales_count);

	// Подсчитываем сумму всех продаж
	double total = total_sales(sales, sales_count, start_date, end_date);
	cout << "Total sales: " << total << "\n";

	// Удаляем устройство
	delete_dev(dev);
	delete[] sales;

}