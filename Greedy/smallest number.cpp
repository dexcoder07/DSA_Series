#include <bits/stdc++.h>
using namespace std;

// // Prints the smallest possible number with digit sum 's'
// // and 'm' number of digits.
// void findSmallest(int m, int s)
// {
// 	// If sum of digits is 0, then a number is possible
// 	// only if number of digits is 1.
// 	if (s == 0)
// 	{
// 		(m == 1)? cout << "Smallest number is " << 0
// 				: cout << "Not possible";
// 		return ;
// 	}

// 	// Sum greater than the maximum possible sum.
// 	if (s > 9*m)
// 	{
// 		cout << "Not possible";
// 		return ;
// 	}

// 	// Create an array to store digits of result
// 	int res[m];

// 	// deduct sum by one to account for cases later
// 	// (There must be 1 left for the most significant
// 	// digit)
// 	s -= 1;

// 	// Fill last m-1 digits (from right to left)
// 	for (int i=m-1; i>0; i--)
// 	{
// 		// If sum is still greater than 9,
// 		// digit must be 9.
// 		if (s > 9)
// 		{
// 			res[i] = 9;
// 			s -= 9;
// 		}
// 		else
// 		{
// 			res[i] = s;
// 			s = 0;
// 		}
// 	}

// 	// Whatever is left should be the most significant
// 	// digit.
// 	res[0] = s + 1; // The initially subtracted 1 is
// 					// incorporated here.

// 	cout << "Smallest number is ";
// 	for (int i=0; i<m; i++)
// 		cout << res[i];
// }


string smallestNumber(int S, int D){
        // code here 
        string str = "";
        
        int sum = 0;
        for(int i = 0 ; i < D ; i++){
			// cout << "yes";
            sum += 9;
			// cout << sum << endl;
			
            if(sum > S){
				// cout << "yes"<<endl;
                sum = sum - S;
                sum = 9 - sum;

				// cout << sum << endl;
                // str.push_back(sum);
				str.push_back(sum);
				// cout << str;
				// cout << str;
                break;
            }
            else{
				str.push_back(sum);
            }
        }
        
        // reverse(str.begin(), str.end());
        
        return str;
    }

// Driver code
int main()
{
	int s = 20, m = 3;
	string str = smallestNumber(s, m);
	cout << str;
	return 0;
}
