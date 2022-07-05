#include <iostream>
#include <vector>

using namespace std;

bool findAndReplaceAll(std::string& data, std::string toSearch, std::string replaceStr)
{
	bool ret = false;
	size_t pos = data.find(toSearch);
	while (pos != std::string::npos)
	{
		ret = true;
		data.replace(pos, toSearch.size(), replaceStr);
		pos = data.find(toSearch, pos + replaceStr.size());
	}
	return ret;
}

int main() {
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	long long T;
	cin >> T;
	for (long long i = 1; i <= T; ++i) {
		long long n;
		string s;
		cin >> n >> s;
		bool gcheck = true;
		while (gcheck == true) {
			gcheck = false;
			bool check = true;
			while (check == true) {
				check = false;
				check = findAndReplaceAll(s, "01", "2");
				gcheck = check || gcheck;
			} 
			check = true;
			while (check == true) {
				check = false;
				check = findAndReplaceAll(s, "12", "3");
				gcheck = check || gcheck;
			} 
			check = true;
			while (check == true) {
				check = false;
				check = findAndReplaceAll(s, "23", "4");
				gcheck = check || gcheck;
			}
			check = true;
			while (check == true) {
				check = false;
				check = findAndReplaceAll(s, "34", "5");
				gcheck = check || gcheck;
			}
			check = true;
			while (check == true) {
				check = false;
				check = findAndReplaceAll(s, "45", "6");
				gcheck = check || gcheck;
			} 
			check = true;
			while (check == true) {
				check = false;
				check = findAndReplaceAll(s, "56", "7");
				gcheck = check || gcheck;
			} 
			check = true;
			while (check == true) {
				check = false;
				check = findAndReplaceAll(s, "67", "8");
				gcheck = check || gcheck;
			}  
			check = true;
			while (check == true) {
				check = false;
				check = findAndReplaceAll(s, "78", "9");
				gcheck = check || gcheck;
			}  
			check = true;
			while (check == true) {
				check = false;
				check = findAndReplaceAll(s, "89", "0");
				gcheck = check || gcheck;
			} 
			check = true;
			while (check == true) {
				check = false;
				check = findAndReplaceAll(s, "90", "1");
				gcheck = check || gcheck;
			}
		}
		cout << "Case #" << i << ": " << s << "\n";
	}
	return 0;
}
