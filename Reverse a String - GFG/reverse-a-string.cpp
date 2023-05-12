//{ Driver Code Starts
//Initial Template for C++


#include<bits/stdc++.h>
using namespace std;


string reverseWord(string str);


int main() {
	
	int t;
	cin>>t;
	while(t--)
	{
	string s;
	cin >> s;
	
	cout << reverseWord(s) << endl;
	}
	return 0;
	
}


// } Driver Code Ends


//User function Template for C++

string reverseWord(string str){
    /*
    int N = str.length();
    for(int i = 0; i < N/2; i++){
        swap(str[i], str[N-1-i]);
    }
    */
    
    string rev = string(str.rbegin(), str.rend());
    return rev;
}

