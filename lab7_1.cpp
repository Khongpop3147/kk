#include<string>

using namespace std;

string func1(string x){
	int i = 0, L = x.size();
	string y ;
	while(i < L){
		y += x[L-i-1];
		i++;
	}
	return y;
}

string func2(string x){
	int i = 0, L = x.size();
	string y ;
	while(i < L){
		y += toupper(x[i]);
		i++;
	}
	return y;	
}

string func3(string x){
	int i = 0, L = x.size();
	string y = "";
	while(i < L){
		y += tolower(x[i]);
		i++;
	}
	return y;	
}

int main(){
  string k;
    cout << "Input text: ";
	cin >> k ;
	
	
    cout << "Reversed text: " << func1(k) <<endl;
    if(func3(func1(k))==func3(k)){
		cout << "Palindrome: Yes";
	}else{
	    cout << "Palindrome: No";
     
     }     
    return 0;
}