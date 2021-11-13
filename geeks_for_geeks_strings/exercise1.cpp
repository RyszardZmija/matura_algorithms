#include <iostream>
#include <string>
#include <vector>

using size_type = std::vector<std::string>::size_type;

std::string ret_chars(int i, int j, const std::string &s) {
	std::string result;

	while (i < j) {
		result += s[i++];
	}

	return result;
}

std::vector<std::string> get_words(const std::string &s) {
	std::vector<std::string> result;

	std::string::size_type i = 0, j = 0;
	for (; i != s.size(); ++i) {
		if (s[i] == '.') {
			result.push_back(ret_chars(j, i, s));
			j = i + 1;
		}
	}
	result.push_back(ret_chars(j, i, s));

	return result;
}

std::vector<std::string> reverse(const std::vector<std::string> &vec) {
	std::vector<std::string> result;

	for (int i = vec.size() - 1; i >= 0; --i) {
		result.push_back(vec[i]);
	}

	return result;
}


int main() {
	std::string s;
	std::vector<std::string> svec;

	std::getline(std::cin, s);
	
	svec = get_words(s);
	svec = reverse(svec);

	for (size_type i = 0; i < svec.size() - 1; ++i) {
		std::cout << svec[i] << ".";
	}
	std::cout << svec[svec.size() - 1];

	return 0;
}
