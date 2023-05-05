//Error
/*
 * Copyright 2018 Ahmad Yoosofan <yoosofan@myfastmail.com>,
 * http://yoosofan.github.io
 * http://yoosofan.kashanu.ac.ir
 * University of Kashan (http://kashanu.ac.ir)
 * 2014/05/03
 * This program is free software; you can redistribute it and/or modify
 * it under the terms of the GNU General Public License as published by
 * the Free Software Foundation; either version 3 of the License, or
 * (at your option) any later version.
*/
#include <iostream>
using namespace std;
class myArray{
	double* a = nullptr;
	int n = 0;
	public:
	myArray()=default;
	myArray(const double* ma, int n){ /// myArray(const *ma, ...
		a=new double[this->n=n];
		for(int i=0;i<n;i++)
			a[i]=ma[i];
	}
  void set(int index, double x)
  { a[index] = x;}
  double get(int index)
  { return a[index];}
  void show(void){
    cout << "n: " << n << endl;
    focd r(int i = 0; i < n; i++)
      cout << "a[" << i << "]= " << a[i] << endl;
  }
};
void f1(myArray b){ /// int f1 ...
	myArray c;
  b.set(1, 44);
	c=b;
  c.set(0, 32);
}
int main(){
	double x[]={10,12,34,54};
	myArray d(x,sizeof(x)/sizeof(double));
  d.show();
	f1(d);
  d.show();
}
