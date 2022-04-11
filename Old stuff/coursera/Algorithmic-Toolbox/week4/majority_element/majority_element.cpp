#include <algorithm>
#include <iostream>
#include <vector>
#include <stdio.h>
//#include <conio.h>	 // _getch only works when conio.h lib is included.

using std::vector;
bool is_majority(int ele, vector<int> &a, int left, int right)
{
	int count = 0;
	for (int i = left; i < right; i++)
	{
		if (a[i] == ele)
		{
			count++;
		}
	}
	if (count > (right - left ) / 2)
	{
		return 1;
	}
	else
	{
		return 0;
	}
}

int get_majority_element(vector<int> &a, int left, int right) {
  if (left == right) return -1;
  if (left + 1 == right) return a[left];	  //base case where only one element is left in the array

  //debug print
  //std::cout << "printing left & right indexes ==" << left << " " << right << std::endl;

  //write your code here
  int mid = int(left + ((right - left) / 2));
  int major_left = get_majority_element(a, left, mid);
  int major_right = get_majority_element(a, mid, right);


  //debug print
  //std::cout << "printing major element found == " << major_left << "  " << major_right << std::endl;

  //merging the output of recursive levels
  if (major_left == major_right)
  {
	 return major_left;
  }
  else if (major_left != major_right)
  {
	  if (major_left != -1 && major_right == -1)
	  {
		  if (is_majority(major_left, a, left, right))
		  {
			  return major_left;
		  }
		  else
		  {
			  return -1;
		  }
	  }
	  else if (major_left == -1 && major_right != -1)
	  {
		  if (is_majority(major_right, a, left, right))
		  {
			  return major_right;
		  }
		  else
		  {
			  return -1;
		  }
	  }
	  else if (major_left != -1 && major_right != -1)
	  {
		  if (is_majority(major_right, a, left, right))
		  {
			  return major_right;
		  }
		  else if (is_majority(major_left, a, left, right))
		  {
			  return major_left;
		  }
		  else
		  {
			  return -1;
		  }
	  }
  }
  else
  {
	  return -1;
  }

}


int main() {
  int n;
  std::cin >> n;
  vector<int> a(n);
  for (size_t i = 0; i < a.size(); ++i) {
    std::cin >> a[i];
  }
  std::cout << (get_majority_element(a, 0, a.size()) != -1) << '\n';

//  _getch();
}
