#include <bits/stdc++.h>
using namespace std;


bool arraySortedOrNot(int arr[], int n)
{

	if (n == 0 || n == 1){
        return true;
	}


	for (int i = 1; i < n; i++){
        if (arr[i - 1] > arr[i]){
            return false;
		}
	}

	return true;
}

int main()
{

	int N;
	cin>>N;
	int arr[N];
	for(int i=0; i<N; i++){
        cin>>arr[i];
	}
	if(arraySortedOrNot(arr, N))
		cout << "Yes\n";
	else
		cout << "No\n";
}
