#include <iostream> 
#include <vector> 
#include <bits/stdc++.h> 
using namespace std; 
int main() 
{   int testcases;   
cin >> testcases;   
for(int i=0;i<=testcases-1;i++)
{    
     int row,col;   
	 char st[100];   
	 vector<char> 
	 Max_char_array; 
	 int count_=0;     
	 cin>>row>>col;     
	 for(int j=0;j<=row-1;j++)
	 {       
		 for(int k=0;k<=col-1;k++)
		 {         
			 cin>>st[k];         
			 if( st[k]=='#' )
			 { ++count_;         
			 }       
			 } 
			 Max_char_array.push_back(count_); 
			 count_=0;     
			 } 
			 cout<< (int)*max_element(Max_char_array.begin(),Max_char_array.end())<<endl; 
			 } 
			 return 0;   
			 }
