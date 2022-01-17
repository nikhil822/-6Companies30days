// Question Link:https://practice.geeksforgeeks.org/problems/run-length-encoding/1/#


#include <bits/stdc++.h>
using namespace std;

string encode(string src);    
 
int main() {
	
	int T;
	cin>>T;
	while(T--)
	{
		string str;
		cin>>str;
		
		cout<<encode(str)<<endl;
	}
	return 0;
}// } Driver Code Ends


/*You are required to complete this function */

string encode(string src)
{     
  //Your code here 
  string s="";
  for(int i=0;i<src.length();){
      int cnt=1;
      s+=src[i];
      char ch=src[i];
      i++;
      while(src[i]==ch){
          cnt++;
          i++;
      }
      s+=to_string(cnt);
  }
  return s;
}     
 
