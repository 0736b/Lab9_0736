#include<iostream>
using namespace std;

int main(){
	char grade;
	int i = 1;
	int count[5] = {0,0,0,0,0}; //Declare array count for counting A,B,C,D,F and initialize all element = 0
	cout << "Please input grade of each student (A-F) or input 0 to exit.\n";
	do{
		cout << "Student [" << i << "]: ";
		cin >> grade; //The loop must be terminated when grade = '0'
		if(grade == 'A'){
			count[0]++;
		} // if grade is A
			//Do something
		else if(grade == 'B'){
			count[1]++;
		} // if grade is B
		else if(grade == 'C'){
			count[2]++;
		}
		else if(grade == 'D'){
			count[3]++;
		}
		else if(grade == 'F'){
			count[4]++;
		}
		else if(grade == '0'){
			i--;
			break;
		}   	//Do something //and so on ... for grade = C, D, F	
		else{ // grade is wrong input
			cout << "Wrong input. Please input again.\n"; //Do something
			continue;
		} 
		i++;
	}while(true);
	
	cout << "In total " << i << " students.\n";
	cout << "A = " << count[0] <<", ";
	cout << "B = " << count[1] <<", ";	
	cout << "C = " << count[2] <<", ";	
	cout << "D = " << count[3] <<", ";	
	cout << "F = " << count[4];	
	//	and so on ... for grade = C, D, F	
	
	return 0;
}
