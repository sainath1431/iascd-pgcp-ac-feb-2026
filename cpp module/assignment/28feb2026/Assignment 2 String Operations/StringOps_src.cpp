#include"StringOps.h";

StringOps::StringOps() {
	str = NULL;
}
StringOps::StringOps(string str) {
	int i = 0;

	while (str[i] != '\0') {
		this->str[i] = str[i];
		i++;
	}
	

}
void StringOps::accept() {

	string str1;

	cout << "\n Enter String : ";
	cin >> str1;

	str = new char[str1.length()+1];

	int i = 0;
	while (str1[i] != '\0') {
		this->str[i] = str1[i];
		i++;
	}

	str[i] = '\0';
}


void StringOps::display() {
	cout << "\n String = " << str << endl;
}

int StringOps::strlen() {
	int count = 0;

	int i = 0;
	while (str[i] != '\0') {
		count++;
		i++;
	}

	return count;
}
char* StringOps::reverse() {
	int start = 0;
	int end = strlen() - 1;

	while (start < end) {
		char temp = str[start];
		str[start] = str[end];
		str[end] = temp;
		start++;
		end--;
	}

	return str;
}
bool StringOps::checkPalindrome() {
	int start = 0;
	int end = strlen() - 1;

	while (start < end) {
		if (str[start] != str[end]) {
			return false;
		}
		start++;
		end--;
	}

	return true;
}
char* StringOps::upperCase() {
	int i = 0;
	while (str[i] != '\0') {
		if (str[i] >= 'A' && str[i] <= 'Z') {
			str[i] = str[i] + 32;
		}
		i++;
	}

	return str;
}

bool StringOps::strcmp(string str1) {
	int i = 0;

	while (str[i] != '\0') {
		if (str[i] != str1[i]) {
			return false;
		}
		i++;
	}

	return true;
}