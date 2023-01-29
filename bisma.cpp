#include<iostream>
using namespace std;
float average(float math,float phy,float eng)
{
    float avg=(math+phy+eng)/3;
    return avg;
}
string score(float grade_score)
{
    string grade;
    if(grade_score > 70 )
    {
        grade="A+";
    }
    else if(grade_score > 60 && grade_score <= 70)
    {
        grade="B+";
    }
    return grade;
}
main()
{
    float math,physics,english,grade_score,average_result;
    string result;
    cout<<"Enter Physics : ";
    cin>> physics;
    cout<<"Enter Math :";
    cin>> math;
    cout<<"Enter English :";
    cin>> english;
    average_result=average(math,english,physics);
    grade_score=average_result+10;
    result=score(grade_score);
    cout<<result;
}