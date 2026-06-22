#include<iostream>
#include<vector>
using namespace std;
#include<numeric>

int main()
{
    vector<int> scores = {80, 90, 75, 95, 88};
    scores.emplace_back(90);
    cout<<"所有成绩：";
    for(int score : scores)
    {
        cout<<score<<" ";
    }
    cout<<endl;

    int total = accumulate(scores.begin(), scores.end(), 0);
    cout<<"总成绩："<<total<<endl;
    cout<<"平均成绩："<<total/scores.size()<<endl;

    return 0;

}