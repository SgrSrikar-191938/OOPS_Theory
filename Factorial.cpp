 #include<iostream>
 using namespace std;
 int fact(int);          //Function prototype
   int main()
 { 
	int x;
	cout<<"Enter the value for which the factorial has to be calculated: ";
	cin>>x;
	cout<<"The factorial of "<<x<<" is: ";
	cout<<fact(x);      //Calling factorial function
	return 0;
 }
   int fact(int x)        //Definition of factorial function
  {
	 int ans;
	if(x==0 || x==1)
	return 1;
	else
	ans=x*fact(x-1);      //Recursive call
	return ans;
  }

