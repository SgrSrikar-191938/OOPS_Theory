 #include<iostream>
 using namespace std;
 int fact(int);          //Function prototype
int display(int);
   int main()
 { 
	int n;
	cout<<"Enter the value for which the factorial has to be calculated: ";
	cin>>n;
     display(n);
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
int display(int x)
{
	cout<<"The factorial of "<<x<<" is: ";
	cout<<fact(x);                  //Calling Factorial function
	return 0;
}
