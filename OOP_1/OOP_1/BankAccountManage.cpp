#include <iostream>
#include <cstring>

using namespace std;

//!!!!! 두명 이상 저장 되게끔 배열을 써서 나타내야함 !!!!!  enum !!!! 배열써서 마무리 짓기
//은행계좌 관리 프로그램 만들기
//전역변수
int ID; // 계좌 ID 
string name;// 이름
int deposit = 0; //계좌생성시 입금액
int deposit1 = 0; //계좌생성후 입금액
int withdraw = 0; //출금액
int choice; // 선택지 번호입력
int bal = 0; //잔고


void Menu() {
	cout << "-----Menu-----" << endl;
	cout << "1. 계좌개설 \n2. 입 금 \n3. 출 금\n4. 계좌정보 전체 출력 \n5. 프로그램 종료\n" << endl;
	cout << "선택: ";
	cin >> choice;
	cout << "\n";
}

//기능 1. 계좌개설
//선택: 1 을 누를시 계좌가 개설이 되면서 아이디 이름 입금액이 뜨고 정보를 입력하면 저장이 된다.
void AccountMake() {
	
	cout << "[계좌개설]" << endl;
	cout << "계좌ID: ";
	cin >> ID;
	cout << "이 름: ";
	cin >> name;
	cout << "입금액: "; 
	cin >> deposit;
	cout << "\n";
}
//기능 2. 입금
//선택 2를 입력시 계좌 아이디와 입금액 마지막 입금완료까지 마친 후 다시 menu를 띄운다.
void AccountDeposit() {
	if (deposit1 < 0) {
		cout << "0원 보다 더 많은 액 수를 넣어주세요" << endl;
	}
	cout << "[입 금]" << endl;
	cout << "계좌ID: ";
	cin >> ID;
	cout << "입금액: ";
	cin >> deposit1;
	cout << "입금완료" << endl;
	cout << "\n";
}
//기능 3. 출금
void Withdraw() {
	if (withdraw > deposit + deposit1) {
		cout << "잔액이 부족해서 출금 할 수 없습니다." << endl;
	}
	cout << "[출 금]" << endl;
	cout << "계좌ID: ";
	cin >> ID;
	cout << "출금액: ";
	cin >> withdraw;
	cout << "출금완료" << endl;
	cout << "\n";
}
//기능 4. 전체고객 잔액조회
void balance() {
	bal = (deposit+deposit1) - withdraw;
	cout << "[잔액 조회]" << endl;
	cout << "계좌ID: ";
	cin >> ID;
	cout << "이 름: " << name << endl;
	cout << "잔 액: " << bal;
	cout << "\n";
	cout << "\n";
}
//통장의 계좌번호는 중복되지 아니한다.
//입금 및 출금액은 무조건 0보다 크다.
//고객의 계좌정보는 계좌번호, 고객이름, 고객의 잔액, 이렇게 세가지만 저장
//둘 이상의 고객 정보 저장을 위해서 배열 사용
//계좌번호는 정수의 형태.
int main() {
	Menu();
	while (1) {
		if (choice == 1) {
			AccountMake();
			Menu();
		}
		else if (choice == 2) {
			AccountDeposit();
			Menu();
		}
		else if (choice == 3) {
			Withdraw();
			Menu();
		}
		else if (choice == 4) {
			balance();
			Menu();
		}
		else if (choice == 5) {
			cout << "\n프로그램을 종료하겠습니다.\n";
			return 0;
		}
	}
}