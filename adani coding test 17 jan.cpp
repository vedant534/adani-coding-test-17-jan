#include <bits/stdc++.h>
using namespace std;
int k;
//k is column index
//customized sort function to return sorted list
bool sort2D_col(const vector<int>& va, const vector<int>& vb)
{
	return va[k] < vb[k];
}



int main()
{   cout<<"Enter column index"<<endl;
    cin>>k;
    int col,ro;
    cout<<"Enter number of columns"<<endl;
    cin>>col;
    cout<<"Enter number of rows"<<endl;
    cin>>ro;
    vector<vector<int>> arr2_D(ro,vector<int>(col,0));
    //2d array created to store random numbers from 0 to 100

    for (int i=0; i<ro; i++){
        for (int j=0; j<col; j++) arr2_D[i][j] = (rand() % 100); 
    }
    cout<<"FOR QUESTION 1-randomly generated 2-D Array :"<<endl;

    for (int i=0; i<ro; i++){
        for (int j=0; j<col; j++) cout<<arr2_D[i][j]<<" ";
        cout<<endl;
    }
	sort(arr2_D.begin(), arr2_D.end(), sort2D_col);
	cout<<"FOR QUESTION 2-sorted 2-D Array :\n";
	for (int i = 0; i < ro; i++) {
		for (int j= 0; j<col; j++) cout<<arr2_D[i][j]<<" ";
		cout<<endl;
	}
	return 0;
}


