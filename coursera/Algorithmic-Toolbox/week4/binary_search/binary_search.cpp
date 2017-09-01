#include "stdafx.h"
#include <iostream>
#include <cassert>
#include <vector>

using std::vector;
int total_offset = 0;

int binary_search(const vector<int> &a, int x) {
  int left = 0, right = (int)a.size(); 



  if (x == a[((left + right) / 2)])
  {
	  if (total_offset == 0)
	  {
		  return (left + right) / 2;
	  }
	  else
	  {
		  return total_offset;
	  }
  }

  else if (x < a[((left + right) / 2)])
  {
	  if (a.size() == 1)
	  {
		  return -1;
	  }
	  else
	  {
		  vector<int>::const_iterator L = a.begin();
		  vector<int>::const_iterator R = (a.begin() + (((left + right) / 2)));
		  vector<int> left_half(L, R);
		  binary_search(left_half, x);
	  }
  }
  else if (x > a[((left + right) / 2)])
  {
	  if (a.size() == 1)
	  {
		  return -1;
	  }
	  else
	  {
		  vector<int>::const_iterator L = (a.begin() + (((left + right) / 2)));
		  vector<int>::const_iterator R = a.end();
		  vector<int> left_half(L, R);
		  binary_search(left_half, x);
		  total_offset = total_offset + (a.size() - left_half.size());
	  }  
  }

}

int linear_search(const vector<int> &a, int x) {
  for (size_t i = 0; i < a.size(); ++i) {
    if (a[i] == x) return i;
  }
  return -1;
}

int main() {
  int n;
  std::cin >> n;
  vector<int> a(n);
  for (size_t i = 0; i < a.size(); i++) {
    std::cin >> a[i];
  }
  int m;
  std::cin >> m;
  vector<int> b(m);
  for (int i = 0; i < m; ++i) {
    std::cin >> b[i];
  }
  for (int i = 0; i < m; ++i) {
    //replace with the call to binary_search when implemented
    std::cout << binary_search(a, b[i]) << ' ' ;
  }

  _gettch();
}
